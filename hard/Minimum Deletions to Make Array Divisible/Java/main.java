// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
class Solution {
    public int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public int minOperations(int[] nums, int[] numsDivide) {
        int x = numsDivide[0];
        for (int i = 1; i < numsDivide.length; i++) {
            x = gcd(x, numsDivide[i]);
        }
        Map<Integer, Integer> y = new TreeMap<>();
        for (int i = 0; i < nums.length; i++) {
            y.put(nums[i], y.getOrDefault(nums[i], 0) + 1);
        }
        int ans = 0;
        for (Map.Entry<Integer, Integer> i : y.entrySet()) {
            if (x % i.getKey() == 0) {
                break;
            } else {
                ans += i.getValue();
            }
        }
        if (ans == nums.length) {
            return -1;
        } else {
            return ans;
        }
    }
}