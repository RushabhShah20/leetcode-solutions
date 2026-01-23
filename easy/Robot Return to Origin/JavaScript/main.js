// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function (moves) {
    let y = 0;
    let x = 0;
    for (const move of moves) {
        if (move === 'U') {
            y++;
        }
        if (move === 'D') {
            y--;
        }
        if (move === 'R') {
            x++;
        }
        if (move === 'L') {
            x--;
        }
    }
    const ans = (x === 0 && y === 0);
    return ans;
};