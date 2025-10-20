// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int ans = 0;
        for (String operation : operations) {
            if (operation.equals("--X") || operation.equals("X--")) {
                ans--;
            } else {
                ans++;
            }
        }
        return ans;
    }
}