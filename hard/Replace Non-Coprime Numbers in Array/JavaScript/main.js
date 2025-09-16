// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var gcd = function (a, b) {
    return b == 0 ? a : gcd(b, a % b);
};
var replaceNonCoprimes = function (nums) {
    let ans = new Array();
    for (const num of nums) {
        ans.push(num);
        while (ans.length > 1) {
            let a = ans[ans.length - 1]
            let b = ans[ans.length - 2]
            let g = gcd(a, b);
            if (g > 1) {
                ans.pop();
                ans.pop();
                let lcm = Math.floor((a * b) / g);
                ans.push(lcm);
            }
            else {
                break;
            }
        }
    }
    return ans;
};