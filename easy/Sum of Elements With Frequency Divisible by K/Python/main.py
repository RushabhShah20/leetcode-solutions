# Problem: Sum of Elements With Frequency Divisible by K
# Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
class Solution:
    def sumDivisibleByK(self, nums: List[int], k: int) -> int:
        m: Dict[int, int] = dict()
        for i in range(0, len(nums)):
            if nums[i] in m:
                m[nums[i]] += 1
            else:
                m[nums[i]] = 1
        ans: int = 0
        for key, value in m.items():
            if value % k == 0:
                ans += key * value
        return ans
