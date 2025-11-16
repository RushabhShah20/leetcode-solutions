// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
function minLengthAfterRemovals(s: string): number {
    let ans: number = 0;
    for (const c of s) {
        ans += c === 'a' ? 1 : -1;
    }
    return Math.abs(ans);
};