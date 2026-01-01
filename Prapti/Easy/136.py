class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        aux = []
        for num in nums:
            if num in aux:
                aux.remove(num)
            else:
                aux.append(num)
        return aux[0]