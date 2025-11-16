// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
function numSub(s: string): number {
    let x: number[] = new Array();;
    let y: number = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === '1') {
            y++;
        }
        else {
            x.push(y);
            y = 0;
        }
    }
    if (y != 0) {
        x.push(y);
    }
    let ans: number = 0, mod: number = 1000000007;
    for (let i = 0; i < x.length; i++) {
        ans += (Math.floor(((x[i]) * (x[i] + 1)) / 2) % mod);
    }
    return ans;
};