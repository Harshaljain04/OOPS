#include <iostream>
using namespace std;

class displaydata{
    public:
    void show(int v1){
        cout<<"Integer var.value"<<v1<<endl;
    }
    void show(double v2){
        cout<<"Float var.value"<<v2<<endl;
    }
    void show(char* v3){
        cout<<"Character var.value"<<v3<<endl;
    }
};

int main(void)
{
    displaydata obj1;
    obj1.show(100);
    obj1.show(991.75);
    obj1.show("function Overloading");
    return 0;
}