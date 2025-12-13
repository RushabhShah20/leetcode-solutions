// Problem: Count Beautiful Substrings I
// Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
function beautifulSubstrings(s: string, k: number): number {
    let ans: number = 0, n: number = s.length;
    for (let i = 0; i < n; i++) {
        let vowels: number = 0, consonents: number = 0;
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