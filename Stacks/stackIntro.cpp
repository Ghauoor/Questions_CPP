#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creation
    stack<int> a;

    // push op
    a.push(2);
    a.push(3);

    // pop
    a.pop();

    cout << "Parinting the Top Element " << a.top() << endl;

    // Check Empty

    if (a.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty";
    }



    return 0;
}
