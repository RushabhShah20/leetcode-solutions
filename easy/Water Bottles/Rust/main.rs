// Problem: Water Bottles
// Link to the problem: https://leetcode.com/problems/water-bottles/
impl Solution {
    pub fn num_water_bottles(mut num_bottles: i32, num_exchange: i32) -> i32 {
        let mut ans: i32 = num_bottles;
        while (num_bottles >= num_exchange) {
            let x: i32 = num_bottles / num_exchange;
            let y: i32 = num_bottles % num_exchange;
            num_bottles = x + y;
            ans += x;
        }
        return ans;
    }
}
