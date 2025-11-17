// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
function kLengthApart(nums: number[], k: number): boolean {
    let pos: number[] = new Array();
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 1) {
            pos.push(i);
        }
    }
    let minDiff: number = 1000000000;
    if (pos.length === 0) {
        return true;
    }
    else {
        for (let i = 1; i < pos.length; i++) {
            minDiff = Math.min(minDiff, Math.abs(pos[i] - pos[i - 1] - 1));
        }
        if (minDiff < k) {
            return false;
        }
        else {
            return true;
        }
    }
};