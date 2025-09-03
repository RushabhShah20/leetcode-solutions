// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
func slicesEqual(a, b []int) bool {
	return reflect.DeepEqual(a, b)
}

func oddString(words []string) string {
	var ans string = ""
	var diff [][]int = make([][]int, len(words))
	for i := 0; i < len(words); i++ {
		diff[i] = make([]int, len(words[0])-1)
	}
	for i := 0; i < len(words); i++ {
		for j := 0; j < len(words[i])-1; j++ {
			diff[i][j] = int(words[i][j+1]) - int(words[i][j])
		}
	}
	if slicesEqual(diff[1], diff[2]) {
		if !slicesEqual(diff[0], diff[1]) && !slicesEqual(diff[0], diff[2]) {
			return words[0]
		}
	}
	for i := 1; i < len(diff)-1; i++ {
		if slicesEqual(diff[i-1], diff[i+1]) {
			if !slicesEqual(diff[i], diff[i-1]) && !slicesEqual(diff[i], diff[i+1]) {
				return words[i]
			}
		}
	}
	if slicesEqual(diff[len(words)-3], diff[len(words)-2]) {
		if !slicesEqual(diff[len(words)-1], diff[len(words)-2]) &&
			!slicesEqual(diff[len(words)-1], diff[len(words)-3]) {
			return words[len(words)-1]
		}
	}
	return ans
}
