class Solution {
public:
    //This is asked by Sir Tanvir in todays 3rd quiz(retake).
    int table[501][501];
    int dp(string &s, int i, int j){
        if(i >= j){
            return 0;
        }
        if(table[i][j] != -1){
            return table[i][j];
        }
        if(s[i] == s[j]){
            return table[i][j] = dp(s, i+1, j-1);
        }
        return table[i][j] = 1 + min(dp(s,i+1,j), dp(s,i,j-1));
    }
    int n;
    int minInsertions(string s) {
        n = s.length();
        memset(table, -1, sizeof(table));
        return dp(s, 0, n-1);
    }
};