// Problem: Find Positive Integer Solution for a Given Equation
// Link to the problem: https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
/**
 * This is the declaration of customFunction API.
 * @param  x    int
 * @param  x    int
 * @return 	    Returns f(x, y) for any given positive integers x and y.
 *			    Note that f(x, y) is increasing with respect to both x and y.
 *              i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 */
func findSolution(customFunction func(int, int) int, z int) [][]int {
	var ans [][]int
	for x := 1; x <= 1000; x++ {
		for y := 1; y <= 1000; y++ {
			if customFunction(x, y) == z {
				ans = append(ans, []int{x, y})
			}
		}
	}
	return ans
}
