// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
/**
 * @param {string[]} bank
 * @return {number}
 */
var numberOfBeams = function (bank) {
    let ans = 0, prev = 0;
    for (const s of bank) {
        let count = 0;
        for (const c of s) {
            if (c == '1') {
                count++;
            }
        }
        ans += (count * prev);
        if (count > 0) {
            prev = count;
        }
    }
    return ans;
};