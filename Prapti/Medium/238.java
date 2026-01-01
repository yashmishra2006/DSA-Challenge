class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];
        answer[0] = 1;
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] = answer[i] * suffix;
            suffix *= nums[i];
        }
        return answer;
    }

//    int[] prod = new int[nums.length];
//     for (int i=0; i<nums.length; i++){
//         int a=1;
//         for (int j=0; j<nums.length;j++) {
//             if (i!=j) {
//                 a = a*nums[j];
//             }
//         prod[i] = a;
//         }
//     }
// return prod;
}