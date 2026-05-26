// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
function numberOfSpecialChars(word: string): number {
    const n: number = word.length;
    let ans: number = 0;
    let lower: number[] = new Array(26).fill(0), upper: number[] = new Array(26).fill(0);
    for (let i = 0; i < n; i++) {
        const c: String = word[i];
        if (c >= 'a' && c <= 'z') {
            lower[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
        } else {
            upper[c.charCodeAt(0) - 'A'.charCodeAt(0)]++;
        }
    }
    for (let i = 0; i < 26; i++) {
        if (lower[i] > 0 && upper[i] > 0) {
            ans++;
        }
    }
    return ans;
};