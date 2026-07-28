// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
/**
 * @param {string} s
 * @return {string}
 */
var smallestPalindrome = function (s) {
    const n = s.length;
    let ans = s.split('');
    let a = new Array(26).fill(0);
    for (let i = 0; i < Math.floor(n / 2); i++) {
        a[ans[i].charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    let l = 0, r = n - 1;
    for (let i = 0; i < 26; i++) {
        while (a[i] > 0) {
            const c = String.fromCharCode('a'.charCodeAt(0) + i);
            ans[l] = c;
            ans[r] = c;
            l++;
            r--;
            a[i]--;
        }
    }
    return ans.join('');
};