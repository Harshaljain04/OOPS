#include<iostream>
#include<string>
using namespace std;
class 
{
    private:
    int n1, n2, n3;
    public:
    int i;
    DemoConst(void);

    void display()
    {
        cout<<"Number 1 is = "<<n1<<"Number 2 is = "<<n2<<"Number 3 is = "<<n3;
    }
};
DemoConst::DemoConst(void)
{
    cout<<"Here calling to constructor";
    i=4, n1=10, n2=20, n3=30;
}

int main()
{
    DemoConst i;
    i.display();
    return 0;
}