class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxi = -sys.maxsize
        sumVal = 0
        for i in range(len(nums)):
            sumVal += nums[i]
            maxi = max(sumVal , maxi)
            if(sumVal < 0):
                sumVal = 0

        return maxi

        
        
        