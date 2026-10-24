// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
func dayOfTheYear(date string, a []int) int {
	x, _ := strconv.Atoi(date[:2])
	y, _ := strconv.Atoi(date[3:])
	var ans int = a[x-1] + y
	return ans
}
func countDaysTogether(arriveAlice string, leaveAlice string, arriveBob string, leaveBob string) int {
	var x []int = []int{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	var y []int = make([]int, 13)
	for i := 1; i < 13; i++ {
		y[i] = y[i-1] + x[i-1]
	}
	var a int = dayOfTheYear(arriveAlice, y)
	var b int = dayOfTheYear(leaveAlice, y)
	var c int = dayOfTheYear(arriveBob, y)
	var d int = dayOfTheYear(leaveBob, y)
	var ans int = max(0, min(b, d)-max(a, c)+1)
	return ans
}
