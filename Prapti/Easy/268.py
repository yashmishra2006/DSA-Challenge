class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # n = len(nums)

        # for i in range(0,n+1):
        #     if i in nums:
        #         continue
        #     else:
        #         return i

        n = len(nums)
        sum = 0
        for i in nums:
            sum += i
        max_sum = n*(n+1)/2
        return max_sum - sum