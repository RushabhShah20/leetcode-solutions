// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
func dayOfYear(date string) int {
	day, _ := strconv.Atoi(date[8:10])
	month, _ := strconv.Atoi(date[5:7])
	year, _ := strconv.Atoi(date[0:4])
	var ans int = 0
	for i := 1971; i < year; i++ {
		if i%4 == 0 && (i%100 != 0 || i%400 == 0) {
			ans += 366
		} else {
			ans += 365
		}
	}
	if year%4 == 0 && (year%100 != 0 || year%400 == 0) {
		var months []int = []int{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
		for i := 0; i < month-1; i++ {
			ans += months[i]
		}
	} else {
		var months []int = []int{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
		for i := 0; i < month-1; i++ {
			ans += months[i]
		}
	}
	ans += day
	return ans
}
func daysBetweenDates(date1 string, date2 string) int {
	var x int = dayOfYear(date1)
	var y int = dayOfYear(date2)
	return abs(x - y)
}
