#include <iostream>
using namespace std;

class Sarea{
    int s;
    public:
    void read(const int &x)
    {
        s=x;
    }
    int ar()
    {
        return s*s;
    }
};

int main()
{
    Sarea obj;
    obj.read(5);
    cout<<obj.ar()<<endl;
    return 0;
}
