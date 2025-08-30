// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
func checkSubSquare(board [][]byte, startRow int, startCol int, endRow int, endCol int) bool {
	var v []int
	var s map[int]bool = make(map[int]bool)
	for i := startRow; i <= endRow; i++ {
		for j := startCol; j <= endCol; j++ {
			if unicode.IsDigit(rune(board[i][j])) {
				var digit int = int(board[i][j] - '0')
				v = append(v, digit)
				s[digit] = true
			}
		}
	}
	if len(v) == len(s) {
		return true
	} else {
		return false
	}
}
func isValidSudoku(board [][]byte) bool {
	for i := 0; i < 9; i++ {
		var row []int
		var r map[int]bool = make(map[int]bool)
		for j := 0; j < 9; j++ {
			if unicode.IsDigit(rune(board[i][j])) {
				var digit int = int(board[i][j] - '0')
				row = append(row, digit)
				r[digit] = true
			}
		}
		if len(row) != len(r) {
			return false
		}
	}
	for j := 0; j < 9; j++ {
		var col []int
		var c map[int]bool = make(map[int]bool)
		for i := 0; i < 9; i++ {
			if unicode.IsDigit(rune(board[i][j])) {
				var digit int = int(board[i][j] - '0')
				col = append(col, digit)
				c[digit] = true
			}
		}
		if len(col) != len(c) {
			return false
		}
	}
	if checkSubSquare(board, 0, 0, 2, 2) == false {
		return false
	}
	if checkSubSquare(board, 3, 0, 5, 2) == false {
		return false
	}
	if checkSubSquare(board, 6, 0, 8, 2) == false {
		return false
	}
	if checkSubSquare(board, 0, 3, 2, 5) == false {
		return false
	}
	if checkSubSquare(board, 3, 3, 5, 5) == false {
		return false
	}
	if checkSubSquare(board, 6, 3, 8, 5) == false {
		return false
	}
	if checkSubSquare(board, 0, 6, 2, 8) == false {
		return false
	}
	if checkSubSquare(board, 3, 6, 5, 8) == false {
		return false
	}
	if checkSubSquare(board, 6, 6, 8, 8) == false {
		return false
	}
	return true
}
