// Problem: Valid Triangle Number
// Link to the problem: https://leetcode.com/problems/valid-triangle-number/
function triangleNumber(nums: number[]): number {
    let ans: number = 0;
    if (nums.length < 3) {
        return ans;
    }
    nums.sort((a, b) => a - b);
    for (let i = nums.length - 1; i > 1; i--) {
        let r: number = i - 1;
        let l: number = 0;
        while (l < r) {
            let sum: number = nums[l] + nums[r];
            if (sum > nums[i]) {
                ans += (r - l);
                r--;
            }
            else {
                l++;
            }
        }
    }
    return ans;
};