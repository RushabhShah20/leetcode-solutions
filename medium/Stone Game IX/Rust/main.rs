// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
impl Solution {
    pub fn stone_game_ix(stones: Vec<i32>) -> bool {
        let n: usize = stones.len();
        let mut a: i32 = 0;
        let mut b: i32 = 0;
        let mut c: i32 = 0;
        for i in 0..n {
            let x: i32 = stones[i] % 3;
            if (x == 1) {
                b += 1;
            } else if (x == 2) {
                c += 1;
            } else {
                a += 1;
            }
        }
        let ans: bool = if (a & 1 == 1) {
            (b - c).abs() > 2
        } else {
            b >= 1 && c >= 1
        };
        return ans;
    }
}
