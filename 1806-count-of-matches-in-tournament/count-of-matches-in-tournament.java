class Solution {
    public int numberOfMatches(int n) {
        // One simple solution is: No. of matches = teams eliminated = n-1; then winner willl be 1.
        int matches = 0;
        while(n>1){
            if(n%2 == 0){ // For EVEN
                matches = matches + n/2;
                n = n/2;
            }
            else{
                matches = matches + (n-1)/2;
                n = (n-1)/ 2+1;
            }
        }
        return matches;
    }
}