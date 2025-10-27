// Problem: Find the Winning Player in Coin Game
// Link to the problem: https://leetcode.com/problems/find-the-winning-player-in-coin-game/
function winningPlayer(x: number, y: number): string {
    let ans: number = Math.min(x, Math.floor(y / 4));
    return (ans % 2 == 0) ? ("Bob") : ("Alice");
};