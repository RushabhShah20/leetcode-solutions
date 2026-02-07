// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
function minimumDeletions(s: string): number {
    let ans: number = 0, count: number = 0;
    for (const c of s) {
        if (c === 'b') {
            count++;
        }
        else {
            ans = Math.min(ans + 1, count);
        }
    }
    return ans;
};