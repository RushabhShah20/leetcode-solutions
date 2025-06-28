// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
func findPeaks(mountain []int) []int {
	var ans []int
	for i := 1; i < len(mountain)-1; i++ {
		if mountain[i] > mountain[i+1] && mountain[i] > mountain[i-1] {
			ans = append(ans, i)
		}
	}
	return ans
}
