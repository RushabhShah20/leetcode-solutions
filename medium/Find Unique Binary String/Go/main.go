// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
func findDifferentBinaryString(nums []string) string {
	var n int = len(nums)
	var ans []byte = make([]byte, n)
	for i := 0; i < n; i++ {
		if nums[i][i] == '0' {
			ans[i] = '1'
		} else {
			ans[i] = '0'
		}
	}
	return string(ans)
}
