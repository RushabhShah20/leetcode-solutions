// Problem: Count the Number of Computer Unlocking Permutations
// Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
function countPermutations(complexity: number[]): number {
    let n: number = complexity.length;
    let ans: number = 1, mod: number = 1000000007;
    for (let i = 1; i < n; i++) {
        if (complexity[i] <= complexity[0]) {
            return 0;
        }
        else {
            ans = ((ans * i) % mod);
        }
    }
    return ans;
};