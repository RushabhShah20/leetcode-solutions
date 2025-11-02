// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        SortedSet<Integer> s = new TreeSet<>();
        for (int num : nums) {
            s.add(num);
        }
        List<Integer> ans = new ArrayList<>();
        for (Integer i = s.first(); i <= s.last(); i++) {
            if (!s.contains(i)) {
                ans.add(i);
            }
        }
        return ans;
    }
}