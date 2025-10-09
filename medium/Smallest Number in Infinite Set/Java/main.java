// Problem: First Bad Version
// Link to the problem: https://leetcode.com/problems/first-bad-version/
class SmallestInfiniteSet {
    TreeSet<Integer> s = new TreeSet<>();

    public SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++) {
            s.add(i);
        }
    }

    public int popSmallest() {
        int x = s.first();
        s.remove(s.first());
        return x;
    }

    public void addBack(int num) {
        s.add(num);
    }
}

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet obj = new SmallestInfiniteSet();
 * int param_1 = obj.popSmallest();
 * obj.addBack(num);
 */