#include "iostream"
#include <math.h>

using namespace std;

void ArmstrongNumber(int number)
{
    double local_num=number;
    int power=0,f,i=0;
    int *tab= new int[number/5];
    double res=0;

    while(local_num!=0)
    {
        if(((double)(local_num/10)!=0) && local_num>=1)
        {
            power++;
            f=(int)local_num%10;
            local_num/=10;
            tab[i]=f;
            i++;
        }
        else
            local_num=0;
    }

    i=0;
    while(i<power)
    {
        res = res + pow(tab[i],power);
        i++;
    }

    if((res==number)==true)
        cout<<"yes!!!, you're number "<<number<<" is an Armstrong number"<<endl;
    else
        cout<<"No!!!, you're number "<<number<<" is not an Armstrong number"<<endl;

}


int main()
{
    ArmstrongNumber(105);
    ArmstrongNumber(153);
    return 0;
}




