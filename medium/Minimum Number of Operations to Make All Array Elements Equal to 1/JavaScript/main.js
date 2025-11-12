// Problem: Minimum Number of Operations to Make All Array Elements Equal to 1
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
/**
 * @param {number[]} nums
 * @return {number}
 */
var gcd = function (a, b) {
    return b === 0 ? a : gcd(b, a % b);
}
var minOperations = function (nums) {
    let ans = 0;
    let g = nums[0];
    for (const num of nums) {
        g = gcd(g, num);
        if (g == 1) {
            break;
        }
    }
    if (g != 1) {
        return -1;
    }
    let n = nums.length;
    let count = 0;
    for (const num of nums) {
        if (num === 1) {
            count++;
        }
    }
    if (count > 0) {
        return n - count;
    }
    ans = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < n; i++) {
        let x = 0;
        for (let j = i; j < n; j++) {
            x = gcd(x, nums[j]);
            if (x == 1) {
                ans = Math.min(ans, j - i + 1);
                break;
            }
        }
    }
    ans = (ans - 1) + (n - 1);
    return ans;
};