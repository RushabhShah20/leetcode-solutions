# Problem: Apple Redistribution into Boxes
# Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        ans: int = 0
        capacity.sort(reverse=True)
        total: int = 0
        for a in apple:
            total += a
        for c in capacity:
            if total >= c:
                total -= c
                ans += 1
            else:
                if total != 0:
                    ans += 1
                break
        return ans
