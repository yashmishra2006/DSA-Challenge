class Solution {
    public int[] topKFrequent(int[] nums, int k) {

//used quite a bit of chatgpt; come back to this when you're more competent
        int maxPos = 0, maxNeg = 0;
        for (int n : nums) {
            if (n >= 0) {
                if (n > maxPos) maxPos = n;
            } else {
                if (-n > maxNeg) maxNeg = -n;
            }
        }

        int size = maxPos + maxNeg + 1;
        int[] freq = new int[size];

        for (int i = 0; i < nums.length; i++) {
            int n = nums[i];
            if (n >= 0) {
                freq[n]++;
            } else {
                freq[maxPos + (-n)]++;
            }
        }

        int[] result = new int[freq.length];
        for (int i = 0; i < freq.length; i++) {
            if (i <= maxPos) {
                result[i] = i;
            } else {
                result[i] = -(i - maxPos);
            }
        }

        for (int i = 1; i < freq.length; i++) {
            int Freq = freq[i];
            int Num = result[i];
            int j = i - 1;

            while (j >= 0 && freq[j] > Freq) {
                freq[j + 1] = freq[j];
                result[j + 1] = result[j];
                j--;
            }

            freq[j + 1] = Freq;
            result[j + 1] = Num;
        }

        int[] finall = new int[k];
        for (int i = 0; i < k; i++) {
            finall[i] = result[result.length - 1 - i];
        }

        return finall;
    }
}