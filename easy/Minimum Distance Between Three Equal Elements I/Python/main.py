# Problem: Minimum Distance Between Three Equal Elements I
# Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = sys.maxsize
        for i in range(0, n - 2):
            for j in range(i + 1, n - 1):
                for k in range(j + 1, n):
                    if nums[i] == nums[j] and nums[j] == nums[k]:
                        ans = min(ans, abs(i - j) + abs(j - k) + abs(k - i))
        return -1 if ans == sys.maxsize else (ans)
