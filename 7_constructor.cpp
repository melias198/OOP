#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A
{
    int value;
public:
    A(int val)
    {
        value = val;
    }

    void display()
    {
        cout<<"The number is - "<<value<<endl;
    }
};

void solve()
{
    A obj(7);
    obj.display();
}

int main()
{
    fast;
    solve();
    return 0;
}