#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class A{

protected:
    int age;

};

class B:public A{
public:
    B(int age)
    {
        this->age = age;
    }


    void display()
    {
        cout<<"Age -> "<<age<<endl;
    }

};

void solve()
{
    // A obj;

    // obj.age = 19;
    // cout<<obj.age<<endl;

    B newObj(30);
    newObj.display();


}

int main()
{
    fast;
    solve();
    return 0;
}