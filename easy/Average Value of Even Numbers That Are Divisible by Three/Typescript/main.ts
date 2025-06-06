// Problem: Average Value of Even Numbers That Are Divisible by Three
// Link to the problem: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
function averageValue(nums: number[]): number {
    let i: number;
    let sum: number = 0, s: number = 0;
    for (i = 0; i < nums.length; i++) {
        if (nums[i] % 6 == 0) {
            sum = sum + nums[i];
            s++;
        }
    }
    if (s == 0)
        return 0;
    else
        return sum / s >> 0;
};