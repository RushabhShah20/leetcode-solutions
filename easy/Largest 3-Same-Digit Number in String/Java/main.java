// Problem: Largest 3-Same-Digit Number in String
// Link to the problem: https://leetcode.com/problems/largest-3-same-digit-number-in-string/
class Solution {
    public String largestGoodInteger(String num) {
        String ans = "";
        int count = 1;
        for (int i = 1; i < num.length(); i++) {
            if (num.charAt(i) == num.charAt(i - 1)) {
                count++;
            } else {
                count = 1;
            }
            if (count == 3) {
                String x = num.substring(i - 2, i + 1);
                if (ans.equals("")) {
                    ans = x;
                } else {
                    if (Integer.valueOf(x) > Integer.valueOf(ans)) {
                        ans = x;
                    }
                }
            }
        }
        return ans;
    }
}