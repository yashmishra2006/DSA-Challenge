class Solution {
    public boolean isPalindrome(int x) {
        if (x<0) return false;
        
        String X = String.valueOf(x);

        int j = X.length() - 1;
        for (int i = 0; i < X.length()/2; i++) {
            if (X.charAt(i) == X.charAt(j)) {
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
}