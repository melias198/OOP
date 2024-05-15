#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A
{
public:
    void display()
    {
        cout<<"This is class"<<endl;
    }
};

void solve()
{
    A obj;
    obj.display();
}

int main()
{
    fast;
    solve();
    return 0;
}