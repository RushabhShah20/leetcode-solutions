// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
function countBinarySubstrings(s: string): number {
    const n: number = s.length;
    let ans: number = 0, prev: number = 0, curr: number = 1;
    for (let i = 1; i < n; i++) {
        if (s[i - 1] !== s[i]) {
            ans += Math.min(prev, curr);
            prev = curr;
            curr = 1;
        }
        else {
            curr++;
        }
    }
    ans += Math.min(prev, curr);
    return ans;
};