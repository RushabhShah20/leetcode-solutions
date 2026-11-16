// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
function digitSum(s: string, k: number): string {
    while (s.length > k) {
        let t: string = "";
        const n: number = s.length;
        for (let i = 0; i < n; i += k) {
            let x: number = 0;
            for (let j = i; j < Math.min(i + k, n); ++j) {
                x += Number(s[j]);
            }
            t += String(x);
        }
        s = t;
    }
    return s;
};