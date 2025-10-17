# Problem: Find Center of Star Graph
# Link to the problem: https://leetcode.com/problems/find-center-of-star-graph/
class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        a: int = edges[0][1]
        b: int = edges[0][0]
        if edges[1][1] == a or edges[1][0] == a:
            return a
        else:
            return b
