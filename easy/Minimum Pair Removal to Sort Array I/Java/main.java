// Problem: Minimum Pair Removal to Sort Array I
// Link to the problem: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/
class Solution {
    public boolean isSorted(List<Integer> nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums.get(i) > nums.get(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public int minimumPairRemoval(int[] nums) {
        int ans = 0;
        List<Integer> numsList = new ArrayList<>();
        for (final int num : nums) {
            numsList.add(num);
        }
        while (!isSorted(numsList)) {
            int minSum = numsList.get(0) + numsList.get(1);
            for (int i = 1; i < numsList.size() - 1; i++) {
                int currSum = numsList.get(i) + numsList.get(i + 1);
                minSum = Math.min(minSum, currSum);
            }
            for (int i = 0; i < numsList.size() - 1; i++) {
                int currSum = numsList.get(i) + numsList.get(i + 1);
                if (currSum == minSum) {
                    numsList.remove(i);
                    numsList.remove(i);
                    numsList.add(i, currSum);
                    break;
                }
            }
            ans++;
        }
        return ans;
    }
}