# Problem: Minimum Distance Between Three Equal Elements I
# Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = sys.maxsize
        for i in range(0, n):
            for j in range(0, n):
                for k in range(0, n):
                    if i != j and j != k and i != k:
                        if nums[i] == nums[j] and nums[j] == nums[k]:
                            ans = min(ans, abs(i - j) + abs(j - k) + abs(k - i))
        return -1 if ans == sys.maxsize else (ans)
