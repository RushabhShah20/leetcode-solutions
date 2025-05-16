// Problem: Calculate Amount Paid in Taxes
// Link to the problem: https://leetcode.com/problems/calculate-amount-paid-in-taxes/
func calculateTax(brackets [][]int, income int) float64 {
	var ans float64 = 0
	if income >= brackets[0][0] {
		ans = (float64(brackets[0][0]*brackets[0][1]) / 100.0)
	} else {
		return (float64(income*brackets[0][1]) / 100.0)
	}
	for i := 1; i < len(brackets); i++ {
		if income >= (brackets[i][0]) {
			ans += (float64((brackets[i][0]-brackets[i-1][0])*brackets[i][1]) / 100.0)
		} else {
			ans += (float64((income-brackets[i-1][0])*brackets[i][1]) / 100.0)
			break
		}
	}
	return ans
}
