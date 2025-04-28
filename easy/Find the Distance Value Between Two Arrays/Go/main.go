// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}

func findTheDistanceValue(arr1 []int, arr2 []int, d int) int {
	var ans int = 0
	for i := 0; i < len(arr1); i++ {
		var x bool = true
		for j := 0; j < len(arr2); j++ {
			if arr1[i] == arr2[j] || Abs(arr1[i], arr2[j]) <= d {
				x = false
				break
			}
		}
		if x == true {
			ans++
		}
	}
	return ans
}
