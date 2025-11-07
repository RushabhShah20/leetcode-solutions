// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
impl Solution {
    pub fn min_time_to_visit_all_points(points: Vec<Vec<i32>>) -> i32 {
        let n: usize = points.len();
        let mut ans: i32 = 0;
        for i in 1..n {
            ans += (points[i - 1][1] - points[i][1])
                .abs()
                .max((points[i - 1][0] - points[i][0]).abs());
        }
        return ans;
    }
}
