class Solution {
    public int majorityElement(int[] nums) {
//     int n = nums.length;
//     for (int i = 0; i < n; i++) {
//         int count = 0;

//         for (int j = 0; j < n; j++) {
//             if (nums[i] == nums[j]) {
//                 count++;
//             }
//         }

//         if (count > n / 2) {
//             return nums[i];
//         }
//     }
//     return -1;
// }

    int majority = nums[0], lead = 1;
    for (int idx = 1; idx < nums.length; idx++) {
        if (nums[idx] == majority) {
            lead++;
        } else {
            lead--;
            if (lead == 0) {
                majority = nums[idx];
                lead = 1;
            }
        }
    }
    return majority;
}

    }