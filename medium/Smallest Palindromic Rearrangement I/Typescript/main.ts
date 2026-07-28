// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
function smallestPalindrome(s: string): string {
    const n: number = s.length;
    let ans: string[] = s.split('');
    let a: number[] = new Array(26).fill(0);
    for (let i = 0; i < Math.floor(n / 2); i++) {
        a[ans[i].charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    let l = 0, r = n - 1;
    for (let i = 0; i < 26; i++) {
        while (a[i] > 0) {
            const c: string = String.fromCharCode('a'.charCodeAt(0) + i);
            ans[l] = c;
            ans[r] = c;
            l++;
            r--;
            a[i]--;
        }
    }
    return ans.join('');
};