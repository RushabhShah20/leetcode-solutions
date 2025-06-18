// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution {
    public List<Integer> toBinary(int n) {
        List<Integer> ans = new ArrayList<>();
        while (n > 0) {
            ans.add(n % 2);
            n /= 2;
        }
        Collections.reverse(ans);
        return ans;
    }

    public boolean isAlternating(List<Integer> ans) {
        for (int i = 0; i < ans.size(); i++) {
            if (i % 2 == 0) {
                if (ans.get(i) == 0) {
                    return false;
                }
            } else {
                if (ans.get(i) == 1) {
                    return false;
                }
            }
        }
        return true;
    }

    public boolean hasAlternatingBits(int n) {
        List<Integer> ans = toBinary(n);
        return isAlternating(ans);
    }
}