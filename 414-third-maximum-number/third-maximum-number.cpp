class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // In sets elements are automatically sorted set = {10,20,30,40}.
        set<int> top3;

        for(int num: nums){
            top3.insert(num);
            // only keep max 3 elements
            if(top3.size() > 3){
                top3.erase(top3.begin()); // remove first(smallest) element.
            }
        }
        return (top3.size() == 3) ? *top3.begin() : *top3.rbegin();
    }
};