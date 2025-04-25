// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
class Solution {
    public int[] occurrencesOfElement(int[] nums, int[] queries, int x) {
        int[] ans = new int[queries.length];
        Arrays.fill(ans, -1);
        List<Integer> freq = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == x) {
                freq.add(i);
            }
        }
        for (int i = 0; i < ans.length; i++) {
            if (queries[i] <= freq.size()) {
                ans[i] = freq.get(queries[i] - 1);
            }
        }
        return ans;
    }
}