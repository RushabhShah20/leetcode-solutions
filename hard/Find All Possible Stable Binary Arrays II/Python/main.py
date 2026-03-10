# Problem: Find All Possible Stable Binary Arrays II
# Link to the problem: https://leetcode.com/problems/find-all-possible-stable-binary-arrays-ii/
class Solution:
    def numberOfStableArrays(self, zero: int, one: int, limit: int) -> int:
        mod: int = 1000000007
        dp: List[List[List[int]]] = [
            [[0, 0] for _ in range(one + 1)] for _ in range(zero + 1)
        ]
        for i in range(0, min(zero, limit) + 1):
            dp[i][0][0] = 1
        for j in range(0, min(one, limit) + 1):
            dp[0][j][1] = 1
        for i in range(1, zero + 1):
            for j in range(1, one + 1):
                if i > limit:
                    dp[i][j][0] = (
                        dp[i - 1][j][0] + dp[i - 1][j][1] - dp[i - limit - 1][j][1]
                    ) % mod
                else:
                    dp[i][j][0] = (dp[i - 1][j][0] + dp[i - 1][j][1]) % mod
                dp[i][j][0] = (dp[i][j][0] + mod) % mod
                if j > limit:
                    dp[i][j][1] = (
                        dp[i][j - 1][0] + dp[i][j - 1][1] - dp[i][j - limit - 1][0]
                    ) % mod
                else:
                    dp[i][j][1] = (dp[i][j - 1][0] + dp[i][j - 1][1]) % mod
                dp[i][j][1] = (dp[i][j][1] + mod) % mod
        ans: int = (dp[zero][one][0] + dp[zero][one][1]) % mod
        return ans
