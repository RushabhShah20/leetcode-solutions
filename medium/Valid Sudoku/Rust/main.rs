// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
impl Solution {
    pub fn check_sub_square(
        board: &Vec<Vec<char>>,
        start_row: usize,
        start_col: usize,
        end_row: usize,
        end_col: usize,
    ) -> bool {
        let mut v: Vec<i32> = Vec::new();
        let mut s: std::collections::HashSet<i32> = std::collections::HashSet::new();
        for i in start_row..=end_row {
            for j in start_col..=end_col {
                if board[i][j].is_ascii_digit() {
                    let mut digit: i32 = (board[i][j] as u8 - b'0').into();
                    v.push(digit);
                    s.insert(digit);
                }
            }
        }
        if (v.len() == s.len()) {
            return true;
        } else {
            return false;
        }
    }
    pub fn is_valid_sudoku(board: Vec<Vec<char>>) -> bool {
        for i in 0..9 {
            let mut row: Vec<i32> = Vec::new();
            let mut r: std::collections::HashSet<i32> = std::collections::HashSet::new();
            for j in 0..9 {
                if board[i][j].is_ascii_digit() {
                    let mut digit: i32 = (board[i][j] as u8 - b'0').into();
                    row.push(digit);
                    r.insert(digit);
                }
            }
            if (row.len() != r.len()) {
                return false;
            }
        }
        for j in 0..9 {
            let mut col: Vec<i32> = Vec::new();
            let mut c: std::collections::HashSet<i32> = std::collections::HashSet::new();
            for i in 0..9 {
                if board[i][j].is_ascii_digit() {
                    let mut digit: i32 = (board[i][j] as u8 - b'0').into();
                    col.push(digit);
                    c.insert(digit);
                }
            }
            if (col.len() != c.len()) {
                return false;
            }
        }
        if (Self::check_sub_square(&board, 0, 0, 2, 2) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 3, 0, 5, 2) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 6, 0, 8, 2) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 0, 3, 2, 5) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 3, 3, 5, 5) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 6, 3, 8, 5) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 0, 6, 2, 8) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 3, 6, 5, 8) == false) {
            return false;
        }
        if (Self::check_sub_square(&board, 6, 6, 8, 8) == false) {
            return false;
        }
        return true;
    }
}
