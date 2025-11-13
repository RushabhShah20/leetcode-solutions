# Problem: Escape The Ghosts
# Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
class Solution:
    def escapeGhosts(self, ghosts: List[List[int]], target: List[int]) -> bool:
        x: int = (abs(target[0])) + (abs(target[1]))
        for ghost in ghosts:
            y: int = (abs(ghost[0] - target[0])) + (abs(ghost[1] - target[1]))
            if y <= x:
                return False
        return True
