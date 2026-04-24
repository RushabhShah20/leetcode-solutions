// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
/**
 * @param {string} moves
 * @return {number}
 */
var furthestDistanceFromOrigin = function (moves) {
    const n = moves.length;
    let left = 0, right = 0, spaces = 0;
    for (let i = 0; i < n; i++) {
        if (moves[i] === 'L') {
            left++;
        }
        else if (moves[i] === 'R') {
            right++;
        }
        else {
            spaces++;
        }
    }
    const ans = spaces + Math.abs(left - right);
    return ans;
};