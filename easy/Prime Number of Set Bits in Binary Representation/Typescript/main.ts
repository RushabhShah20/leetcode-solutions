// Problem: Prime Number of Set Bits in Binary Representation
// Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
function isPrime(n: number): boolean {
    if (n === 1) {
        return false;
    }
    for (let i = 2; i * i <= n; i++) {
        if (n % i === 0) {
            return false;
        }
    }
    return true;
}
function setBits(n: number): number {
    let ans: number = 0;
    while (n > 0) {
        n &= (n - 1);
        ans++;
    }
    return ans;
}
function countPrimeSetBits(left: number, right: number): number {
    let ans = 0;
    for (let i = left; i <= right; i++) {
        if (isPrime(setBits(i))) {
            ans++;
        }
    }
    return ans;
};