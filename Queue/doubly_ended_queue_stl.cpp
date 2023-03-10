#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> de;
    de.push_front(12);
    de.push_back(11);
    cout << de.front() << endl;
    cout << de.back() << endl;

    de.pop_back();

    if (de.empty())
    {
        cout << "Deque is Empty";
    }
    else
    {
        cout << "Deque is Not Empty";
    }
    return 0;
}
