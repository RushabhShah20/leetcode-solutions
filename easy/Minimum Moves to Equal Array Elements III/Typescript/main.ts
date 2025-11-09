// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
function minMoves(nums: number[]): number {
    let ans: number = 0;
    let x: number = Math.max(...nums);
    for (const num of nums) {
        ans += (x - num);
    }
    return ans;
};