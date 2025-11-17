# Problem: Check If All 1's Are at Least Length K Places Away
# Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        pos: List[int] = []
        for i in range(0, len(nums)):
            if nums[i] == 1:
                pos.append(i)
        minDiff: int = 1000000000
        if len(pos) == 0:
            return True
        else:
            for i in range(1, len(pos)):
                minDiff = min(minDiff, abs(pos[i] - pos[i - 1] - 1))
            if minDiff < k:
                return False
            else:
                return True
