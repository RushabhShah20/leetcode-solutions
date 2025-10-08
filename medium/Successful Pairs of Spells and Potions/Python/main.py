# Problem: Successful Pairs of Spells and Potions
# Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
class Solution:
    def successfulPairs(
        self, spells: List[int], potions: List[int], success: int
    ) -> List[int]:
        ans: List[int] = [0] * len(spells)
        potions.sort()
        for i in range(0, len(spells)):
            x: int = -1
            l: int = 0
            r: int = len(potions) - 1
            while l < r:
                m: int = l + (r - l) // 2
                y: int = (potions[m]) * (spells[i])
                if y < success:
                    l = m + 1
                else:
                    r = m
            if (potions[l]) * (spells[i]) >= success:
                x = l
            if x != -1:
                ans[i] += len(potions) - x
        return ans
