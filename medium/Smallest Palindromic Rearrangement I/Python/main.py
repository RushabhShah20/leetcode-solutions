# Problem: Smallest Palindromic Rearrangement I
# Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
class Solution:
    def smallestPalindrome(self, s: str) -> str:
        n: int = len(s)
        ans: List[str] = list(s)
        a: List[int] = [0] * 26
        for i in range(0, n // 2):
            a[ord(ans[i]) - ord("a")] += 1
        l: int = 0
        r: int = n - 1
        for i in range(0, 26):
            while a[i] > 0:
                c = chr(ord("a") + i)
                ans[l] = c
                ans[r] = c
                l += 1
                r -= 1
                a[i] -= 1
        return "".join(ans)
