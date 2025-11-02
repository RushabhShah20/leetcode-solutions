// Problem: Count Unguarded Cells in the Grid
// Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
impl Solution {
    pub fn count_unguarded(m: i32, n: i32, guards: Vec<Vec<i32>>, walls: Vec<Vec<i32>>) -> i32 {
        let mut grid: Vec<Vec<i32>> = vec![vec![0; n as usize]; m as usize];
        for wall in &walls {
            grid[wall[0] as usize][wall[1] as usize] = 2;
        }
        for guard in &guards {
            grid[guard[0] as usize][guard[1] as usize] = 2;
        }
        let dr: Vec<i32> = [-1, 0, 1, 0].to_vec();
        let dc: Vec<i32> = [0, 1, 0, -1].to_vec();
        for guard in &guards {
            let gr: i32 = guard[0];
            let gc: i32 = guard[1];
            for i in 0..4 {
                let mut r: i32 = gr + dr[i];
                let mut c: i32 = gc + dc[i];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r as usize][c as usize] < 2) {
                    grid[r as usize][c as usize] = 1;
                    r += dr[i];
                    c += dc[i];
                }
            }
        }
        let mut ans: i32 = 0;
        for i in 0..m {
            for j in 0..n {
                if (grid[i as usize][j as usize] == 0) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
