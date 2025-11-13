// Problem: Maximum Number of Operations to Move Ones to the End
// Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
function maxOperations(s: string): number {
    let ans: number = 0, n: number = s.length, ones: number = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '1') {
            ones++;
        }
        else if (i > 0 && s[i - 1] === '1') {
            ans += ones;
        }
    }
    return ans;
};