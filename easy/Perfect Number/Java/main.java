// Problem: Perfect Number
// Link to the problem: https://leetcode.com/problems/perfect-number/
class Solution {
    public boolean checkPerfectNumber(int num) {
        if (num <= 0) {
            return false;
        }
        int sum = 0;
        for (int i = 1; i * i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
                if (i * i != num) {
                    sum = sum + (num / i);
                }
            }
        }
        if (sum - num == num) {
            return true;
        } else {
            return false;
        }
    }
}