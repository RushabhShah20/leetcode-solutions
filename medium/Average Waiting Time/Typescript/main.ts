// Problem: Average Waiting Time
// Link to the problem: https://leetcode.com/problems/average-waiting-time/
function averageWaitingTime(customers: number[][]): number {
    let ans: number = 0, total: number = 0, n: number = customers.length;
    total += (customers[0][0] + customers[0][1]);
    ans += customers[0][1];
    for (let i = 1; i < n; i++) {
        if (total >= customers[i][0]) {
            total += customers[i][1];
            ans += ((total - customers[i][0]));
        }
        else {
            total = customers[i][0] + customers[i][1];
            ans += customers[i][1];
        }
    }
    return ((ans) / (n));
};