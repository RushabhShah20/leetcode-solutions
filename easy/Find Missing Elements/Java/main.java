// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        final int n = nums.length;
        int mn = 101, mx = 1;
        for (int i = 0; i < n; i++) {
            mn = Math.min(mn, nums[i]);
            mx = Math.max(mx, nums[i]);
        }
        final int m = mx - mn + 1;
        int a[] = new int[m];
        for (int i = 0; i < n; i++) {
            a[nums[i] - mn]++;
        }
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            if (a[i] == 0) {
                ans.add(i + mn);
            }
        }
        return ans;
    }
}