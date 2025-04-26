// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
    public int[] replaceElements(int[] arr) {
        List<Integer> ans = new ArrayList<>();
        ans.add(-1);
        int max = -1;
        if (arr.length == 1) {
            return ans.stream().mapToInt(i -> i).toArray();
        } else {
            for (int i = arr.length - 1; i >= 1; i--) {
                if (max < arr[i]) {
                    max = arr[i];
                }
                ans.add(max);
            }
            Collections.reverse(ans);
            return ans.stream().mapToInt(i -> i).toArray();
        }
    }
}