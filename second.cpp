#include<iostream>
using namespace std;
int globalVariable=100;


int main()
{   
    cout << "Hello World" << endl;
    return 0;     
    
    
    int userInput;
    float result;

    cin >> userInput;
 result = (double) globalVariable  /userInput;
cout<<result<<endl;
return 0;

}   