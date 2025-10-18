// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
function maxDistinctElements(nums: number[], k: number): number {
    let ans: number = 0, x: number = Number.MIN_SAFE_INTEGER;
    nums.sort((a, b) => a - b);
    for (let num of nums) {
        let l: number = num - k, r: number = num + k;
        if (x < l) {
            x = l;
            ans++;
        }
        else if (x < r) {
            x++;
            ans++;
        }
    }
    return ans;
};