# Problem: Boats to Save People
# Link to the problem: https://leetcode.com/problems/boats-to-save-people/
class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        ans: int = 0
        n: int = len(people)
        i: int = 0
        j: int = n - 1
        while i <= j:
            if people[i] + people[j] <= limit:
                i += 1
                j -= 1
            else:
                j -= 1
            ans += 1
        return ans
