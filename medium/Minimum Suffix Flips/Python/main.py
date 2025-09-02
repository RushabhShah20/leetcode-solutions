# Problem: Minimum Suffix Flips
# Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
class Solution:
    def minFlips(self, target: str) -> int:
        ans: int = 0
        x: bool = False
        if target[0] == "1":
            ans += 1
            x = True
        for i in range(1, len(target)):
            if target[i] == "1":
                if x == False:
                    ans += 1
                    x = True
            else:
                if x == True:
                    ans += 1
                    x = False
        return ans
