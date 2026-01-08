class Solution {
    public void selectionSort(int[] arr) {
            int n = arr.length;

            for (int i = 0; i < n - 1; i++) {
                int minIndex = i;

                for (int j = i + 1; j < n; j++) {
                    if (arr[j] < arr[minIndex]) {
                        minIndex = j;
                    }
                }

                int temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
            }
        }
    
    public int thirdMax(int[] nums) {
        selectionSort(nums);

        int dist = 1;
        int n = nums.length;
        int last = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != last) {
                dist++;
                last = nums[i];

                if (dist == 3) {
                    return nums[i];
                }
            }
        }

        return nums[n - 1];
    }
}