class Solution {
    public boolean Anagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

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

    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> result = new ArrayList<>();
        int aux[] = new int[strs.length];

        for (int i=0; i<strs.length; i++) {
            if (aux[i] == 1) continue;
            List<String> group = new ArrayList<>();
            group.add(strs[i]);
            aux[i] = 1;
            
            for (int j=i+1; j<strs.length; j++) {
                if (aux[j] != 1 && Anagram(strs[i], strs[j]) == true) {
                    group.add(strs[j]);
                    aux[j] = 1;
                }
            }
            result.add(group);
        }
        return result;
    }
}