#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int walk;
    while (num--)
    {
        cin >> walk;
        int result = ((walk + walk) * 5);
        cout << result << endl;
    }
    return 0;
}