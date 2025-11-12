// Problem: Calculate Delayed Arrival Time
// Link to the problem: https://leetcode.com/problems/calculate-delayed-arrival-time/
impl Solution {
    pub fn find_delayed_arrival_time(arrival_time: i32, delayed_time: i32) -> i32 {
        return (arrival_time + delayed_time) % 24;
    }
}
