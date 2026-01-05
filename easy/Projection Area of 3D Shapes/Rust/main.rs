// Problem: Projection Area of 3D Shapes
// Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
impl Solution {
    pub fn projection_area(grid: Vec<Vec<i32>>) -> i32 {
        let n: usize = grid.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            let mut a: i32 = 0;
            let mut b: i32 = 0;
            for j in 0..n {
                a = a.max(grid[i][j]);
                b = b.max(grid[j][i]);
                if (grid[i][j] > 0) {
                    ans += 1;
                }
            }
            ans += (a + b);
        }
        return ans;
    }
}
