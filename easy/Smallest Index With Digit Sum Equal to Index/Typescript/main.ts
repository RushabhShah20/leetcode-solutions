// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
function sum(n: number): number {
    let ans: number = 0;
    while (n > 0) {
        ans += n % 10;
        n = Math.floor(n / 10);
    }
    return ans;
}
function smallestIndex(nums: number[]): number {
    const n: number = nums.length;
    for (let i = 0; i < n; i++) {
        if (sum(nums[i]) == i) {
            return i;
        }
    }
    return -1;
};