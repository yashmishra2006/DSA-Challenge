class Solution {
    public boolean isIsomorphic(String s, String t) {
        if (s.length() != t.length()) return false;

        int[] s_to_t = new int[256];
        int[] t_to_s = new int[256];

        for (int i = 0; i < 256; i++) {
            s_to_t[i] = -1;
            t_to_s[i] = -1;
        }

        for (int i = 0; i < s.length(); i++) {
            char c1 = s.charAt(i);
            char c2 = t.charAt(i);

            if (s_to_t[c1] == -1) {
                s_to_t[c1] = c2;
            } else if (s_to_t[c1] != c2) {
                return false;
            }

            if (t_to_s[c2] == -1) {
                t_to_s[c2] = c1;
            } else if (t_to_s[c2] != c1) {
                return false;
            }
        }

        return true;
    }
}