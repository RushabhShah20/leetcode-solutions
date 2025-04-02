// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
/**
 * @param {number[]} nums
 * @return {number}
 */
function getDigitSum(num) {
    let sum = 0;
    while (num > 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }
    return sum;
}

var minElement = function(nums) {
    ans = Infinity;
    for (let i = 0; i < nums.length; i++) {
        nums[i] = getDigitSum(nums[i]);
        if (nums[i] < ans) {
            ans = nums[i];
        }
    }
    return ans;
};