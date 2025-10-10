// Problem: Design a Stack With Increment Operation
// Link to the problem: https://leetcode.com/problems/design-a-stack-with-increment-operation/
class CustomStack {
    List<Integer> ans = new ArrayList<>();
    int n = 0;

    public CustomStack(int maxSize) {
        n = maxSize;
    }

    public void push(int x) {
        if (ans.size() < n) {
            ans.add(x);
        }
    }

    public int pop() {
        if (ans.isEmpty()) {
            return -1;
        } else {
            int x = ans.get(ans.size() - 1);
            ans.remove(ans.size() - 1);
            return x;
        }
    }

    public void increment(int k, int val) {
        for (int i = 0; i < Math.min(k, ans.size()); i++) {
            ans.set(i, ans.get(i) + val);
        }
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */