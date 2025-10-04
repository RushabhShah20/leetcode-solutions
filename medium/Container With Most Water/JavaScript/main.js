// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let ans = 0, n = height.length;
    let left = 0, right = n - 1;
    while (left <= right) {
        let vol = (right - left) * Math.min(height[left], height[right]);
        ans = Math.max(ans, vol);
        if (height[left] <= height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return ans;
};