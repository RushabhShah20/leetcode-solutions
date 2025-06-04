// Problem: Happy Number
// Link to the problem: https://leetcode.com/problems/happy-number/
class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> s = new HashSet<>();
        while (!s.contains(n)) {
            if (n == 1) {
                return true;
            }
            s.add(n);
            int temp = 0;
            while (n > 0) {
                temp += ((n % 10) * (n % 10));
                n /= 10;
            }
            n = temp;
        }
        return false;
    }
}