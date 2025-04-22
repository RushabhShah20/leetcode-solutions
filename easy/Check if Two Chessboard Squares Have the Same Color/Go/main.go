// Problem: Check if Two Chessboard Squares Have the Same Color
// Link to the problem: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/
func stringToInt(s string) int {
	num, err := strconv.Atoi(s)
	if err != nil {
		return 0
	}
	return num
}

func checkTwoChessboards(coordinate1 string, coordinate2 string) bool {
	col_cord1 := coordinate1[0]
	col_cord2 := coordinate2[0]

	row_cord1 := stringToInt(string(coordinate1[1]))
	row_cord2 := stringToInt(string(coordinate2[1]))

	is_odd_row1 := row_cord1%2 != 0
	is_odd_row2 := row_cord2%2 != 0

	var is_aceg_col1 = col_cord1 == 'a' || col_cord1 == 'c' || col_cord1 == 'e' || col_cord1 == 'g'
	var is_aceg_col2 = col_cord2 == 'a' || col_cord2 == 'c' || col_cord2 == 'e' || col_cord2 == 'g'

	var is_bdfh_col1 = col_cord1 == 'b' || col_cord1 == 'd' || col_cord1 == 'f' || col_cord1 == 'h'
	var is_bdfh_col2 = col_cord2 == 'b' || col_cord2 == 'd' || col_cord2 == 'f' || col_cord2 == 'h'

	if is_aceg_col1 && is_aceg_col2 && is_odd_row1 && is_odd_row2 {
		return true
	} else if is_aceg_col1 && is_bdfh_col2 && is_odd_row1 && !is_odd_row2 {
		return true
	} else if is_bdfh_col1 && is_aceg_col2 && !is_odd_row1 && is_odd_row2 {
		return true
	} else if is_bdfh_col1 && is_bdfh_col2 && !is_odd_row1 && !is_odd_row2 {
		return true
	} else if is_aceg_col1 && is_aceg_col2 && !is_odd_row1 && !is_odd_row2 {
		return true
	} else if is_aceg_col1 && is_bdfh_col2 && !is_odd_row1 && is_odd_row2 {
		return true
	} else if is_bdfh_col1 && is_aceg_col2 && is_odd_row1 && !is_odd_row2 {
		return true
	} else if is_bdfh_col1 && is_bdfh_col2 && is_odd_row1 && is_odd_row2 {
		return true
	}

	return false
}
