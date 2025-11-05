// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
function getLongestSubsequence(words: string[], groups: number[]): string[] {
    let n: number = groups.length;
    let ans: string[] = new Array();
    ans.push(words[0]);
    for (let i = 1; i < n; i++) {
        if (groups[i] !== groups[i - 1]) {
            ans.push(words[i]);
        }
    }
    return ans;
};