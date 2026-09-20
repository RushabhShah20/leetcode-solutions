// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
function reverseDegree(s: string): number {
    const n: number = s.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        ans += (26 - (s.charCodeAt(i) - 'a'.charCodeAt(0))) * (i + 1);
    }
    return ans;
};