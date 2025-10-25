// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
/**
 * @param {number[]} players
 * @param {number[]} trainers
 * @return {number}
 */
var matchPlayersAndTrainers = function (players, trainers) {
    players.sort((a, b) => a - b);
    trainers.sort((a, b) => a - b);
    let i = 0, j = 0, ans = 0, n = players.length, m = trainers.length;
    while (j < m && i < n) {
        if (players[i] <= trainers[j]) {
            ans++;
            i++;
        }
        j++;
    }
    return ans;
};