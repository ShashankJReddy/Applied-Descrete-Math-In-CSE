/* A program to illustrate the Sum rule in counting principle */

/* 
    SUM RULE : If T1 and T2 are two tasks such that T1 can be performed in
    m different ways and T2 can be performed in n different ways given that
    two tasks cannot be performed simultaneously then one of the tasks can be 
    performed in (m+n) ways.
*/

/*  Consider let T1=to read 10 numbers from 1 to 10 ,
    [and]        T2=to read 8 numbers from 1 to 8
    Since we now consider only one control flow/signal in the
    program both the tasks cannot be done simultaniously.
    So a program to calculate the number of ways to do any one of these
    tasks is given below.
*/

#include<stdio.h>

int main()
{
    int a[10];          //a[10] to store 10 elemets according to T1
    int b[8];           //b[8] to store 8 elemets according to T2

    int i,j,count;      //i for T1 and j for T2
    
    printf("Enter the elements [T1]\n");
    for(i=0;i<10;i++)       //i keeps incrementing which does only one job at a time
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements [T2]\n");
    for(j=0;j<8;j++)        //j keeps incrementing which does only one job at a time
    {
        scanf("%d",&b[j]);
    }

    count=i+j;

    printf("Thenumber of ways to do any one of these tasks is = %d \n",count);

    return 0;
}
