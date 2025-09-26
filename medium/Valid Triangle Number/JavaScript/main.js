// Problem: Valid Triangle Number
// Link to the problem: https://leetcode.com/problems/valid-triangle-number/
/**
 * @param {number[]} nums
 * @return {number}
 */
var triangleNumber = function (nums) {
    let ans = 0;
    if (nums.length < 3) {
        return ans;
    }
    nums.sort((a, b) => a - b);
    for (let i = nums.length - 1; i > 1; i--) {
        let r = i - 1;
        let l = 0;
        while (l < r) {
            let sum = nums[l] + nums[r];
            if (sum > nums[i]) {
                ans += (r - l);
                r--;
            }
            else {
                l++;
            }
        }
    }
    return ans;
};