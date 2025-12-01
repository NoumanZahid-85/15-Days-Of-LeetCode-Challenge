class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Find first decreasing element from right
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i >= 0) {
            // Step 2: Find element just larger than nums[i] from right
            int j = n - 1;
            while (j > i && nums[j] <= nums[i]) {
                j--;
            }
            // Step 3: Swap
            swap(nums[i], nums[j]);
        }
        
        // Step 4: Reverse the suffix (from i+1 to end)
        reverse(nums.begin() + i + 1, nums.end());
    }
};