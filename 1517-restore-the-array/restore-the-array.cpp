class Solution {
public:
    const int MOD = 1e9+7;
    
    int dp(int start, string &s, int &k, vector<int>& array, int n){
        if(start >= n){
            return 1;
        }
        // If it is already solved in previous steps simply return it's value.
        if(array[start] != -1){
            return array[start];
        }
        if(s[start] == '0'){
            return array[start] = 0;
        }
        long ans = 0;
        long long num = 0;
        for(int end = start; end < n; end++){
            num = (num*10) + (s[end] - '0');
            if(num > k){
                break;
            }
            ans = (ans%MOD + dp(end+1, s, k, array, n)%MOD)%MOD;
        }
        return array[start] = ans;
    }

    int numberOfArrays(string s, int k) {
        int n = s.length();
        // The Question is set in such beautiful way there are time constraints and we have to solve this in time limit.
        // Here come the concept of memoization in DP.
        // I have initialized this by 1D-array not 2D-array bcz there is only one variable is changing in function calling(indx).
        vector<int> array(n, -1);
        return dp(0, s, k, array, n); // Start from 0 index.
    }
};