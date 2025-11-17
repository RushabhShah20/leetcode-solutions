// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        List<Integer> pos = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                pos.add(i);
            }
        }
        int minDiff = 1000000000;
        if (pos.size() == 0) {
            return true;
        } else {
            for (int i = 1; i < pos.size(); i++) {
                minDiff = Math.min(minDiff, Math.abs(pos.get(i) - pos.get(i - 1) - 1));
            }
            if (minDiff < k) {
                return false;
            } else {
                return true;
            }
        }
    }
}