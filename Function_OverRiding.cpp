#include <iostream>
using namespace std;
 class Base{
    public:
    virtual void display(){
        cout<<"here display function of base class";
    }
 };

class derived:public Base{
    public:
    void display()
    {
        cout<<"Display of derived class";
    }
};
int main()
{
    Base A;
    A.display();  
    return 0;
}