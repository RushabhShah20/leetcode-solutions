// Problem: Minimum Absolute Difference
// Link to the problem: https://leetcode.com/problems/minimum-absolute-difference/
class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        final int n = arr.length;
        Arrays.sort(arr);
        int minDiff = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            minDiff = Math.min(minDiff, Math.abs(arr[i] - arr[i + 1]));
        }
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = 0; i < n - 1; i++) {
            if (Math.abs(arr[i] - arr[i + 1]) == minDiff) {
                ans.add(new ArrayList<>(Arrays.asList(arr[i], arr[i + 1])));
            }
        }
        return ans;
    }
}