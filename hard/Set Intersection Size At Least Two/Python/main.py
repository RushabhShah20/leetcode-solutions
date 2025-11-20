# Problem: Set Intersection Size At Least Two
# Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
class Solution:
    def intersectionSizeTwo(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: (x[1], -x[0]))
        ans: int = 0
        a: int = -1
        b: int = -1
        for l, r in intervals:
            if l > b:
                a = r - 1
                b = r
                ans += 2
            elif l > a:
                a = b
                b = r
                ans += 1
        return ans
