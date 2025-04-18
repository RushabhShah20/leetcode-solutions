// Problem: Find All Numbers Disappeared in an Array
// Link to the problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> ans = new ArrayList<Integer>();
        Integer[] data = new Integer[nums.length];
        Arrays.fill(data, new Integer(0));
        List<Integer> freq = Arrays.asList(data);
        for (int i = 0; i < nums.length; i++) {
            Integer x = freq.get(nums[i] - 1);
            freq.set(nums[i] - 1, x + 1);
        }
        for (int i = 0; i < freq.size(); i++) {
            if (freq.get(i) == 0) {
                ans.add(i + 1);
            }
        }
        return ans;
    }
}