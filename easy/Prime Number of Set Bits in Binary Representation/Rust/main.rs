// Problem: Prime Number of Set Bits in Binary Representation
// Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
impl Solution {
    pub fn isPrime(n: i32) -> bool {
        if (n == 1) {
            return false;
        }
        let mut i: i32 = 2;
        while (i * i <= n) {
            if (n % i == 0) {
                return false;
            }
            i += 1;
        }
        return true;
    }
    pub fn setBits(mut n: i32) -> i32 {
        let mut ans: i32 = 0;
        while (n > 0) {
            n &= (n - 1);
            ans += 1;
        }
        return ans;
    }
    pub fn count_prime_set_bits(left: i32, right: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in left..=right {
            if (Self::isPrime(Self::setBits(i))) {
                ans += 1;
            }
        }
        return ans;
    }
}
