#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class Display {
public:
    void display(int val) 
    {
        cout<<"Integer: "<<val<<endl;
    }

    void display(double value) 
    {
        cout<<"Float: "<<value<<endl;
    }

    void display(string s)
    {
        cout<<"String: "<<s<< endl;
    }
};

void solve()
{
    Display d;
    
    d.display(7.9);
    d.display("Elias");
    d.display(89);
}

int main()
{
    fast;
    solve();
    return 0;
}