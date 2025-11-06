// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
func queensAttacktheKing(queens [][]int, king []int) [][]int {
	var board [][]int = make([][]int, 8)
	for i := 0; i < 8; i++ {
		board[i] = make([]int, 8)
	}
	board[king[0]][king[1]] = 2
	for _, queen := range queens {
		board[queen[0]][queen[1]] = 1
	}
	var ans [][]int
	for i := king[0]; i < 8; i++ {
		if board[i][king[1]] == 1 {
			ans = append(ans, []int{i, king[1]})
			break
		}
	}
	for i := king[0]; i >= 0; i-- {
		if board[i][king[1]] == 1 {
			ans = append(ans, []int{i, king[1]})
			break
		}
	}
	for j := king[1]; j < 8; j++ {
		if board[king[0]][j] == 1 {
			ans = append(ans, []int{king[0], j})
			break
		}
	}
	for j := king[1]; j >= 0; j-- {
		if board[king[0]][j] == 1 {
			ans = append(ans, []int{king[0], j})
			break
		}
	}
	var i int = king[0]
	var j int = king[1]
	for i >= 0 && j >= 0 {
		if board[i][j] == 1 {
			ans = append(ans, []int{i, j})
			break
		}
		i--
		j--
	}
	i = king[0]
	j = king[1]
	for i >= 0 && j < 8 {
		if board[i][j] == 1 {
			ans = append(ans, []int{i, j})
			break
		}
		i--
		j++
	}
	i = king[0]
	j = king[1]
	for i < 8 && j >= 0 {
		if board[i][j] == 1 {
			ans = append(ans, []int{i, j})
			break
		}
		i++
		j--
	}
	i = king[0]
	j = king[1]
	for i < 8 && j < 8 {
		if board[i][j] == 1 {
			ans = append(ans, []int{i, j})
			break
		}
		i++
		j++
	}
	return ans
}
