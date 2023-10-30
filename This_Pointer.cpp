#include<iostream>
using namespace std;
class TPdemo{
    int v1;
    public: TPdemo(){
        v1 = 10000;
    }
    void disp(int v1){
        cout<<"The value of argument variable 1="<<v1;
        cout<<"The value of data member v1="<<this->v1;
    }
};
int main(){
    TPdemo tp;
    tp.disp(200);
    return 0;
}