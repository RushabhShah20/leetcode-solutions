// Problem: Largest Triangle Area
// Link to the problem: https://leetcode.com/problems/largest-triangle-area/
impl Solution {
    pub fn largest_triangle_area(points: Vec<Vec<i32>>) -> f64 {
        let mut ans: f64 = 0.0;
        let n: usize = points.len();
        for i in 0..n {
            for j in i + 1..n {
                for k in j + 1..n {
                    let x1: i32 = points[i][0];
                    let x2: i32 = points[j][0];
                    let x3: i32 = points[k][0];
                    let y1: i32 = points[i][1];
                    let y2: i32 = points[j][1];
                    let y3: i32 = points[k][1];
                    let area: f64 =
                        0.5 * ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)).abs() as f64);
                    ans = ans.max(area);
                }
            }
        }
        return ans;
    }
}
