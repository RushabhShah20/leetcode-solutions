// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function (letters, target) {
    const n = letters.length;
    let l = 0, r = n - 1;
    let ans = letters[0];
    while (l <= r) {
        const m = l + Math.floor((r - l) / 2);
        if (letters[m] > target) {
            ans = letters[m];
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return ans;
};