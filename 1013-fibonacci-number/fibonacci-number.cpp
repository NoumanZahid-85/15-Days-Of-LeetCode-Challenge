// class Solution {
// public:
//     // Method number 1, through memoization.
//     // Add & for reference 
//     int dp(int n, vector<int>& OneDArray){
//         if(n <= 1){
//             return n;
//         }
//         if(OneDArray[n] != -1){
//             return OneDArray[n];
//         }
//         return OneDArray[n] = dp(n-1, OneDArray) + dp(n-2, OneDArray);
//     }
//     int fib(int n) {
//         if(n <= 1)
//             return n;
//         // I have used 1D-Array bcz only one variable is changed here (n).    
//         vector<int> OneDArray(n+1, -1);
//         return dp(n, OneDArray);
//     }
// };

    // Method 2 through bottomUp approach using an Array as extra space.
// class Solution{
// public:
//     int fib(int n){
//         if(n <= 1){
//             return n;
//         }
//         vector<int> OneDArray(n+1, -1);
//         // OneDArray[i] is ith fibonacci number. 
//         OneDArray[0] = 0;
//         OneDArray[1] = 1;
//         for(int i = 2; i <= n; i++){
//             OneDArray[i] = OneDArray[i-1] + OneDArray[i-2];
//         }
//         return OneDArray[n];
//     }
// };


// Now lets solve this in constant space complexity.
class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        int c;
        int a = 0, b = 1;

        for (int i = 1; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};