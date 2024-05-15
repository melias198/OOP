#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A
{
public:
    int value;
    string str;
    void display()
    {
        cout<<"This is from method"<<endl;
        cout<<value<<endl;
        cout<<str<<endl;
    }
};

void solve()
{
    A obj;

    obj.value = 100;
    obj.str = "Object";

    obj.display();
}

int main()
{
    fast;
    solve();
    return 0;
}