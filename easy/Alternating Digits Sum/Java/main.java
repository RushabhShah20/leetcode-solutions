// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
class Solution {
    List<Integer> split(int num) {
        List<Integer> res = new ArrayList<>();
        while (num > 0) {
            res.add(num % 10);
            num /= 10;
        }
        return res;
    }

    public int alternateDigitSum(int n) {
        int ans = 0;
        List<Integer> digits = split(n);
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits.size() % 2 == 0) {
                if (i % 2 != 0) {
                    ans += digits.get(i);
                } else {
                    ans -= digits.get(i);
                }
            } else {
                if (i % 2 == 0) {
                    ans += digits.get(i);
                } else {
                    ans -= digits.get(i);
                }
            }
        }
        return ans;
    }
}