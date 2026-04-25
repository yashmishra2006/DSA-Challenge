class Solution {
    public int lengthOfLongestSubstring(String s) {
        int arr[] = new int[256];
        Arrays.fill(arr, -1);
        int maxLen = 0;
        int l = 0;
        for (int i = 0; i < s.length(); i++) {
            if (arr[s.charAt(i)] >= l) {
                l = Math.max(l, arr[s.charAt(i)] + 1);
            }
            arr[s.charAt(i)] = i;
            maxLen = Math.max(maxLen, i - l + 1);
        }
        return maxLen;
    }
}
