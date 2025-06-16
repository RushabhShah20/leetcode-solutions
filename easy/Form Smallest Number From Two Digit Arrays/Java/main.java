// Problem: Form Smallest Number From Two Digit Arrays
// Link to the problem: https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/
class Solution {
    public int minNumber(int[] nums1, int[] nums2) {
        Set<Integer> common = new HashSet<>();
        for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                if (nums1[i] == nums2[j]) {
                    common.add(nums1[i]);
                    break;
                }
            }
        }
        for (int i = 0; i < nums2.length; i++) {
            for (int j = 0; j < nums1.length; j++) {
                if (nums1[j] == nums2[i]) {
                    common.add(nums2[i]);
                    break;
                }
            }
        }
        if (common.size() != 0) {
            return Collections.min(common);
        } else {
            int min1 = Arrays.stream(nums1).min().getAsInt();
            int min2 = Arrays.stream(nums2).min().getAsInt();
            return ((10 * Math.min(min1, min2)) + Math.max(min1, min2));
        }
    }
}