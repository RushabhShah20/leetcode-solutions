// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
function busiestServers(k: number, arrival: number[], load: number[]): number[] {
    const n: number = arrival.length;
    const a: number[] = new Array<number>(k).fill(0);
    const b: MinPriorityQueue<number> = new MinPriorityQueue<number>();
    const c: MinPriorityQueue<[number, number]> = new MinPriorityQueue<[number, number]>(
        (p: [number, number]): number => p[0] * k + p[1]
    );
    for (let i: number = 0; i < k; ++i) {
        b.enqueue(i);
    }
    for (let i: number = 0; i < n; ++i) {
        const x: number = arrival[i];
        while (!c.isEmpty() && c.front()[0] <= x) {
            const y: [number, number] = c.dequeue();
            const j: number = ((y[1] - i) % k + k) % k + i;
            b.enqueue(j);
        }
        if (!b.isEmpty()) {
            const j: number = b.front() % k;
            b.dequeue();
            c.enqueue([x + load[i], j]);
            a[j]++;
        }
    }
    const ans: number[] = [];
    let mx: number = 0;
    for (let i: number = 0; i < k; i++) {
        mx = Math.max(mx, a[i]);
    }
    for (let i: number = 0; i < k; ++i) {
        if (a[i] === mx) {
            ans.push(i);
        }
    }
    return ans;
};