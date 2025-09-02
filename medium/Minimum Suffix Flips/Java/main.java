// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
class Solution {
    public int minFlips(String target) {
        char[] c = target.toCharArray();
        int ans = 0;
        boolean x = false;
        if (c[0] == '1') {
            ans++;
            x = true;
        }
        for (int i = 1; i < c.length; i++) {
            if (c[i] == '1') {
                if (x == false) {
                    ans++;
                    x = true;
                }
            } else {
                if (x == true) {
                    ans++;
                    x = false;
                }
            }
        }
        return ans;
    }
}