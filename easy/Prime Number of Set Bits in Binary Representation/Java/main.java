// Problem: Prime Number of Set Bits in Binary Representation
// Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
class Solution {
    public boolean isPrime(int n) {
        if (n == 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public int setBits(int n) {
        int ans = 0;
        while (n > 0) {
            n &= (n - 1);
            ans++;
        }
        return ans;
    }

    public int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            if (isPrime(setBits(i))) {
                ans++;
            }
        }
        return ans;
    }
}