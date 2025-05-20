// Problem: Find Lucky Integer in an Array
// Link to the problem: https://leetcode.com/problems/find-lucky-integer-in-an-array/
func max(arr []int) int {
	if len(arr) == 0 {
		return -1
	}
	var max int = arr[0]
	for i := 1; i < len(arr); i++ {
		if arr[i] > max {
			max = arr[i]
		}
	}
	return max
}
func findLucky(arr []int) int {
	m := make(map[int]int)
	for _, num := range arr {
		m[num]++
	}
	var ans []int
	for key, value := range m {
		if value == key {
			ans = append(ans, key)
		}
	}
	if len(arr) == 0 {
		return -1
	} else {
		return max(ans)
	}
}
