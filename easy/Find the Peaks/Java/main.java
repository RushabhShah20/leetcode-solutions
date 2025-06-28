// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
class Solution {
    public List<Integer> findPeaks(int[] mountain) {
        List<Integer> ans = new ArrayList<>();
        for (int i = 1; i < mountain.length - 1; i++) {
            if (mountain[i] > mountain[i + 1] && mountain[i] > mountain[i - 1]) {
                ans.add(i);
            }
        }
        return ans;
    }
}