// Problem: Permutations
// Link to the problem: https://leetcode.com/problems/permutations/
class Solution {
    public void backTrack(int[] nums, boolean[] used, List<Integer> sub, List<List<Integer>> ans) {
        if (sub.size() == nums.length) {
            ans.add(new ArrayList<>(sub));
            return;
        }
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) {
                continue;
            }
            used[i] = true;
            sub.add(nums[i]);
            backTrack(nums, used, sub, ans);
            sub.remove(sub.size() - 1);
            used[i] = false;
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> sub = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        Arrays.fill(used, false);
        backTrack(nums, used, sub, ans);
        return ans;
    }
}