class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        // Solutions No. 01
        int maxSum = INT_MIN;
        // Time Complexity is O(n**2)
        // for(int start = 0; start < n; start++){
        //     int curSum = 0;
        //     for(int end = start; end < n; end++){
        //         curSum = curSum + nums[end];
        //         maxSum = max(maxSum, curSum);
        //     }
        // }
        
        // Solution No. 02:
        // Time Complexity is O(n)
        int curSum = 0;
        for(int i = 0; i < n; i++){
            curSum = curSum + nums[i];  
            maxSum = max(maxSum, curSum);
            if(curSum < 0){
                curSum = 0;
            }
        }
        return maxSum;
    }
};