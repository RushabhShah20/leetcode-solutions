// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
function bestClosingTime(customers: string): number {
    let n: number = customers.length, minPenalty: number = 0, currPenalty: number = 0, ans: number = 0;
    for (let i = 0; i < n; i++) {
        if (customers[i] == 'Y') {
            currPenalty--;
        }
        else {
            currPenalty++;
        }
        if (currPenalty < minPenalty) {
            minPenalty = currPenalty;
            ans = i + 1;
        }
    }
    return ans;
};