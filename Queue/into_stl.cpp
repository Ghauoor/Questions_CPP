#include <bits/stdc++.h>

using namespace std;

int main()
{
    //? create a queue
    queue<int> que;
    que.push(11);
    que.push(12);
    que.push(13);
    que.push(14);
    que.push(15);

    cout << "Front of Queue is " << que.front() << endl;

    cout << "Size of Queue is " << que.size() << endl;
    que.pop();

    cout << "Size of Queue is " << que.size() << endl;

    if (que.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is Not Empty" << endl;
    }
    return 0;
}
