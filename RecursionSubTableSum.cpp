/******************************************************************************
Written by GT17
Algorithme which counts sub-array sum by enterring a table and the two clues
from where to do the sub-table-sum
*******************************************************************************/

#include <iostream>

int sum(int* table, int i,  int j)
{
	if(table == NULL) return 0;
    if(i>j) return 0;
    if(i==j)return table[i];
    if(i<j)return table[i]+table[j]+somme(table,i+1,j-1);
}

int main()
{
     
    int table[]={2,3,2,8,9,4};
    int s=somme(table,2,5);//gives back 23
    std::cout<<s;    
    return 0;
}
