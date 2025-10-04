// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
function maxArea(height: number[]): number {
    let ans: number = 0, n: number = height.length;
    let left: number = 0, right: number = n - 1;
    while (left <= right) {
        let vol: number = (right - left) * Math.min(height[left], height[right]);
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