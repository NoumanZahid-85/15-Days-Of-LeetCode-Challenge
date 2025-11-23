class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> stack;
        
        for(int i = 0; i < temperatures.size(); i++){
            while(!stack.empty() && temperatures[stack.top()] < temperatures[i]){
                int idx = stack.top();
                stack.pop();
                result[idx] = i - idx;
            }
            stack.push(i);
        }
        return result;
    }
};