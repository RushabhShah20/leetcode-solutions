// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
function dayOfTheYear(date: string, a: number[]): number {
    const x: number = parseInt(date.substring(0, 2)), y: number = parseInt(date.substring(3, 5));
    const ans: number = a[x - 1] + y;
    return ans;
}
function countDaysTogether(arriveAlice: string, leaveAlice: string, arriveBob: string, leaveBob: string): number {
    const x: number[] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let y: number[] = new Array(13).fill(0);
    for (let i = 1; i < 13; i++) {
        y[i] = y[i - 1] + x[i - 1];
    }
    const a: number = dayOfTheYear(arriveAlice, y), b: number = dayOfTheYear(leaveAlice, y), c: number = dayOfTheYear(arriveBob, y), d: number = dayOfTheYear(leaveBob, y);
    const ans: number = Math.max(0, Math.min(b, d) - Math.max(a, c) + 1);
    return ans;
};