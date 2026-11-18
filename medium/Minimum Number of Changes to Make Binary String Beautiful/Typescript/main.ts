// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
function minChanges(s: string): number {
    const n: number = s.length;
    let ans: number = 0;
    for (let i = 1; i < n; i += 2) {
        if (s[i] !== s[i - 1]) {
            ans++;
        }
    }
    return ans;
};