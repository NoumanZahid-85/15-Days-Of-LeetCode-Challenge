class Solution {
    public String largestGoodInteger(String num) {
        int n = num.length();
        char maxChar = 0;                 // 0 means "none found yet"

        for (int i = 2; i < n; i++) {
            char current = num.charAt(i);
            if (current == num.charAt(i - 1) && current == num.charAt(i - 2)) {
                // Keep the largest digit
                if (current > maxChar) {
                    maxChar = current;
                }
            }
        }

        if (maxChar == 0) {
            return "";
        }
        return new String(new char[]{maxChar, maxChar, maxChar});
    }
}