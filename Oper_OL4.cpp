#include <iostream>
using namespace std;

class Demooverload{
    public:
    int count;
    public:
    Demooverload():count(50){}

    void operator++(int){
        count++;
    }
    void show()
    {
        cout<<"Value of Count is: "<<count<<endl;
    }
};

int main()
{
    Demooverload obj;
    obj++;
    obj.show();
    return 0;
}