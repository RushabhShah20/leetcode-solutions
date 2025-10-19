// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
class Solution {
    public List<Integer> minSubsequence(int[] nums) {
        nums = Arrays.stream(nums).boxed().sorted(Collections.reverseOrder()).mapToInt(Integer::intValue).toArray();
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        int a = 0;
        List<Integer> ans = new ArrayList<>();
        for (int num : nums) {
            a += num;
            if (a > sum - a) {
                ans.add(num);
                break;
            } else {
                ans.add(num);
            }
        }
        return ans;
    }
}