# Problem: Replace Non-Coprime Numbers in Array
# Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def replaceNonCoprimes(self, nums: List[int]) -> List[int]:
        ans: List[int] = []
        for num in nums:
            ans.append(num)
            while len(ans) > 1:
                a: int = ans[len(ans) - 1]
                b: int = ans[len(ans) - 2]
                g: int = self.gcd(a, b)
                if g > 1:
                    ans.pop()
                    ans.pop()
                    lcm: int = (a * b) // g
                    ans.append(lcm)
                else:
                    break
        return ans
