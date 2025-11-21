class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        // There are multiple ways to solve this.
        // In O(n**2) 
        // for(int i = 0; i < n-1; i++){
        //     int first = numbers[i];
        //     for(int j = i+1; j < n; j++){
        //         int last = numbers[j];
        //         int sum = first + last;
        //         if(sum == target){
        //             return {i+1, j+1};
        //         }
        //     }
        // }
        // return {};

        // In O(n),.....O(nLogn) ------> If I see this TComplexity my mind should think about the sorting mean maximum work done would be of sorting... As sorting is already done in question so it would be done in O(n)
        int start = 0;
        int end = n-1;
        while(start < end){
            int sum = numbers[start] + numbers[end];
            if(sum == target){
                return {start+1, end+1};
            }
            else if(sum > target){
                end--;
            }
            else{
                start++;
            }
        }
        return {};
        
    }
};