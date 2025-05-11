// Problem: Prime In Diagonal
// Link to the problem: https://leetcode.com/problems/prime-in-diagonal/
class Solution {
    boolean isPrime(int n) {
        boolean x = true;
        if (n <= 1) {
            return false;
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    x = false;
                    break;
                }
            }
            return x;
        }
    }

    public int diagonalPrime(int[][] nums) {
        List<Integer> diagonal_elements = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < nums.length; j++) {
                if (i == j || i + j == nums.length - 1) {
                    if (isPrime(nums[i][j])) {
                        diagonal_elements.add(nums[i][j]);
                    }
                }
            }
        }
        return diagonal_elements.size() == 0 ? 0 : Collections.max(diagonal_elements);
    }
}