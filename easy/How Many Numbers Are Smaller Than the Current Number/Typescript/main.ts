// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
function smallerNumbersThanCurrent(nums: number[]): number[] {
    const n: number = nums.length;
    let freq: number[] = new Array(101).fill(0);
    for (const num of nums) {
        freq[num]++;
    }
    for (let i = 1; i < 101; i++) {
        freq[i] += freq[i - 1];
    }
    let ans: number[] = new Array(n);
    for (let i = 0; i < n; i++) {
        if (nums[i] === 0) {
            ans[i] = 0;
        }
        else {
            ans[i] = freq[nums[i] - 1];
        }
    }
    return ans;
};