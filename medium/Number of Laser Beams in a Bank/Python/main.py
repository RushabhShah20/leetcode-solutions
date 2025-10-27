# Problem: Number of Laser Beams in a Bank
# Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        ans: int = 0
        prev: int = 0
        for s in bank:
            count: int = 0
            for c in s:
                if c == "1":
                    count += 1
            ans += count * prev
            if count > 0:
                prev = count
        return ans
