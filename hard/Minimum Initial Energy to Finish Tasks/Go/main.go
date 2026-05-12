// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
func minimumEffort(tasks [][]int) int {
	sort.Slice(tasks, func(i, j int) bool {
		return (tasks[i][1] - tasks[i][0]) < (tasks[j][1] - tasks[j][0])
	})
	var ans int = 0
	for _, task := range tasks {
		ans = max(ans+task[0], task[1])
	}
	return ans
}
