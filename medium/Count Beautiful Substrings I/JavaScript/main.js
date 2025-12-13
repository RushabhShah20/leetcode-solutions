// Problem: Count Beautiful Substrings I
// Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var beautifulSubstrings = function (s, k) {
    let ans = 0, n = s.length;
    for (let i = 0; i < n; i++) {
        let vowels = 0, consonents = 0;
        for (let j = i; j < n; j++) {
            if (s[j] === 'a' || s[j] === 'e' || s[j] === 'i' || s[j] === 'o' || s[j] === 'u') {
                vowels++;
            }
            else {
                consonents++;
            }
            if ((vowels === consonents) && (vowels * consonents) % k === 0) {
                ans++;
            }
        }
    }
    return ans;
};