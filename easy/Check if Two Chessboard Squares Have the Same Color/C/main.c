// Problem: Check if Two Chessboard Squares Have the Same Color
// Link to the problem: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/
bool checkTwoChessboards(char *coordinate1, char *coordinate2)
{
    char col_cord1 = coordinate1[0], col_cord2 = coordinate2[0];
    int row_cord1 = atoi(&coordinate1[1]), row_cord2 = atoi(&coordinate2[1]);
    bool is_odd_row1 = row_cord1 % 2 != 0;
    bool is_odd_row2 = row_cord2 % 2 != 0;
    bool is_aceg_col1 =
        col_cord1 == 'a' || col_cord1 == 'c' || col_cord1 == 'e' || col_cord1 == 'g';
    bool is_aceg_col2 =
        col_cord2 == 'a' || col_cord2 == 'c' || col_cord2 == 'e' || col_cord2 == 'g';

    bool is_bdfh_col1 =
        col_cord1 == 'b' || col_cord1 == 'd' || col_cord1 == 'f' || col_cord1 == 'h';
    bool is_bdfh_col2 =
        col_cord2 == 'b' || col_cord2 == 'd' || col_cord2 == 'f' || col_cord2 == 'h';
    if (is_aceg_col1 && is_aceg_col2 && is_odd_row1 && is_odd_row2)
    {
        return true;
    }
    else if (is_aceg_col1 && is_bdfh_col2 && is_odd_row1 && !is_odd_row2)
    {
        return true;
    }
    else if (is_bdfh_col1 && is_aceg_col2 && !is_odd_row1 && is_odd_row2)
    {
        return true;
    }
    else if (is_bdfh_col1 && is_bdfh_col2 && !is_odd_row1 && !is_odd_row2)
    {
        return true;
    }
    else if (is_aceg_col1 && is_aceg_col2 && !is_odd_row1 && !is_odd_row2)
    {
        return true;
    }
    else if (is_aceg_col1 && is_bdfh_col2 && !is_odd_row1 && is_odd_row2)
    {
        return true;
    }
    else if (is_bdfh_col1 && is_aceg_col2 && is_odd_row1 && !is_odd_row2)
    {
        return true;
    }
    else if (is_bdfh_col1 && is_bdfh_col2 && is_odd_row1 && is_odd_row2)
    {
        return true;
    }
    return false;
}