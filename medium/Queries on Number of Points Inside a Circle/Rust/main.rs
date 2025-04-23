// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
impl Solution {
    pub fn count_points(points: Vec<Vec<i32>>, queries: Vec<Vec<i32>>) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; queries.len()];
        for i in 0..queries.len() {
            for j in 0..points.len() {
                if (queries[i][2] * queries[i][2])
                    >= ((queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0])
                        + (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1]))
                {
                    ans[i] += 1;
                }
            }
        }
        return ans;
    }
}
