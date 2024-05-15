#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A
{
    int value; //Private Attribute

public:
    string str; //Public Attribute
    void display()
    {
        cout<<"This is class"<<endl;
    }

    void setter(int v)
    {
        value = v;
    }

    void getter()
    {
        cout<<value<<endl;
    }
};

void solve()
{
    A obj;

    obj.setter(100);
    obj.str = "Object";

    obj.display();

    obj.getter();
    cout<<obj.str<<endl;
}

int main()
{
    fast;
    solve();
    return 0;
}