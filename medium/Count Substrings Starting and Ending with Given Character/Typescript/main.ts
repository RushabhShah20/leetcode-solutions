// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
function countSubstrings(s: string, c: string): number {
    let m = 0;
    for (const ch of s) {
        if (ch === c) {
            m++;
        }
    }
    let ans = Math.floor((m * (m + 1)) / 2);
    return ans;
};