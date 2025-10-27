// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
/**
 * @param {number} x
 * @param {number} y
 * @return {string}
 */
var winningPlayer = function (x, y) {
    let ans = Math.min(x, Math.floor(y / 4));
    return (ans % 2 == 0) ? ("Bob") : ("Alice");
};