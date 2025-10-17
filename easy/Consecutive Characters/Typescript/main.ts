// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
function maxPower(s: string): number {
    let ans: number = 1, count: number = 1;
    for (let i = 0; i < s.length - 1; i++) {
        if (s[i] === s[i + 1]) {
            count++;
            ans = Math.max(ans, count);
        }
        else {
            count = 1;
        }
    }
    return ans;
};