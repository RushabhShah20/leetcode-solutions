// Problem: Minimum Number of Operations to Make All Array Elements Equal to 1
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
class Solution {
    public int gcd(int a, int b) {
        return ((b == 0) ? (a) : (gcd(b, a % b)));
    }

    public int minOperations(int[] nums) {
        int ans = 0;
        int g = nums[0];
        for (int num : nums) {
            g = gcd(g, num);
            if (g == 1) {
                break;
            }
        }
        if (g != 1) {
            return -1;
        }
        int n = nums.length;
        int count = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
            }
        }
        if (count > 0) {
            return n - count;
        }
        ans = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = i; j < n; j++) {
                x = gcd(x, nums[j]);
                if (x == 1) {
                    ans = Math.min(ans, j - i + 1);
                    break;
                }
            }
        }
        ans = (ans - 1) + (n - 1);
        return ans;
    }
}