// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
func stringToInt(s string) int64 {
	num, err := strconv.ParseInt(s, 10, 64)
	if err != nil {
		return 0
	}
	return num
}
func toBinary(n int64) int64 {
	var ans int64 = 0
	var i int64 = 1
	for j := n; j > 0; j /= 2 {
		var rem int64 = j % 2
		ans += rem * i
		i *= 10
	}
	return ans
}
func convertDateToBinary(date string) string {
	var yyyy string = date[0:4]
	var mm string = date[5:7]
	var dd string = date[8:10]
	var y int64 = toBinary(stringToInt(yyyy))
	var m int64 = toBinary(stringToInt(mm))
	var d int64 = toBinary(stringToInt(dd))
	var ans string = strconv.FormatInt(y, 10) + "-" + strconv.FormatInt(m, 10) + "-" + strconv.FormatInt(d, 10)
	return ans
}
