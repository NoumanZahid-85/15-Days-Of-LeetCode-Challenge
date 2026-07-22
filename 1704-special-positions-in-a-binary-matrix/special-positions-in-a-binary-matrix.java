class Solution {
    public int numSpecial(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        int[] rowCount = new int[m];
        int[] colCount = new int[n];
        
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (mat[r][c] == 1) {
                    rowCount[r]++;
                    colCount[c]++;
                }
            }
        }
        
        int result = 0;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (mat[r][c] == 1 && rowCount[r] == 1 && colCount[c] == 1) {
                    result++;
                }
            }
        }
        return result;
    }
}