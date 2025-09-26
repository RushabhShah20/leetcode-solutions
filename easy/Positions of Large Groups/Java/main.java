// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
class Solution {
    public List<List<Integer>> largeGroupPositions(String s) {
        List<List<Integer>> ans = new ArrayList<>();
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                count++;
            } else {
                if (count >= 3) {
                    ans.add(new ArrayList<>(Arrays.asList(i - count, i - 1)));
                }
                count = 1;
            }
        }
        if (count >= 3) {
            ans.add(new ArrayList<>(Arrays.asList((int) (s.length() - count), (int) (s.length() - 1))));
        }
        return ans;
    }
}