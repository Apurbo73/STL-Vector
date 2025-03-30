#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        vector<int> v;
        int b;
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }

        if (v.size() % 2 != 0 && v.size() % 3 == 0)
        {
            cout << v[b / 2] << endl;
        }
        else if (v.size() % 2 == 0 && v.size() % 3 == 0)
        {
            cout << v.front() << " " << v.back() << endl;
        }
        else
        {

            cout << v.front() + v.back() << endl;
        }
    }
}