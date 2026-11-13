# Problem: Count Non-Decreasing Subarrays After K Operations
# Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
class Solution:
    def countNonDecreasingSubarrays(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        ans: int = 0
        x: int = 0
        st: List[int] = [0] * n
        a: int = 0
        b: int = 0
        j: int = n - 1
        for i in range(n - 1, -1, -1):
            while a < b and nums[st[b - 1]] < nums[i]:
                b -= 1
                y: int = st[b]
                r: int = st[b - 1] if (a < b) else j + 1
                x += (r - y) * (nums[i] - nums[y])
            st[b] = i
            b += 1
            while x > k:
                x -= nums[st[a]] - nums[j]
                if st[a] == j:
                    a += 1
                j -= 1
            ans += j - i + 1
        return ans
