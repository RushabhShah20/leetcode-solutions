// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
function numSteps(s: string): number {
    const n: number = s.length;
    let ans: number = 0, x: number = 0;
    for (let i = n - 1; i > 0; i--) {
        const y: number = Number(s[i]) + x;
        if (y % 2 === 0) {
            ans++;
        }
        else {
            ans += 2;
            x = 1;
        }
    }
    ans += x;
    return ans;
};