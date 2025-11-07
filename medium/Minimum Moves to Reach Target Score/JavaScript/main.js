// Problem: Minimum Moves to Reach Target Score
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-reach-target-score/
/**
 * @param {number} target
 * @param {number} maxDoubles
 * @return {number}
 */
var minMoves = function (target, maxDoubles) {
    if (target === 1) {
        return 0;
    }
    let ans = 0;
    while (maxDoubles > 0) {
        if (target % 2 === 0) {
            target = Math.floor(target / 2);
            maxDoubles--;
        }
        else {
            target--;
        }
        ans++;
        if (target === 1) {
            break;
        }
    }
    if (target != 1) {
        ans += (target - 1);
    }
    return ans;
};