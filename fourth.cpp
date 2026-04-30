#include<iostream>
using namespace std;
int main()
{
    int choice;
    cin>>choice;
    if(choice==1)
    {
        double length,breadth;

        cin>>length>>breadth;
        double area=length*breadth;
        cout<<area<<endl;
    }
    return 0;
}