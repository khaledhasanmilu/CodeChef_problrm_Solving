#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int roll;
    while (num--)
    {
        cin>>roll;
        if(roll==6){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}