// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
class Solution {
  int matchPlayersAndTrainers(List<int> players, List<int> trainers) {
    players.sort();
    trainers.sort();
    int i = 0, j = 0, ans = 0, n = players.length, m = trainers.length;
    while (j < m && i < n) {
      if (players[i] <= trainers[j]) {
        ans++;
        i++;
      }
      j++;
    }
    return ans;
  }
}
