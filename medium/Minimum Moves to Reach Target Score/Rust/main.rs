// Problem: Minimum Moves to Reach Target Score
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-reach-target-score/
impl Solution {
    pub fn min_moves(mut target: i32, mut max_doubles: i32) -> i32 {
        if (target == 1) {
            return 0;
        }
        let mut ans: i32 = 0;
        while (max_doubles > 0) {
            if (target % 2 == 0) {
                target /= 2;
                max_doubles -= 1;
            } else {
                target -= 1;
            }
            ans += 1;
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
