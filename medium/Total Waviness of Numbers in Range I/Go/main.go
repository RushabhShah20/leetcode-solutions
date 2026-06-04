// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
func totalWaviness(num1 int, num2 int) int {
	var ans int = 0
	for i := num1; i <= num2; i++ {
		var x string = strconv.Itoa(i)
		var n int = len(x)
		for j := 1; j < n-1; j++ {
			if x[j] > x[j-1] && x[j] > x[j+1] {
				ans++
			}
			if x[j] < x[j-1] && x[j] < x[j+1] {
				ans++
			}
		}
	}
	return ans
}
