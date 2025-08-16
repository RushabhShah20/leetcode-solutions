// Problem: Maximum 69 Number
// Link to the problem: https://leetcode.com/problems/maximum-69-number/
class Solution {
    public int maximum69Number(int num) {
        String s = String.valueOf(num);
        char[] chars = s.toCharArray();
        for (int i = 0; i < s.length(); i++) {
            if (chars[i] == '6') {
                chars[i] = '9';
                break;
            }
        }
        num = Integer.parseInt(new String(chars));
        return num;
    }
}