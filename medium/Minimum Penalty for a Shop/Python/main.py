# Problem: Minimum Penalty for a Shop
# Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
class Solution:
    def bestClosingTime(self, customers: str) -> int:
        n: int = len(customers)
        minPenalty: int = 0
        currPenalty: int = 0
        ans: int = 0
        for i in range(0, n):
            if customers[i] == "Y":
                currPenalty -= 1
            else:
                currPenalty += 1
            if currPenalty < minPenalty:
                minPenalty = currPenalty
                ans = i + 1
        return ans
