// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
/**
 * @param {number} k
 * @param {number[]} arrival
 * @param {number[]} load
 * @return {number[]}
 */
var busiestServers = function (k, arrival, load) {
    const n = arrival.length;
    const a = new Array(k).fill(0);
    const b = new MinPriorityQueue();
    const c = new MinPriorityQueue(
        (p) => p[0] * k + p[1]
    );
    for (let i = 0; i < k; ++i) {
        b.enqueue(i);
    }
    for (let i = 0; i < n; ++i) {
        const x = arrival[i];
        while (!c.isEmpty() && c.front()[0] <= x) {
            const y = c.dequeue();
            const j = ((y[1] - i) % k + k) % k + i;
            b.enqueue(j);
        }
        if (!b.isEmpty()) {
            const j = b.front() % k;
            b.dequeue();
            c.enqueue([x + load[i], j]);
            a[j]++;
        }
    }
    const ans = [];
    let mx = 0;
    for (let i = 0; i < k; i++) {
        mx = Math.max(mx, a[i]);
    }
    for (let i = 0; i < k; ++i) {
        if (a[i] === mx) {
            ans.push(i);
        }
    }
    return ans;
};