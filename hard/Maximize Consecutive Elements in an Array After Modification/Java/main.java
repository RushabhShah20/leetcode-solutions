// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
class Solution {
    public int maxSelectedElements(int[] nums) {
        final int n = nums.length;
        Arrays.sort(nums);
        int[] a = new int[1000001];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            final int x = nums[i];
            a[x + 1] = Math.max(a[x + 1], a[x] + 1);
            a[x] = Math.max(a[x], a[x - 1] + 1);
            ans = Math.max(ans, Math.max(a[x], a[x + 1]));
        }
        return ans;
    }
}