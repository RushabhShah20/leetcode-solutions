// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
impl Solution {
    pub fn number_of_beams(bank: Vec<String>) -> i32 {
        let mut ans: i32 = 0;
        let mut prev: i32 = 0;
        for s in bank {
            let mut count: i32 = 0;
            for c in s.chars() {
                if (c == '1') {
                    count += 1;
                }
            }
            ans += (count * prev);
            if (count > 0) {
                prev = count;
            }
        }
        return ans;
    }
}
