// Problem: Score of a String
// Link to the problem: https://leetcode.com/problems/score-of-a-string/
function scoreOfString(s: string): number {
    let ans: number = 0;
    for (let i = 0; i < s.length - 1; i++) {
        ans += Math.abs(s.charCodeAt(i) - s.charCodeAt(i + 1))
    }
    return ans;
};