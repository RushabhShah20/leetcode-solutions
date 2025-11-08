// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
impl Solution {
    pub fn min_cost_to_move_chips(position: Vec<i32>) -> i32 {
        let mut even: i32 = 0;
        let mut odd: i32 = 0;
        for i in position {
            if (i % 2 == 0) {
                even += 1;
            } else {
                odd += 1;
            }
        }
        let ans: i32 = even.min(odd);
        return ans;
    }
}
