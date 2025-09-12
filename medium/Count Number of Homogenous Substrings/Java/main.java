// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
class Solution {
    public int countHomogenous(String s) {
        int mod = 1000000007;
        int count = 1;
        List<Integer> a = new ArrayList<>();
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                count++;
            } else {
                a.add(count);
                count = 1;
            }
        }
        a.add(count);
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            ans += (((long) (a.get(i)) * (long) (a.get(i) + 1)) / 2) % mod;
        }
        return ans;
    }
}