#include <iostream>
using namespace std;

int Factorial(int n){

    if((n==0)|| (n==1)) return 1;
    else return n*Factorial(n-1);
}


int main(){

    int number;
    cout<<"Please give a number to calculate your factorial"<<endl;

    //Here it's on you to give the value that you want to calculate it's factorial
    cin>>number;

    //If number=3 for example, your result would be 6
    cout<<endl<<"My factorial number is : " <<Factorial(number);


return 0;
}
