// Problem: Sum Multiples
// Link to the problem: https://leetcode.com/problems/sum-multiples/
function sumOfMultiples(n: number): number {
    let sum: number = 0;
    for (let i = 1; i <= n; i++) {
        if (i % 3 === 0 || i % 5 === 0 || i % 7 === 0) {
            sum += i;
        }
    }
    return sum;
};