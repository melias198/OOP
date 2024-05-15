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
        cout<<"This is class"<<endl;
    }
};

void solve()
{
    A obj;

    obj.value = 100;
    obj.str = "Object";

    obj.display();

    cout<<obj.value<<endl;
    cout<<obj.str<<endl;
}

int main()
{
    fast;
    solve();
    return 0;
}