// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pass By Value
void doSomeThing(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// Pass by Ref
void doSomeThingAgain(string &str)
{
    str[0] = 'H';
    cout << str << endl;
}

// Pass by Ref
void doSomeThingAgain2(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside the Function: " << arr[0] << endl;
}

int main()
{
    // std::cout << "Hey Ghayoor";
    // int x;
    // cin >> x;
    // cout << "The Value of X: " << x;
    // int string long double float

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // cout << arr[3];
    // int arr[4][3];

    // string str = "Ghayoor";
    // cout << str[2];
    int num = 10;
    // doSomeThing(num); // Pass by value --> passing the copy not the actuall value
    // cout << "I'm Pass By Value Variable: " << num << endl;
    string str = "Ghauoor";
    // doSomeThingAgain(str);
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    doSomeThingAgain2(arr, n); // Arrays always pass by ref in C++
    cout << "Value outside of the Function: " << arr[0] << endl;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     cout << arr[i];
    // }

    return 0;
}
