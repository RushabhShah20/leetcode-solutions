// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
func finalValueAfterOperations(operations []string) int {
	var ans int = 0
	for _, operation := range operations {
		if operation == "--X" || operation == "X--" {
			ans--
		} else {
			ans++
		}
	}
	return ans
}
