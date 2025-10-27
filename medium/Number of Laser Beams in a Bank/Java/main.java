// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
class Solution {
    public int numberOfBeams(String[] bank) {
        int ans = 0, prev = 0;
        for (String s : bank) {
            int count = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '1') {
                    count++;
                }
            }
            ans += (count * prev);
            if (count > 0) {
                prev = count;
            }
        }
        return ans;
    }
}