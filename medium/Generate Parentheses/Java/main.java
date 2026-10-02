// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
class Solution {
    public List<String> generateParenthesis(int n) {
        if (n == 0) {
            return new ArrayList(Arrays.asList(""));
        }
        List<String> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            final List<String> l = generateParenthesis(i), r = generateParenthesis(n - 1 - i);
            for (int j = 0; j < l.size(); j++) {
                for (int k = 0; k < r.size(); k++) {
                    ans.add("(" + l.get(j) + ")" + r.get(k));
                }
            }
        }
        return ans;
    }
}