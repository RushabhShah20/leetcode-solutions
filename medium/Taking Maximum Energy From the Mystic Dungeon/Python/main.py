# Problem: Taking Maximum Energy From the Mystic Dungeon
# Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
class Solution:
    def maximumEnergy(self, energy: List[int], k: int) -> int:
        n: int = len(energy)
        ans: int = -sys.maxsize - 1
        dp: List[int] = [0] * n
        for i in range(n - 1, -1, -1):
            if i >= n - k:
                dp[i] = energy[i]
            else:
                dp[i] = energy[i] + dp[i + k]
            ans = max(ans, dp[i])
        return ans
