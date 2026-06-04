// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
function totalWaviness(num1: number, num2: number): number {
    let ans: number = 0;
    for (let i = num1; i <= num2; i++) {
        const x: String = i.toString();
        const n: number = x.length;
        for (let j = 1; j < n - 1; j++) {
            if (x[j] > x[j - 1] && x[j] > x[j + 1]) {
                ans++;
            }
            if (x[j] < x[j - 1] && x[j] < x[j + 1]) {
                ans++;
            }
        }
    }
    return ans;
};