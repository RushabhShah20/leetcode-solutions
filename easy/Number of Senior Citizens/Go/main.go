// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
func stringToInt(s string) int {
	num, err := strconv.Atoi(s)
	if err != nil {
		return 0
	}
	return num
}
func countSeniors(details []string) int {
	var ans int = 0
	for i := 0; i < len(details); i++ {
		if stringToInt(details[i][11:13]) > 60 {
			ans++
		}
	}
	return ans
}
