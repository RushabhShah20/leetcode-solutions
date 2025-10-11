// Problem: Design Exam Scores Tracker
// Link to the problem: https://leetcode.com/problems/design-exam-scores-tracker/
class ExamTracker
{
public:
    map<int, long long> m;
    long long prefixSum;
    ExamTracker()
    {
        prefixSum = 0;
    }

    void record(int time, int score)
    {
        prefixSum += score;
        m[time] = prefixSum;
    }

    long long totalScore(int startTime, int endTime)
    {
        map<int, long long>::iterator y = m.upper_bound(endTime);
        long long a = 0;
        if (y != m.begin())
        {
            --y;
            a = y->second;
        }
        map<int, long long>::iterator x = m.lower_bound(startTime);
        long long b = 0;
        if (x != m.begin())
        {
            --x;
            b = x->second;
        }
        return a - b;
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */