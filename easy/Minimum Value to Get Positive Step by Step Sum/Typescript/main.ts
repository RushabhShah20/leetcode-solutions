// Problem: Minimum Value to Get Positive Step by Step Sum
// Link to the problem: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
function minStartValue(nums: number[]): number {
    let ans: number = 0, sum: number = 0;
    for (const num of nums) {
        sum += num;
        if (sum <= 0) {
            ans += (1 - sum);
            sum += (1 - sum);
        }
    }
    return ((ans == 0) ? (1) : (ans));
};