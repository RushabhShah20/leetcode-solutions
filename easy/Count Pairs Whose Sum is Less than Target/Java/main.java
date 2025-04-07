// Problem: Count Pairs Whose Sum is Less than Target
// Link to the problem: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
class Solution {
    public int countPairs(List<Integer> nums, int target) {
        int ans = 0;
        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < j; i++) {
                if (nums.get(i) + nums.get(j) < target) {
                    ans++;
                }
            }
        }
        return ans;
    }
}