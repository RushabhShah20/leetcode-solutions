// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
function assignTasks(servers: number[], tasks: number[]): number[] {
    const m: number = servers.length, n: number = tasks.length;
    const a: MinPriorityQueue<number[]> = new MinPriorityQueue<number[]>({
        compare: (p: number[], q: number[]): number => {
            if (p[0] !== q[0]) {
                return p[0] - q[0];
            }
            return p[1] - q[1];
        },
    });
    const b: MinPriorityQueue<number[]> = new MinPriorityQueue<number[]>({
        compare: (p: number[], q: number[]): number => {
            if (p[0] !== q[0]) {
                return p[0] - q[0];
            }
            return p[1] - q[1];
        },
    });
    for (let i = 0; i < m; i++) {
        b.enqueue([servers[i], i]);
    }
    const ans: number[] = new Array<number>(n).fill(0);
    let x: number = 0;
    for (let i = 0; i < n; i++) {
        x = Math.max(x, i);
        while (!a.isEmpty() && a.front()[0] <= x) {
            const y: number[] = a.dequeue();
            b.enqueue([servers[y[1]], y[1]]);
        }
        if (b.isEmpty()) {
            x = a.front()[0];
            while (!a.isEmpty() && a.front()[0] <= x) {
                const y: number[] = a.dequeue();
                b.enqueue([servers[y[1]], y[1]]);
            }
        }
        const z: number[] = b.dequeue();
        ans[i] = z[1];
        a.enqueue([x + tasks[i], z[1]]);
    }
    return ans;
};