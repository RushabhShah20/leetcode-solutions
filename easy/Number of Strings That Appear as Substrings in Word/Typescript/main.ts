// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
function numOfStrings(patterns: string[], word: string): number {
    const n: number = patterns.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        if (word.includes(patterns[i])) {
            ans++;
        }
    }
    return ans;
};