#include <iostream>
using namespace std;

int Fibonacci(int n){

    if((n==0)|| (n==1)) return 1;
    else return Fibonacci(n-2) + Fibonacci(n-1);
}


int main(){

    int number;
    cout<<"Please give a number to calculate your fibonacci number"<<endl;

    //Here it's on you to give the value that you want to calculate it's fibonacci
    cin>>number;

    //If number=5 for example, your result would be 8
    cout<<endl<<"My fibonacci number is : " <<Fibonacci(number);


return 0;
}
