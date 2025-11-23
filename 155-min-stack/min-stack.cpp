class MinStack {
public:
    // 1st Solution with Space Complexity O(2*n)
    stack<pair<int, int>> s;
    
    void push(int val) {
        if(s.empty()){
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {  // Fixed return type
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

    // 2nd Solution is efficient and it remove the need of storing the minVal all time.

    // stack <long long int> s;
    // long long int minVal; 
    // MinStack() {
    // }
    
    // void push(int val) {
    //     if(s.empty()){
    //         s.push(val);
    //         minVal = val;
    //     }else{
    //         if(val < minVal){
    //             s.push((long long)2*val - minVal);
    //             minVal = val;
    //         }else{
    //             s.push(val);
    //         }
    //     }
    // }
    
    // void pop() {
    //     if(s.top() < minVal){
    //         minVal = minVal*2 - s.top();
    //     }
    //     s.pop();
        
    // }
    
    // int top() {
    //     if(s.top() < minVal){
    //         return minVal;
    //     }
    //     return s.top();
    // }
    
    // int getMin() {
    //     return minVal;
    // }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */