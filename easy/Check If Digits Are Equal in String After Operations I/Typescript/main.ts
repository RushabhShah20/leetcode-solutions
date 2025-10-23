// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
function hasSameDigits(s: string): boolean {
    while (s.length != 2) {
        let t: string = "";
        for (let i = 0; i < s.length - 1; i++) {
            let x: number = parseInt(s[i]);
            let y: number = parseInt(s[i + 1]);
            let z: number = (x + y) % 10;
            let a: String = String.fromCharCode(z + '0'.charCodeAt(0));
            t += a;
        }
        s = t;
    }
    return s[0] == s[1];
};