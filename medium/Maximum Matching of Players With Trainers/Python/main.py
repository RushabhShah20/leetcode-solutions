# Problem: Maximum Matching of Players With Trainers
# Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
class Solution:
    def matchPlayersAndTrainers(self, players: List[int], trainers: List[int]) -> int:
        players.sort()
        trainers.sort()
        i: int = 0
        j: int = 0
        ans: int = 0
        n: int = len(players)
        m: int = len(trainers)
        while j < m and i < n:
            if players[i] <= trainers[j]:
                ans += 1
                i += 1
            j += 1
        return ans
