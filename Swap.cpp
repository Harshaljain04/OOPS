#include <iostream>
using namespace std;

class Swap{
    // public:
    // static int x;
    // // x=10+10;
    public:
    mutable int a,b;
    void display(int a, int b)
    {
        int temp=a;
        a=b;
        b=temp;
        cout<<a<<endl;
        cout<<b<<endl;
        // cout<<Swap::x<<endl;
    }
};
// int Swap::x=100;
int main()
{
    Swap A;
    A.display(100,200);
    return 0;
}
