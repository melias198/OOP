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

class B:public A{
public:
    B(int val,string name,int age)
    {
        // value = val;
        set_value(val);
        this->name = name;
        this->age = age;
    }


    void display()
    {
        cout<<"Name -> "<<name<<endl;
        cout<<"Age -> "<<age<<endl;
        cout<<"Value -> "<<get_value()<<endl;
    }

};

void solve()
{
    A obj;

    obj.name = "Elias";
    // obj.age = 19;

    cout<<obj.name<<endl;
    // cout<<obj.age<<endl;

    B newObj(10,"She",90);
    // newObj.name = "Karim";
    
    cout<<newObj.name<<endl;
    newObj.display();
}

int main()
{
    fast;
    solve();
    return 0;
}