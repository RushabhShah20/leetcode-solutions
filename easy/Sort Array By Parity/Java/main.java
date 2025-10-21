// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
class Solution {
    public int[] sortArrayByParity(int[] nums) {
        List<Integer> ans = new ArrayList<>(), even = new ArrayList<>(), odd = new ArrayList<>();
        for (int num : nums) {
            if (num % 2 == 0) {
                even.add(num);
            } else {
                odd.add(num);
            }
        }
        for (int num : even) {
            ans.add(num);
        }
        for (int num : odd) {
            ans.add(num);
        }
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}