// Problem: Design Circular Deque
// Link to the problem: https://leetcode.com/problems/design-circular-deque/
class MyCircularDeque
{
public:
    deque<int> q;
    int n;
    MyCircularDeque(int k)
    {
        n = k;
    }

    bool insertFront(int value)
    {
        if (q.size() < n)
        {
            q.push_front(value);
            return true;
        }
        else
        {
            return false;
        }
    }

    bool insertLast(int value)
    {
        if (q.size() < n)
        {
            q.push_back(value);
            return true;
        }
        else
        {
            return false;
        }
    }

    bool deleteFront()
    {
        if (q.empty())
        {
            return false;
        }
        else
        {
            q.pop_front();
            return true;
        }
    }

    bool deleteLast()
    {
        if (q.empty())
        {
            return false;
        }
        else
        {
            q.pop_back();
            return true;
        }
    }

    int getFront()
    {
        if (q.empty())
        {
            return -1;
        }
        else
        {
            int x = q.front();
            return x;
        }
    }

    int getRear()
    {
        if (q.empty())
        {
            return -1;
        }
        else
        {
            int x = q.back();
            return x;
        }
    }

    bool isEmpty()
    {
        if (q.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (q.size() == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */