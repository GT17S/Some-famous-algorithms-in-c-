#include <iostream>
#include <math.h>

using namespace std;

//second degre equation a*x^2 +  b*x + c = 0
void SecondDegreSolver(int a,int b, int c)
{

    if((a>0) && (b>0) && (c>0)){
        cout<<"Your equation doesn't accept any solutions on 'R'"<<endl;
        return;
    }
    if(a==0)
    {
        if(b!=0)
        {
            if(c!=0)
                cout<<"The solution for your equation is: x= "<<-c/b<<endl;
            else if(c==0)
                cout<<"There is one only solution which is: "<<0<<endl;
        }
        else if(b==0)
        {
            if(c!=0)
                cout<<"There are not any solutions for your equation, it's impossible"<<endl;
            else if(c==0)
                cout<<"There are infinity of solutions"<<endl;
        }
    }
    else if(a!=0)
    {
        if(b!=0)
        {
            if(c!=0)
            {
                int delta = pow(b,2) - 4*a*c;

                if(delta<0)
                    cout<<"There are not any solutions on 'R'"<<endl;
                if(delta==0)
                    cout<<"There is one solution and it is: x= "<<-b/2*a<<endl;
                if(delta>0)
                {
                    int x1= -b - sqrt(delta)/ 2*a;
                    int x2= -b + sqrt(delta)/ 2*a;
                    cout<<"There are two solutions on 'R' which are :";
                    cout<<endl<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
                }
            }
            else if(c==0)
            {
                cout<<"There are two solutions on 'R' which are :";
                cout<<endl<<"x1 = "<<0<<endl<<"x2 = "<<-b/a<<endl;
            }
        }
        else if(b==0)
        {
            if(c!=0)
            {
                int res=-c/a;
                if(res>0)
                {
                    cout<<"There are two solutions on 'R' which are :";
                    cout<<endl<<"x1 = "<<-sqrt(res)<<endl<<"x2 = "<<sqrt(res)<<endl;
                }
                else if(res<0)
                    cout<<"There is no solution for this equation"<<endl;
                }
            else if(c==0)
                cout<<"There is only one solution x = "<<0<<endl;
        }
    }
}


int main()
{
    SecondDegreSolver(1,2,3);
    SecondDegreSolver(-2,3,1);
    SecondDegreSolver(0,0,2);

    return 0;
}
