#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A{
private:
    int value;
public:
    string name;

    void set_value(int val)
    {
        value = val;
    }

    int get_value()
    {
        return value;
    }
protected:
    int age;

};



void solve()
{
    A obj;

    obj.name = "Elias";
    // obj.age = 19;
    // obj.value = 60;
    obj.set_value(60);

    cout<<obj.name<<endl;
    // cout<<obj.age<<endl;
    cout<<obj.get_value()<<endl;
}

int main()
{
    fast;
    solve();
    return 0;
}