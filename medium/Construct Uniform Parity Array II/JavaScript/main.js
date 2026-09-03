// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
/**
 * @param {number[]} nums1
 * @return {boolean}
 */
var uniformArray = function (nums1) {
    const n = nums1.length;
    let x = true;
    let mn = 1000000001;
    for (let i = 0; i < n; i++) {
        const num = nums1[i];
        if (num & 1) {
            x = false;
        }
        mn = Math.min(mn, num);
    }
    const ans = mn & 1 || x ? true : false;
    return ans;
};