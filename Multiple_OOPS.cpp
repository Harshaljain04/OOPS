#include <iostream>
using namespace std;

class A{
    public:
    static int v1,v2;
    static float v3,v4;
    public:
    static void read()
    {
        cin>>v1;
        cin>>v2;
        cin>>v3;
        cin>>v4;
    }
    static void display()
    {
        cout<<"V1 "<<v1<<endl;
        cout<<"V2 "<<v2<<endl;
        cout<<"V3 "<<v3<<endl;
        cout<<"V4 "<<v4<<endl;
    }

    static void process(int v1,int v2)
    {
        cout<<"Addition is : "<<v1+v2<<endl;
    }

    static void process(float v3,float v4)
    {
        cout<<"Multiplication is : "<<v3*v4<<endl;
    }
};

class A2:public A{
    public:
    static void process(int v1, float v4){
        cout<<"Multiplication is : "<<v1*v4<<endl;
    }
};

int A::v1;
int A::v2;
float A::v3;
float A::v4;

int main()
{   
    A::read();
    A::display();
    A::process(A::v1,A::v2);
    A::process(A::v3,A::v4);
    A2::process(A2::v1,A2::v4);
    return 0;
}
