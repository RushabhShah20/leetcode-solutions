// Problem: Maximum Sum With Exactly K Elements
// Link to the problem: https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/
class Solution {
    public int maximizeSum(int[] nums, int k) {
        int sum = 0;
        List<Integer> l = new ArrayList<>();
        l = Arrays.stream(nums).boxed().collect(Collectors.toList());
        while (k > 0) {
            int max = Collections.max(l);
            l.remove(l.indexOf(max));
            l.add(max + 1);
            sum += max;
            k--;
        }
        return sum + k;
    }
}