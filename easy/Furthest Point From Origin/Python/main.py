# Problem: Furthest Point From Origin
# Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
class Solution:
    def furthestDistanceFromOrigin(self, moves: str) -> int:
        n: int = len(moves)
        left: int = 0
        right: int = 0
        spaces: int = 0
        for i in range(0, n):
            if moves[i] == "L":
                left += 1
            elif moves[i] == "R":
                right += 1
            else:
                spaces += 1
        ans: int = spaces + abs(left - right)
        return ans
