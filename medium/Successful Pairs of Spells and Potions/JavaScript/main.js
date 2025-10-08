// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
/**
 * @param {number[]} spells
 * @param {number[]} potions
 * @param {number} success
 * @return {number[]}
 */
var successfulPairs = function (spells, potions, success) {
    let ans = new Array(spells.length).fill(0);
    potions.sort((a, b) => a - b);
    for (let i = 0; i < spells.length; i++) {
        let x = -1;
        let l = 0, r = potions.length - 1;
        while (l < r) {
            let m = l + Math.floor((r - l) / 2);
            let y = (potions[m]) * (spells[i]);
            if (y < success) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        if ((potions[l]) * (spells[i]) >= success) {
            x = l;
        }
        if (x !== -1) {
            ans[i] += (potions.length - x);
        }
    }
    return ans;
};