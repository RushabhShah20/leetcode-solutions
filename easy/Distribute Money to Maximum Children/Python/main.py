# Problem: Distribute Money to Maximum Children
# Link to the problem: https://leetcode.com/problems/distribute-money-to-maximum-children/
class Solution:
    def distMoney(self, money: int, children: int) -> int:
        if money < children:
            return -1
        else:
            ans: int = 0
            a: List[int] = [1] * children
            money -= children
            for i in range(0, children):
                if money < 7:
                    if money == 3:
                        if i == children - 1:
                            a[i - 1] += 1
                        else:
                            a[i + 1] += 1
                        a[i] += 2
                    else:
                        a[i] += money
                    money = 0
                    break
                else:
                    a[i] += 7
                    money -= 7
            if money != 0:
                a[children - 1] += money
            for i in a:
                if i == 8:
                    ans += 1
            return ans
