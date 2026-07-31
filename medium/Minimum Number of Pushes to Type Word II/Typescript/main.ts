// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
function minimumPushes(word: string): number {
    const n: number = word.length;
    let a: number[] = new Array(26).fill(0);
    for (let i = 0; i < n; i++) {
        a[word.charCodeAt(i) - 'a'.charCodeAt(0)]++;
    }
    a.sort((x, y) => y - x);
    let ans: number = 0;
    for (let i = 0; i < 26; i++) {
        if (i < 8) {
            ans += (1 * a[i]);
        } else if (i >= 8 && i < 16) {
            ans += (2 * a[i]);
        } else if (i >= 16 && i < 24) {
            ans += (3 * a[i]);
        } else {
            ans += (4 * a[i]);
        }
    }
    return ans;
};