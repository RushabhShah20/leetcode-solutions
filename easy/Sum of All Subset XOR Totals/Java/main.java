// Problem: Sum of All Subset XOR Totals
// Link to the problem: https://leetcode.com/problems/sum-of-all-subset-xor-totals/
class Solution {
    public int[][] subsets(int[] arr) {
        int n = arr.length;
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(arr);
        for (int i = 0; i < (1 << n); i++) {
            List<Integer> subset = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    subset.add(arr[j]);
                }
            }
            res.add(subset);
        }
        return res.stream().map(l -> l.stream().mapToInt(i -> i).toArray()).toArray(int[][]::new);
    }

    public int subsetXORSum(int[] nums) {
        int ans = 0;
        int[][] sub = subsets(nums);
        for (int i = 0; i < sub.length; i++) {
            int sum = 0;
            for (int j = 0; j < sub[i].length; j++) {
                sum ^= sub[i][j];
            }
            ans += sum;
        }
        return ans;
    }
}