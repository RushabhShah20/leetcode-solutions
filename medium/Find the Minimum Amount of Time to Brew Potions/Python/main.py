# Problem: Find the Minimum Amount of Time to Brew Potions
# Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
class Solution:
    def minTime(self, skill: List[int], mana: List[int]) -> int:
        n: int = len(skill)
        m: int = len(mana)
        ans: List[int] = [0] * (n + 1)
        for j in range(0, m):
            for i in range(0, n):
                ans[i + 1] = max(ans[i + 1], ans[i]) + (mana[j] * skill[i])
            for i in range(n - 1, 0, -1):
                ans[i] = ans[i + 1] - (mana[j] * skill[i])
        return ans[n]
