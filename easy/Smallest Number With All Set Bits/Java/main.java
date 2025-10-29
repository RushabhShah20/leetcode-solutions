// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
class Solution {
    List<Integer> toBinary(int n) {
        List<Integer> ans = new ArrayList<>();
        while (n > 0) {
            ans.add(n % 2);
            n /= 2;
        }
        return ans;
    }

    public int smallestNumber(int n) {
        List<Integer> binary = toBinary(n);
        int[] a = new int[binary.size()];
        for (int i = 0; i < a.length; i++) {
            a[i] = 1;
        }
        int ans = 0;
        for (int i = 0; i < a.length; i++) {
            ans += (Math.pow(2, i) * a[i]);
        }
        return ans;
    }
}