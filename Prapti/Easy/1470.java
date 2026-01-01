class Solution {
    public int[] shuffle(int[] nums, int n) {
        int i = 0;
        int j = n;

        int[] ans = new int[2*n];
        for (int k = 0; k < nums.length; k+=2) {
            ans[k] = nums[i];
            ans[k+1] = nums[j];
            i++;
            j++;
        }
        return ans;
    }
}