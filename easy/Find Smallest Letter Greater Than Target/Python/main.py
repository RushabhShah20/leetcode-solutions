# Problem: Find Smallest Letter Greater Than Target
# Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        n: int = len(letters)
        l: int = 0
        r: int = n - 1
        ans: str = letters[0]
        while l <= r:
            m: int = l + (r - l) // 2
            if letters[m] > target:
                ans = letters[m]
                r = m - 1
            else:
                l = m + 1
        return ans
