# Problem: Prime Arrangements
# Link to the problem: https://leetcode.com/problems/prime-arrangements/
class Solution:
    def __init__(self):
        self.mod: int = 10**9 + 7

    def fact(self, n: int) -> int:
        if n <= 1:
            return 1
        else:
            return n * self.fact(n - 1) % self.mod

    def numPrimeArrangements(self, n: int) -> int:
        sieve: List[bool] = [True] * (n + 1)
        sieve[0] = False
        sieve[1] = False
        i: int = 2
        while i * i <= n:
            if sieve[i] == True:
                j: int = i * i
                while j <= n:
                    sieve[j] = False
                    j += i
            i += 1
        primes: int = 0
        composites: int = 0
        for i in range(1, n + 1):
            if sieve[i] == True:
                primes += 1
            else:
                composites += 1
        ans: int = (
            self.fact(primes) % self.mod * self.fact(composites) % self.mod % self.mod
        )
        return ans
