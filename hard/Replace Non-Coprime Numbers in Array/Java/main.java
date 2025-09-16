// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
class Solution {
    public int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public List<Integer> replaceNonCoprimes(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        for (var num : nums) {
            ans.add(num);
            while (ans.size() > 1) {
                int a = ans.get(ans.size() - 1);
                int b = ans.get(ans.size() - 2);
                int g = gcd(a, b);
                if (g > 1) {
                    ans.remove(ans.size() - 1);
                    ans.remove(ans.size() - 1);
                    long lcm = (((long) (a) * (long) (b)) / (long) (g));
                    ans.add((int) (lcm));
                } else {
                    break;
                }
            }
        }
        return ans;
    }
}