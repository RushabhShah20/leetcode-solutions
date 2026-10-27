// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
impl Solution {
    pub fn create_grid(m: i32, n: i32) -> Vec<String> {
        let mut grid: Vec<Vec<u8>> = vec![vec![b'#'; n as usize]; m as usize];
        for i in 0..(n as usize) {
            grid[0][i] = b'.';
        }
        for i in 0..(m as usize) {
            grid[i][(n - 1) as usize] = b'.';
        }
        let ans: Vec<String> = grid
            .into_iter()
            .map(|row: Vec<u8>| -> String { String::from_utf8(row).unwrap() })
            .collect();
        return ans;
    }
}
