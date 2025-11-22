// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
function minimumOperations(nums: number[]): number {
    let ans: number = 0;
    for (const num of nums) {
        ans += ((num % 3 !== 0) ? (1) : (0));
    }
    return ans;
};