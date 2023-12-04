#include <iostream>
using namespace std;

class Sarea{
    const int s;
    public:
    Sarea(const int &x):s(x){}
    int ar()const
    {
        return s*s;
    }
};

int main()
{
    Sarea obj(9);
    cout<<obj.ar()<<endl;
    return 0;
}
