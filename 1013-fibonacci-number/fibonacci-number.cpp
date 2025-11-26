class Solution {
public:
    int dp(int n, vector<int>& OneDArray){
        if(n <= 1){
            return n;
        }
        if(OneDArray[n] != -1){
            return OneDArray[n];
        }
        return OneDArray[n] = dp(n-1, OneDArray) + dp(n-2, OneDArray);
    }
    int fib(int n) {
        if(n <= 1)
            return n;
        // I have used 1D-Array bcz only one variable is changed here (n).    
        vector<int> OneDArray(n+1, -1);
        return dp(n, OneDArray);
    }
};