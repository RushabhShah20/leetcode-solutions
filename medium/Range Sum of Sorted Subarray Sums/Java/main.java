// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
class Solution {
    public int rangeSum(int[] nums, int n, int left, int right) {
        int ans = 0, mod = 1000000007;
        List<Integer> prefixSum = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            int sum = nums[i];
            prefixSum.add(sum);
            for (int j = i + 1; j < nums.length; j++) {
                sum = ((sum + nums[j]) % mod);
                prefixSum.add(sum);
            }
        }
        Collections.sort(prefixSum);
        for (int i = left - 1; i < right; i++) {
            ans = ((ans + prefixSum.get(i)) % mod);
        }
        return ans;
    }
}