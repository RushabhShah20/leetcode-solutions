// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
function findLUSlength(a: string, b: string): number {
    if (a === b) {
        return -1;
    }
    else {
        return Math.max(a.length, b.length);
    }
};