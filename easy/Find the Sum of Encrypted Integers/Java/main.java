// Problem: Find the Sum of Encrypted Integers
// Link to the problem: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/
class Solution {
    public int maxDigitOfNum(int num) {
        int maxDigit = 0;
        while (num > 0) {
            maxDigit = Math.max(maxDigit, num % 10);
            num /= 10;
        }
        return maxDigit;
    }

    public int numofDigits(int num) {
        int count = 0;
        while (num > 0) {
            count++;
            num /= 10;
        }
        return count;
    }

    public int encrypt(int num) {
        int maxDigit = maxDigitOfNum(num);
        int numDigits = numofDigits(num);
        int ans = 0;
        for (int i = 1; i <= numDigits; i++) {
            ans += maxDigit * Math.pow(10, i - 1);
        }
        return ans;
    }

    public int sumOfEncryptedInt(int[] nums) {
        int ans = 0;
        for (int i = 0; i < nums.length; i++) {
            ans += encrypt(nums[i]);
        }
        return ans;
    }
}
