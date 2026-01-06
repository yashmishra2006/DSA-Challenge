class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        
        c = 0
        for i in range(1,arr[-1]+k+1) :
                if i not in arr:
                    c+=1
                if c == k:
                    return i