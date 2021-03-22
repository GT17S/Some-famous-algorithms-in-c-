#include <iostream>
using namespace std;

int main()
{
    //matrix to transpose with it values
    int  mat[3][2]={{1,2},{3,4},{5,6}};
    //matrix transposal with all it's values to 0
    int  t_mat[2][3]={0};

    //let's display the initial state of the matrix
    cout<<"Initial matrix display:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(j!=1)
            cout<<mat[i][j]<<"|";
            else
                cout<<
                mat[i][j];
        }
        cout<<endl;
    }

    //to separate the two matrix
    cout<<endl<<"Transposed matrix display: "<<endl;
    //Transposition process
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<3;i++)
        {
            t_mat[j][i]=mat[i][j];
        }
    }

    //displaying the transposed matrix
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j!=2)
            cout<<t_mat[i][j]<<"|";
            else
                cout<<t_mat[i][j];
        }
        cout<<endl;
    }

    return 0;
}
