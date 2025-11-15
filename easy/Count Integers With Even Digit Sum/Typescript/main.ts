// Problem: Count Integers With Even Digit Sum
// Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
function countEven(num: number): number {
    let count: number = 0;
    for (let i = 1; i <= num; i++) {
        let sum: number = 0;
        let n: number = i;
        while (n !== 0) {
            sum += n % 10;
            n = Math.floor(n / 10);
        }
        if (sum % 2 === 0) {
            count++;
        }
    }
    return count;
};