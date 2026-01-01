class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int curr_max = 0;
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if(nums[i] == 1) {
                curr_max++;
                if (curr_max > max) {
                    max = curr_max;
                }
            }
            else curr_max = 0;
        }
        return max;
    }
}