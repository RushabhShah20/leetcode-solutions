# Problem: Arranging Coins
# Link to the problem: https://leetcode.com/problems/arranging-coins/
class Solution:
    def arrangeCoins(self, n: int) -> int:
        low: int = 0
        high: int = n
        ans: int = 0
        while low <= high:
            mid: int = low + (high - low) // 2
            sum: int = mid * (mid + 1) // 2
            if sum == n:
                return mid
            elif sum < n:
                ans = mid
                low = mid + 1
            else:
                high = mid - 1
        return ans
