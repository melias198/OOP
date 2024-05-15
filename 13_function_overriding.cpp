#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

class Shape{
public:
    void area(){}
};

class Square:public Shape{
    int side;
public:
    Square(int side)
    {
        this->side = side;
    }

    void area()
    {
        cout<<side*side<<endl;
    }
};

class Circle:public Shape{
    int radius;
public:
    Circle(int radius)
    {
        this->radius = radius;
    }

    void area()
    {
        cout<<3.1416*radius*radius<<endl;
    }
};

void solve()
{
    Square square(3);
    Circle circle(3);

    square.area();
    circle.area();
}

int main()
{
    fast;
    solve();
    return 0;
}