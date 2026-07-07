class Solution {
    public int maxProduct(int[] nums) {
        int largest = 0;
        int slargest = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > largest) {
                slargest = largest;
                largest = nums[i];
            } else {
                slargest = Math.max(slargest, nums[i]);
            }
        }
        return (largest - 1) * (slargest - 1);
    }
}