// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
function minimumLength(s: string): number {
    let n: number = s.length, i: number = 0, j: number = n - 1;
    while (i < j && s[i] === s[j]) {
        let c: string = s[i];
        while (i <= j && s[i] === c) {
            i++;
        }
        while (i <= j && s[j] === c) {
            j--;
        }
    }
    const ans: number = j - i + 1;
    return ans;
};