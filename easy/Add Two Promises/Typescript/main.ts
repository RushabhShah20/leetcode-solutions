// Problem: Add Two Promises
// Link to the problem: https://leetcode.com/problems/add-two-promises/
type P = Promise<number>

async function addTwoPromises(promise1: P, promise2: P): P {
    const [value1, value2] = await Promise.all([promise1, promise2]);
    return value1 + value2;
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */