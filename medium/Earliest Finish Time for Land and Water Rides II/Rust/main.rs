// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
impl Solution {
    pub fn solve(
        n: usize,
        m: usize,
        a1: &Vec<i32>,
        d1: &Vec<i32>,
        a2: &Vec<i32>,
        d2: &Vec<i32>,
    ) -> i32 {
        let mut x: i32 = i32::MAX;
        for i in 0..n {
            x = x.min(a1[i] + d1[i]);
        }
        let mut y: i32 = i32::MAX;
        for i in 0..m {
            y = y.min(x.max(a2[i]) + d2[i]);
        }
        return y;
    }
    pub fn earliest_finish_time(
        land_start_time: Vec<i32>,
        land_duration: Vec<i32>,
        water_start_time: Vec<i32>,
        water_duration: Vec<i32>,
    ) -> i32 {
        let n: usize = land_duration.len();
        let m: usize = water_duration.len();
        let x: i32 = Self::solve(
            n,
            m,
            &land_start_time,
            &land_duration,
            &water_start_time,
            &water_duration,
        );
        let y: i32 = Self::solve(
            m,
            n,
            &water_start_time,
            &water_duration,
            &land_start_time,
            &land_duration,
        );
        let ans: i32 = x.min(y);
        return ans;
    }
}
