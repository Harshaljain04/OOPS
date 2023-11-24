#include <iostream>
using namespace std;

class DSM{
    private: int a,b;
    public: static int v1;
    void read(int x,int y)
    {
        a=x;
        b=y;
        v1=v1+1;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int DSM::v1=0;
int main()
{
    DSM ob1,ob2;
    ob1.read(10,20);
    ob2.read(100,200);
    ob1.show();
    cout<<endl;
    ob2.show();
    cout<<endl;
    cout<<ob1.v1<<endl;
    cout<<ob2.v1<<endl;
    cout<<DSM::v1<<endl;
    return 0;
}