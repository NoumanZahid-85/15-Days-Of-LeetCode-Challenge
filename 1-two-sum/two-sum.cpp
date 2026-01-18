class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Its TC is O(n) not O(n**2) like in double loop.
        // Make the extra map to store current number with index to use in future.
        map<int, int> mp;
        for(int i = 0; i<n; i++){
            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};