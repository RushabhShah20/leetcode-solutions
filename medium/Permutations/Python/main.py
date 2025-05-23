# Problem: Permutations
# Link to the problem: https://leetcode.com/problems/permutations/
class Solution:
    def backTrack(
        self, nums: List[int], used: List[bool], sub: List[int], ans: List[List[int]]
    ):
        if len(sub) == len(nums):
            ans.append(list(sub))
            return
        for i in range(0, len(nums), 1):
            if used[i]:
                continue
            used[i] = True
            sub.append(nums[i])
            self.backTrack(nums, used, sub, ans)
            sub.pop()
            used[i] = False

    def permute(self, nums: List[int]) -> List[List[int]]:
        ans: List[List[int]] = []
        sub: List[int] = []
        used: List[bool] = [False] * len(nums)
        self.backTrack(nums, used, sub, ans)
        return ans
