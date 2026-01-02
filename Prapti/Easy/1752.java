class Solution {
    public boolean check(int[] nums) {
        int idx = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i-1]) {
                idx++;
            }
        }

        if (nums[nums.length-1] > nums[0]) {
                idx++;
        }

        return idx <= 1;
    }
}