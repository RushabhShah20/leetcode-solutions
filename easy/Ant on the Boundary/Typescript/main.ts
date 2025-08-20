// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
function returnToBoundaryCount(nums: number[]): number {
    let ans:number = 0, count:number = 0;
    for (let i = 0; i < nums.length; i++) {
        count += nums[i];
        if (count === 0) {
            ans++;
        }
    }
    return ans;
};