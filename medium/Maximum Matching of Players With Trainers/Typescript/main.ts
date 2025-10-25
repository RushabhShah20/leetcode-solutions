// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
function matchPlayersAndTrainers(players: number[], trainers: number[]): number {
    players.sort((a, b) => a - b);
    trainers.sort((a, b) => a - b);
    let i: number = 0, j: number = 0, ans: number = 0, n: number = players.length, m: number = trainers.length;
    while (j < m && i < n) {
        if (players[i] <= trainers[j]) {
            ans++;
            i++;
        }
        j++;
    }
    return ans;
};