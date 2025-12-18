// Problem: Longest Uploaded Prefix
// Link to the problem: https://leetcode.com/problems/longest-uploaded-prefix/
class LUPrefix
{
public:
    vector<bool> s;
    int ans = 0;
    LUPrefix(int n)
    {
        s.assign(n + 1, false);
    }

    void upload(int video)
    {
        s[video - 1] = true;
    }

    int longest()
    {
        while (s[ans])
        {
            ++ans;
        }
        return ans;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */