class Solution {
    public void rotate(int[] nums, int k) {
        if ( k > nums.length) {
            k = k % nums.length;
        }
        int[] aux = new int[nums.length + k];
        for (int i = 0; i < nums.length - k; i++) {
            aux[k + i] = nums[i];
        }
        int a = 0;
        for (int j = nums.length - k; j < nums.length; j++) {
            aux[a] = nums[j];
            a++;
        }

        for (int l = 0; l < nums.length; l++) {
            nums[l] = aux[l];
        }
    }
}