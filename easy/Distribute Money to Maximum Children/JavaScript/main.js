// Problem: Distribute Money to Maximum Children
// Link to the problem: https://leetcode.com/problems/distribute-money-to-maximum-children/
/**
 * @param {number} money
 * @param {number} children
 * @return {number}
 */
var distMoney = function (money, children) {
    if (money < children) {
        return -1;
    } else {
        let ans = 0;
        let a = new Array(children).fill(1);
        money -= children;
        for (let i = 0; i < children; i++) {
            if (money < 7) {
                if (money === 3) {
                    if (i === children - 1) {
                        a[i - 1]++;
                    } else {
                        a[i + 1]++;
                    }
                    a[i] += 2;
                } else {
                    a[i] += money;
                }
                money = 0;
                break;
            } else {
                a[i] += 7;
                money -= 7;
            }
        }
        if (money != 0) {
            a[children - 1] += money;
        }
        for (const i of a) {
            if (i === 8) {
                ans++;
            }
        }
        return ans;
    }
};