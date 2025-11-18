class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int answer = nums[0];

        for(int i = 1 ; i < nums.size(); i++){
            int current = nums[i];

            int prevMax = maxProduct;
            int prevMin = minProduct;

            maxProduct = max({current, current*prevMax, current*prevMin});
            minProduct = min({current, current*prevMax, current*prevMin});

            answer = max(answer, maxProduct);
        }
        return answer;
    }
};