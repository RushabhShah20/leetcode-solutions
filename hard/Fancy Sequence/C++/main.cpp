// Problem: Fancy Sequence
// Link to the problem: https://leetcode.com/problems/fancy-sequence/
class Fancy
{
public:
    const long long mod = 1000000007;
    long long a = 1, b = 0;
    vector<long long> v;
    Fancy()
    {
    }

    long long power(long long x, long long y)
    {
        long long ans = 1;
        x %= mod;
        while (y > 0)
        {
            if (y & 1)
            {
                ans = ans * x % mod;
            }
            x = x * x % mod;
            y >>= 1;
        }
        return ans;
    }

    long long inv(const long long x)
    {
        return power(x, mod - 2);
    }

    void append(int val)
    {
        long long x = val - b % mod;
        if (x < 0)
        {
            x += mod;
        }
        v.push_back((x * inv(a)) % mod);
    }

    void addAll(int inc)
    {
        b = (b + inc) % mod;
    }

    void multAll(int m)
    {
        a = (a * m) % mod;
        b = (b * m) % mod;
    }

    int getIndex(int idx)
    {
        if (idx >= v.size())
        {
            return -1;
        }
        return (a * v[idx] + b) % mod;
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */