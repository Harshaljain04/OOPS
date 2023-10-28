#include<iostream>
using namespace std;
class userinfo
{
    char name[20];
    int userID;
    float salary;
    public : void read()
    {
        cout<<"Enter Name:";cin>>name;
        cout<<"Enter User ID:";cin>>userID;
        cout<<"Enter Salary:";cin>>salary;
    }
    friend void display(userinfo);
    //friend Fun-decl
};
void display(userinfo ui) //friend fun - access to private data
{
    cout<<"Details of user & salary"<<ui.userID<<endl<<ui.salary;
}
int main()
{
    userinfo obj;
    obj.read();
    display(obj);
    return 0; //Calling of FriendFun + obj-argument
}