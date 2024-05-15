#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A{
public:
    A()
    {
        cout<<"This is A class"<<endl;
    }
};

class B{
public:
    B()
    {
        cout<<"This is B class"<<endl;
    }
};

class C:public A,public B{
public:
    C()
    {
        cout<<"This is C class"<<endl;
    }
};

void solve()
{
    C obj;
}

int main()
{
    fast;
    solve();
    return 0;
}