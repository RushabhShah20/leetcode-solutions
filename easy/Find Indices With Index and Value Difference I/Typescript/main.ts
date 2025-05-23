// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
function findIndices(nums: number[], indexDifference: number, valueDifference: number): number[] {
    let ans: number[] = new Array(2).fill(-1);
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums.length; j++) {
            if ((Math.abs(i - j) >= indexDifference) && (Math.abs(nums[i] - nums[j]) >= valueDifference)) {
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }
    return ans;
};