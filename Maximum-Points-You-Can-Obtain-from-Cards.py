class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        ans = sum(cardPoints[:k])
        leftSum = sum(cardPoints[:k])
        rightSum = 0
        i=-1
        while k > 0:
            leftSum = leftSum - cardPoints[k-1]
            rightSum = rightSum + cardPoints[i]
            ans = max(ans,leftSum+rightSum)
            i -= 1
            k -= 1

        return ans




        