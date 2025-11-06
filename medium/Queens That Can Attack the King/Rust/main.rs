// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
impl Solution {
    pub fn queens_attackthe_king(queens: Vec<Vec<i32>>, king: Vec<i32>) -> Vec<Vec<i32>> {
        let mut board: Vec<Vec<i32>> = vec![vec![0; 8]; 8];
        board[king[0] as usize][king[1] as usize] = 2;
        for queen in queens {
            board[queen[0] as usize][queen[1] as usize] = 1;
        }
        let mut ans: Vec<Vec<i32>> = Vec::new();
        for i in king[0]..8 {
            if (board[i as usize][king[1] as usize] == 1) {
                ans.push([i, king[1]].to_vec());
                break;
            }
        }
        for i in (0..=king[0]).rev() {
            if (board[i as usize][king[1] as usize] == 1) {
                ans.push([i, king[1]].to_vec());
                break;
            }
        }
        for j in king[1]..8 {
            if (board[king[0] as usize][j as usize] == 1) {
                ans.push([king[0], j].to_vec());
                break;
            }
        }
        for j in (0..=king[1]).rev() {
            if (board[king[0] as usize][j as usize] == 1) {
                ans.push([king[0], j].to_vec());
                break;
            }
        }
        let mut i: i32 = king[0];
        let mut j: i32 = king[1];
        while (i >= 0 && j >= 0) {
            if (board[i as usize][j as usize] == 1) {
                ans.push([i, j].to_vec());
                break;
            }
            i -= 1;
            j -= 1;
        }
        i = king[0];
        j = king[1];
        while (i >= 0 && j < 8) {
            if (board[i as usize][j as usize] == 1) {
                ans.push([i, j].to_vec());
                break;
            }
            i -= 1;
            j += 1;
        }
        i = king[0];
        j = king[1];
        while (i < 8 && j >= 0) {
            if (board[i as usize][j as usize] == 1) {
                ans.push([i, j].to_vec());
                break;
            }
            i += 1;
            j -= 1;
        }
        i = king[0];
        j = king[1];
        while (i < 8 && j < 8) {
            if (board[i as usize][j as usize] == 1) {
                ans.push([i, j].to_vec());
                break;
            }
            i += 1;
            j += 1;
        }
        return ans;
    }
}
