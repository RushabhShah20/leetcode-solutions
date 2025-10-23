// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
function xorAllNums(nums1: number[], nums2: number[]): number {
    let m: number = nums1.length, n: number = nums2.length;
    if (m % 2 === 0) {
        if (n % 2 === 0) {
            return 0;
        }
        else {
            let ans: number = 0;
            for (const num of nums1) {
                ans ^= num;
            }
            return ans;
        }
    }
    else {
        if (n % 2 === 0) {
            let ans: number = 0;
            for (const num of nums2) {
                ans ^= num;
            }
            return ans;
        }
        else {
            let x: number = 0, y: number = 0;
            for (const num of nums1) {
                x ^= num;
            }
            for (const num of nums2) {
                y ^= num;
            }
            let ans: number = x ^ y;
            return ans;
        }
    }
};