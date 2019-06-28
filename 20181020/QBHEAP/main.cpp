#include <bits/stdc++.h>
#include <queue>
using namespace std;

priority_queue <long, vector<long>, less_equal<long> > heap;
long tmp;
vector <long> res;

string c;

int main()
{
    while (cin >> c)
    {
        if (c[0]=='+')
        {
            c.erase(0,1);
            tmp = atoi(c.c_str());
            if (heap.size()<15000)
                heap.push(tmp);
        }
        else
            if (c[0]=='-')
            {
                if (!heap.empty())
                {
                    tmp = heap.top();
                    while (!heap.empty() && heap.top()==tmp)
                        heap.pop();
                }
            }
            else break;
    }

    while (!heap.empty())
    {
        tmp = heap.top();
        while (!heap.empty() && heap.top()==tmp)
            heap.pop();
        res.push_back(tmp);
    }

    cout << res.size()<<endl;
    for (unsigned i=0; i<res.size(); i++)
        cout << res[i] << endl;

    return 0;
}
