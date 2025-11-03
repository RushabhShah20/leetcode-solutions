// Problem: Distribute Money to Maximum Children
// Link to the problem: https://leetcode.com/problems/distribute-money-to-maximum-children/
func distMoney(money int, children int) int {
	if money < children {
		return -1
	} else {
		var ans int = 0
		var a []int = make([]int, children)
		for i := 0; i < children; i++ {
			a[i] = 1
		}
		money -= children
		for i := 0; i < children; i++ {
			if money < 7 {
				if money == 3 {
					if i == children-1 {
						a[i-1]++
					} else {
						a[i+1]++
					}
					a[i] += 2
				} else {
					a[i] += money
				}
				money = 0
				break
			} else {
				a[i] += 7
				money -= 7
			}
		}
		if money != 0 {
			a[children-1] += money
		}
		for _, i := range a {
			if i == 8 {
				ans++
			}
		}
		return ans
	}
}
