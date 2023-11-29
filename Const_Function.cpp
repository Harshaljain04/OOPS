#include<iostream>
using namespace std;
const class DemoCM{
    int v1,v2;
    public:
    DemoCM(){
        v1=0,v2=0;
    }
    void read(int a,int b){
        v1=a,v2=b;
    }
    int showv1(){
        v1++;
        return v1;
    }
    int showv2()const{
        // v2++;
        return v2;
    }
    void showbothvalue(){
        cout<<"Value of V1 is : "<<v1<<endl;
        cout<<"Value of V2 is : "<<v2<<endl;
    }
};

int main()
{
    DemoCM obj;
    obj.read(10,20);
    cout<<obj.showv1()<<endl;
    cout<<obj.showv2();
    return 0;
}