// Problem: Sum of Even Numbers After Queries
// Link to the problem: https://leetcode.com/problems/sum-of-even-numbers-after-queries/
function sumEvenAfterQueries(nums: number[], queries: number[][]): number[] {
    let sum: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] % 2 === 0) {
            sum += nums[i];
        }
    }
    let ans: number[] = new Array(queries.length);
    for (let i = 0; i < queries.length; i++) {
        if (nums[queries[i][1]] % 2 === 0) {
            if ((nums[queries[i][1]] + queries[i][0]) % 2 === 0) {
                sum += queries[i][0];
                nums[queries[i][1]] += queries[i][0];
            }
            else {
                sum -= nums[queries[i][1]];
                nums[queries[i][1]] += queries[i][0];
            }
        }
        else {
            if ((nums[queries[i][1]] + queries[i][0]) % 2 === 0) {
                sum += (nums[queries[i][1]] + queries[i][0]);
                nums[queries[i][1]] += queries[i][0];
            }
            else {
                nums[queries[i][1]] += queries[i][0];
            }
        }
        ans[i] = sum;
    }
    return ans;
};