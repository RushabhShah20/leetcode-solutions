# Problem: Length of Longest Subarray With at Most K Frequency
# Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        i: int = 0
        j: int = 0
        ans: int = 0
        m: Dict[int, int] = defaultdict(int)
        while j < n:
            m[nums[j]] += 1
            while m[nums[j]] > k and i < n:
                m[nums[i]] -= 1
                i += 1
            ans = max(ans, j - i + 1)
            j += 1
        return ans
