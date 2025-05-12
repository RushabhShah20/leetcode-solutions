// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
function toBinary(n: number): number[] {
    let ans: number[] = []
    while (n > 0) {
        let rem: number = n % 2;
        ans.push(rem);
        n = n / 2 >> 0;
    }
    return ans
}
function complement(res: number[]): number[] {
    for (let i = 0; i < res.length; i++) {
        if (res[i] === 1) {
            res[i] = 0;
        } else if (res[i] === 0) {
            res[i] = 1;
        }
    }
    return res;
}
function findComplement(num: number): number {
    let ans: number = 0;
    let binary: number[] = toBinary(num);
    let com: number[] = complement(binary);
    for (let i = 0; i < com.length; i++) {
        ans += (Math.pow(2, i) * com[i]);
    }
    return ans;
};