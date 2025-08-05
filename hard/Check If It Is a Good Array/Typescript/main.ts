// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
function gcd(a: number, b: number): number {
    if (b === 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
function isGoodArray(nums: number[]): boolean {
    let ans: number = nums[0];
    for (let i = 0; i < nums.length; i++) {
        ans = gcd(ans, nums[i]);
        if (ans === 1) {
            break;
        }
    }
    if (ans === 1) {
        return true;
    } else {
        return false;
    }
};