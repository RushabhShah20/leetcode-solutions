# Problem: Number of Senior Citizens
# Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ans: int = 0
        for i in range(0, len(details), 1):
            if int(details[i][11:13]) > 60:
                ans += 1
        return ans
