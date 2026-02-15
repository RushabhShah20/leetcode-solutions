// Problem: Add Binary
// Link to the problem: https://leetcode.com/problems/add-binary/
class Solution {
    public String addBinary(String a, String b) {
        final int m = a.length(), n = b.length();
        StringBuilder ans = new StringBuilder();
        int i = m - 1, j = n - 1;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = 0;
            if (i >= 0 && a.charAt(i) == '1') {
                sum++;
            }
            if (j >= 0 && b.charAt(j) == '1') {
                sum++;
            }
            sum += carry;
            if (sum >= 2) {
                carry = 1;
            } else {
                carry = 0;
            }
            ans.insert(0, (char) ((sum % 2) + '0'));
            i--;
            j--;
        }
        if (carry == 1) {
            ans.insert(0, '1');
        }
        return ans.toString();
    }
}