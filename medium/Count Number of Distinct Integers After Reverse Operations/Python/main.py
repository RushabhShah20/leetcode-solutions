# Problem: Count Number of Distinct Integers After Reverse Operations
# Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
class Solution:
    def rev(self, n: int) -> int:
        rev: int = 0
        while n > 0:
            rev = (rev * 10) + (n % 10)
            n //= 10
        return rev

    def countDistinctIntegers(self, nums: List[int]) -> int:
        ans: List[int] = nums
        s: Set[int] = set()
        for i in range(0, len(nums), 1):
            ans.append(self.rev(nums[i]))
        for i in range(0, len(ans), 1):
            s.add(ans[i])
        return len(s)
