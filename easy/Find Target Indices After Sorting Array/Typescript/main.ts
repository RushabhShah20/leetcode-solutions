// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
function targetIndices(nums: number[], target: number): number[] {
    const n: number = nums.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] < target) {
            x++;
        }
        else if (nums[i] === target) {
            y++;
        }
    }
    let ans: number[] = new Array();
    for (let i = x; i < x + y; i++) {
        ans.push(i);
    }
    return ans;
};