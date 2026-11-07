// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
/**
 * @param {number[]} servers
 * @param {number[]} tasks
 * @return {number[]}
 */
var assignTasks = function (servers, tasks) {
    const m = servers.length, n = tasks.length;
    const a = new MinPriorityQueue({
        compare: (p, q) => {
            if (p[0] !== q[0]) {
                return p[0] - q[0];
            }
            return p[1] - q[1];
        },
    });
    const b = new MinPriorityQueue({
        compare: (p, q) => {
            if (p[0] !== q[0]) {
                return p[0] - q[0];
            }
            return p[1] - q[1];
        }
    });
    for (let i = 0; i < m; i++) {
        b.enqueue([servers[i], i]);
    }
    const ans = new Array(n).fill(0);
    let x = 0;
    for (let i = 0; i < n; i++) {
        x = Math.max(x, i);
        while (!a.isEmpty() && a.front()[0] <= x) {
            const y = a.dequeue();
            b.enqueue([servers[y[1]], y[1]]);
        }
        if (b.isEmpty()) {
            x = a.front()[0];
            while (!a.isEmpty() && a.front()[0] <= x) {
                const y = a.dequeue();
                b.enqueue([servers[y[1]], y[1]]);
            }
        }
        const z = b.dequeue();
        ans[i] = z[1];
        a.enqueue([x + tasks[i], z[1]]);
    }
    return ans;
};