// Problem: Three Divisors
// Link to the problem: https://leetcode.com/problems/three-divisors/
function isThree(n: number): boolean {
    let count: number = 0;
    for (let i = 1; i <= n; i++) {
        if (n % i === 0) {
            count++;
        }
    }
    if (count === 3) {
        return true;
    }
    else {
        return false;
    }
};