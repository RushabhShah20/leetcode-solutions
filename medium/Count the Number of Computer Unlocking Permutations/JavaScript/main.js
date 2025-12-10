// Problem: Count the Number of Computer Unlocking Permutations
// Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
/**
 * @param {number[]} complexity
 * @return {number}
 */
var countPermutations = function (complexity) {
    let n = complexity.length;
    let ans = 1, mod = 1000000007;
    for (let i = 1; i < n; i++) {
        if (complexity[i] <= complexity[0]) {
            return 0;
        }
        else {
            ans = ((ans * i) % mod);
        }
    }
    return ans;
};