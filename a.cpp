#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--) {
        vector < int > v;
        int b;
        cin >> b;
        for (int i = 1; i <= b; i++) {
            int c;
            cin >> c;
            v.push_back(i);
        }

        if (v.size() % 2 != 0 && v.size() % 3 == 0) {
            cout << v[b / 2 + 1] << endl;


        }
        else if (v.size() % 2 == 0 && v.size() % 3 == 0)
        {
            int f = v.size();
            cout << v[0] << " " << v[f - 1] << endl;
        }
        else
        {
            int f = v.size();

            cout << v[0] + v[f - 1] << endl;
        }

    }

}