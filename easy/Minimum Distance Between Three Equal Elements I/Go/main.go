// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
func minimumDistance(nums []int) int {
	var n int = len(nums)
	var ans int = math.MaxInt
	for i := 0; i < n-2; i++ {
		for j := i + 1; j < n-1; j++ {
			for k := j + 1; k < n; k++ {
				if nums[i] == nums[j] && nums[j] == nums[k] {
					ans = min(ans, abs(i-j)+abs(j-k)+abs(k-i))
				}
			}
		}
	}
	if ans == math.MaxInt {
		return -1
	} else {
		return ans
	}
}
