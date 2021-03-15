#include <iostream>
using namespace std;

int Power(int x,int n)
{
    if(n==0) return 1;
    if(n==1) return x;
    else
        return x*Power(x,n-1);
}


int main()
{

    int number,power;
    cout<<"Please give a number to calculate your power number"<<endl;
    //Here it's on you to give the value that you want to calculate it's power
    cin>>number;

    cout<<"Please give the power of you number"<<endl;
    //Here it's on you to give the value of the power
    cin>>power;


    //If number=5, power=2 for example, your result would be 25
    cout<<endl<<"The Power Value of your number is: " <<Power(number,power);


    return 0;
}
