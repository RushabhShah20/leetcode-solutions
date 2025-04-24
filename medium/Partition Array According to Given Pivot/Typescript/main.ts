// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
function pivotArray(nums: number[], pivot: number): number[] {
    let ans: number[] = [], less: number[] = [], equal: number[] = [], greater: number[] = [];
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] < pivot) {
            less.push(nums[i]);
        }
        else if (nums[i] > pivot) {
            greater.push(nums[i]);
        }
        else {
            equal.push(nums[i]);
        }
    }
    ans.push(...less);
    ans.push(...equal);
    ans.push(...greater);
    return ans;
};