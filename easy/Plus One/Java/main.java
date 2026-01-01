// Problem: Plus One
// Link to the problem: https://leetcode.com/problems/plus-one/
class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 0, n = digits.length;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                int x = digits[i];
                digits[i] = (digits[i] + 1) % 10;
                carry = (x + 1) / 10;
            } else {
                int x = digits[i];
                digits[i] = (digits[i] + carry) % 10;
                carry = (x + carry) / 10;
            }
        }
        if (carry == 1) {
            List<Integer> l = Arrays.stream(digits).boxed().collect(Collectors.toList());
            l.add(0, 1);
            digits = l.stream().mapToInt(i -> i).toArray();
        }
        return digits;
    }
}