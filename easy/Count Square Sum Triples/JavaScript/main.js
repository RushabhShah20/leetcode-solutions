// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
/**
 * @param {number} n
 * @return {number}
 */
var countTriples = function (n) {
    let ans = 0;
    for (let i = 1; i <= n; ++i) {
        let x = i * i;
        let l = 1;
        let r = i - 1;
        while (l < r) {
            let sum = l * l + r * r;
            if (sum === x) {
                ans += 2;
                l++;
                r--;
            }
            else if (sum < x) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return ans;
};