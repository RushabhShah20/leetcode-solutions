// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
function toBinary(n: number): number {
    let ans: number = 0;
    let i: number = 1;
    while (n > 0) {
        let rem: number = n % 2;
        ans += rem * i;
        n = n / 2 >> 0;
        i *= 10;
    }
    return ans;
}
function convertDateToBinary(date: string): string {
    let yyyy: string = date.substring(0, 4);
    let mm: string = date.substring(5, 7);
    let dd: string = date.substring(8, 10);
    let y: number = toBinary(parseInt(yyyy));
    let m: number = toBinary(parseInt(mm));
    let d: number = toBinary(parseInt(dd));
    let ans: string = y.toString() + "-" + m.toString() + "-" + d.toString();
    return ans;
};