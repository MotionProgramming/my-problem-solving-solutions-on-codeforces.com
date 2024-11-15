//============================================================================
// problem link:https://codeforces.com/problemset/problem/381/A
// Name        : .cpp
// Author      : MotionProgramming(Md. Abdullah Rajeb)
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
// status:accepted
//============================================================================

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, d = 0, f1 = 1;

    while (!v.empty())
    {
        if (f1 == 1)
        {
            if (v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }
            f1 = 2;
        }
        else
        {
            if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            f1 = 1;
        }
    }
    cout << s << " " << d << endl;

    return 0;
}
