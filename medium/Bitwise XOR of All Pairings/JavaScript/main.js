// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var xorAllNums = function (nums1, nums2) {
    let m = nums1.length, n = nums2.length;
    if (m % 2 === 0) {
        if (n % 2 === 0) {
            return 0;
        }
        else {
            let ans = 0;
            for (const num of nums1) {
                ans ^= num;
            }
            return ans;
        }
    }
    else {
        if (n % 2 === 0) {
            let ans = 0;
            for (const num of nums2) {
                ans ^= num;
            }
            return ans;
        }
        else {
            let x = 0, y = 0;
            for (const num of nums1) {
                x ^= num;
            }
            for (const num of nums2) {
                y ^= num;
            }
            let ans = x ^ y;
            return ans;
        }
    }
};