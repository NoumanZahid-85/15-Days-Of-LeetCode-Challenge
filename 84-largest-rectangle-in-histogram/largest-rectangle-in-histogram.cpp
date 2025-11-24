class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Time Complexity O(n).
        int n = heights.size();
        vector<int> left(n, 0);  // Left smaller nearest
        vector<int> right(n, 0); // Right smaller nearest
        stack<int> s;

        // Right Smaller
        for(int i = n-1; i >= 0; i--){
            while(s.size() > 0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        // WE have to reuse the Stack so make it empty.
        while(!s.empty()){
            s.pop();
        }

        // Left Smaller
        for(int i = 0; i < n; i++){
            while(s.size() > 0 && heights[s.top()] >= heights[i]){
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        // Now find the answer.
        int ans = 0;
        for(int i = 0; i < n; i++){
            int width = right[i] - left[i] - 1;
            int curArea = heights[i] * width;
            ans = max(ans, curArea);
        }
        return ans;

    }
};