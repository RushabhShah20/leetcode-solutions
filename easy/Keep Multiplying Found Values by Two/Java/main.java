// Problem: Keep Multiplying Found Values by Two
// Link to the problem: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
class Solution {
    public int findFinalValue(int[] nums, int original) {
        SortedSet<Integer> s = new TreeSet<>();
        for (int num : nums) {
            s.add(num);
        }
        while (s.contains(original)) {
            original = original * 2;
        }
        return original;
    }
}