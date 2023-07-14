#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "Inside class A" << endl;
    }
};
class B
{
public:
    void fun()
    {
        cout << "Inside class B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C object;
    // object.fun();
    object.A::fun();
    object.B::fun();
}
