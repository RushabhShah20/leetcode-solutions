# Problem: Stone Game IX
# Link to the problem: https://leetcode.com/problems/stone-game-ix/
class Solution:
    def stoneGameIX(self, stones: List[int]) -> bool:
        n: int = len(stones)
        a: int = 0
        b: int = 0
        c: int = 0
        for i in range(0, n):
            x: int = stones[i] % 3
            if x == 1:
                b += 1
            elif x == 2:
                c += 1
            else:
                a += 1
        ans: bool = abs(b - c) > 2 if a & 1 == 1 else b >= 1 and c >= 1
        return ans
