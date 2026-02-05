// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
func numberOfEmployeesWhoMetTarget(hours []int, target int) int {
	var ans int = 0
	for _, hour := range hours {
		if hour >= target {
			ans++
		}
	}
	return ans
}
