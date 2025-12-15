// Problem: Trapping Rain Water
// Link to the problem: https://leetcode.com/problems/trapping-rain-water/
function trap(height: number[]): number {
    let i: number = 0, left_max: number = height[0], ans: number = 0;
    let j: number = height.length - 1, right_max: number = height[j];
    while (i < j) {
        if (left_max <= right_max) {
            ans += (left_max - height[i]);
            i++;
            left_max = Math.max(left_max, height[i]);
        }
        else {
            ans += (right_max - height[j]);
            j--;
            right_max = Math.max(right_max, height[j]);
        }
    }
    return ans;
};