// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> ans = new ArrayList<Integer>();
        List<Integer> less = new ArrayList<Integer>();
        List<Integer> equal = new ArrayList<Integer>();
        List<Integer> greater = new ArrayList<Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < pivot) {
                less.add(nums[i]);
            } else if (nums[i] > pivot) {
                greater.add(nums[i]);
            } else {
                equal.add(nums[i]);
            }
        }
        ans.addAll(less);
        ans.addAll(equal);
        ans.addAll(greater);
        return ans.stream().mapToInt(i -> i).toArray();
    }
}