# Problem: Minimum Moves to Reach Target Score
# Link to the problem: https://leetcode.com/problems/minimum-moves-to-reach-target-score/
class Solution:
    def minMoves(self, target: int, maxDoubles: int) -> int:
        if target == 1:
            return 0
        ans: int = 0
        while maxDoubles > 0:
            if target % 2 == 0:
                target //= 2
                maxDoubles -= 1
            else:
                target -= 1
            ans += 1
            if target == 1:
                break
        if target != 1:
            ans += target - 1
        return ans
