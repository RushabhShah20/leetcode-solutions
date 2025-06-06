// Problem: Find The Original Array of Prefix Xor
// Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
class Solution {
    public int[] findArray(int[] pref) {
        int[] ans = new int[pref.length];
        ans[0] = pref[0];
        for (int i = 1; i < pref.length; i++) {
            ans[i] = pref[i] ^ pref[i - 1];
        }
        return ans;
    }
}