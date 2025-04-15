// Problem: Check if Two Chessboard Squares Have the Same Color
// Link to the problem: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/
impl Solution {
    pub fn check_two_chessboards(coordinate1: String, coordinate2: String) -> bool {
        let col_cord1 = coordinate1.chars().next().unwrap();
        let col_cord2 = coordinate2.chars().next().unwrap();

        let row_cord1 = coordinate1.chars().nth(1).unwrap() as u8;
        let row_cord2 = coordinate2.chars().nth(1).unwrap() as u8;

        let is_odd_row1 = row_cord1 % 2 != 0;
        let is_odd_row2 = row_cord2 % 2 != 0;

        let is_aceg_col1 =
            col_cord1 == 'a' || col_cord1 == 'c' || col_cord1 == 'e' || col_cord1 == 'g';
        let is_aceg_col2 =
            col_cord2 == 'a' || col_cord2 == 'c' || col_cord2 == 'e' || col_cord2 == 'g';

        let is_bdfh_col1 =
            col_cord1 == 'b' || col_cord1 == 'd' || col_cord1 == 'f' || col_cord1 == 'h';
        let is_bdfh_col2 =
            col_cord2 == 'b' || col_cord2 == 'd' || col_cord2 == 'f' || col_cord2 == 'h';

        if is_aceg_col1 && is_aceg_col2 && is_odd_row1 && is_odd_row2 {
            return true;
        } else if is_aceg_col1 && is_bdfh_col2 && is_odd_row1 && !is_odd_row2 {
            return true;
        } else if is_bdfh_col1 && is_aceg_col2 && !is_odd_row1 && is_odd_row2 {
            return true;
        } else if is_bdfh_col1 && is_bdfh_col2 && !is_odd_row1 && !is_odd_row2 {
            return true;
        } else if is_aceg_col1 && is_aceg_col2 && !is_odd_row1 && !is_odd_row2 {
            return true;
        } else if is_aceg_col1 && is_bdfh_col2 && !is_odd_row1 && is_odd_row2 {
            return true;
        } else if is_bdfh_col1 && is_aceg_col2 && is_odd_row1 && !is_odd_row2 {
            return true;
        } else if is_bdfh_col1 && is_bdfh_col2 && is_odd_row1 && is_odd_row2 {
            return true;
        }

        false
    }
}
