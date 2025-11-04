# Problem: Find X-Sum of All K-Long Subarrays I
# Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
class Solution:
    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        n: int = len(nums)
        ans: List[int] = []
        m: Dict[int, int] = {}
        for i in range(n):
            if i >= k:
                m[nums[i]] = m.get(nums[i], 0) + 1
                m[nums[i - k]] -= 1
                if m[nums[i - k]] == 0:
                    del m[nums[i - k]]
            else:
                m[nums[i]] = m.get(nums[i], 0) + 1
            if i >= k - 1:
                v: List[Dict[int, int]] = list(m.items())
                v.sort(key=lambda pair: (pair[1], pair[0]), reverse=True)
                total = 0
                for j in range(min(x, len(v))):
                    total += v[j][0] * v[j][1]
                ans.append(total)
        return ans
