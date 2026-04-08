// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
function xorAfterQueries(nums: number[], queries: number[][]): number {
    const mod: number = 1000000007;
    for (const query of queries) {
        for (let i = query[0]; i <= query[1]; i += query[2]) {
            nums[i] = (nums[i] * query[3]) % mod;
        }
    }
    let ans: number = 0;
    for (const num of nums) {
        ans ^= num;
    }
    return ans;
};