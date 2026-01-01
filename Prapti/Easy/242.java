class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        // int slen = 0;
        // int tlen = 0;

        // for (int i = 0; i < s.length(); i++) {
        //     slen = slen + (int) s.charAt(i);
        //     tlen = tlen + (int) t.charAt(i);
        // }
        // if (slen == tlen) {
        //     return true;
        // }

        // return false;

        int freq[] = new int[26];
        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
            freq[t.charAt(i) - 'a']--;
        }

        for (int j = 0; j < freq.length; j++) {
            if (freq[j] != 0) {
                return false;
            }
        }

        return true;
    }
}