// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
class Solution {
    public int countSeniors(String[] details) {
        int ans = 0;
        for (int i = 0; i < details.length; i++) {
            if (Integer.parseInt(details[i].substring(11, 13)) > 60) {
                ans++;
            }
        }
        return ans;
    }
}