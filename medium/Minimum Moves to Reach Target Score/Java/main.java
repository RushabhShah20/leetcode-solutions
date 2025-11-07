// Problem: Minimum Moves to Reach Target Score
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-reach-target-score/
class Solution {
    public int minMoves(int target, int maxDoubles) {
        if (target == 1) {
            return 0;
        }
        int ans = 0;
        while (maxDoubles > 0) {
            if (target % 2 == 0) {
                target /= 2;
                maxDoubles--;
            } else {
                target--;
            }
            ans++;
            if (target == 1) {
                break;
            }
        }
        if (target != 1) {
            ans += (target - 1);
        }
        return ans;
    }
}