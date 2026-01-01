class Solution {
    public String longestCommonPrefix(String[] strs) {
        String result = strs[0];
        for (int i = 1; i < strs.length; i++) {
            String a = strs[i];
            int min = Math.min(a.length(), result.length());
            for (int j = 0; j < min; j++) {
                if (a.length() > j && result.length() > j) {
                    if (a.charAt(j) == result.charAt(j) ) {
                        continue;
                    }
                    else if (a.charAt(j) != result.charAt(j)) {
                        result = result.substring(0,j);
                        break;
                    }

                }
            }
            
            if (result.length() > min) {
                result = result.substring(0,min);
            }
        }
        return result;
    }
}