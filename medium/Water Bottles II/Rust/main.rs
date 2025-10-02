// Problem: Water Bottles II
// Link to the problem: https://leetcode.com/problems/water-bottles-ii/
impl Solution {
    pub fn max_bottles_drunk(mut num_bottles: i32, mut num_exchange: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut emptyBottles: i32 = 0;
        while (true) {
            if (num_bottles > 0) {
                ans += num_bottles;
                emptyBottles += num_bottles;
                num_bottles = 0;
            }
            while (emptyBottles >= num_exchange) {
                num_bottles += 1;
                emptyBottles -= num_exchange;
                num_exchange += 1;
            }
            if (num_bottles == 0) {
                return ans;
            }
        }
        return ans;
    }
}
