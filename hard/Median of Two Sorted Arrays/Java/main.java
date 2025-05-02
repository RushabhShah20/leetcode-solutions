// Problem: Median of Two Sorted Arrays
// Link to the problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        List<Integer> ans = new ArrayList<>();
        for (var i : nums1) {
            ans.add(i);
        }
        for (var i : nums2) {
            ans.add(i);
        }
        Collections.sort(ans);
        return (ans.size() % 2 == 0)
                ? (double) (((double) (ans.get((ans.size() / 2) - 1)) + (double) (ans.get(ans.size() / 2))) / 2)
                : (double) (ans.get(ans.size() / 2));
    }
}