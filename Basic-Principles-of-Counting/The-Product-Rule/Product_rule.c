/* A simple Program to demonstrate the Product Rule */

/*PRODUCT RULE: If T1 and T2 are two tasks such that T1 can be performed in m different
                ways and for each of these ways T2 can be performed in n different ways then,
                both the tasks cam be performed in (mxn) ways.
*/

/* Problem: Suppose Naruto has 8 shirts and 5 ties,then the number of ways
            of chosing a shirt and a tie is?
*/
#include<stdio.h>

int main()
{
    int i,j;
    int totalshirt=8;
    int totaltie=5;
    int totalPossibalities=0;

    /* Let us consider 8 Shirts as Shirt-1, Shirt-2 ......, Shirt-8
        and 5 ties as Tie-1 ..., Tie-5
     */

    /* Generating all possiblities */

    for(i=1;i<=totalshirt;i++)
    {
        for(j=1;j<=totaltie;j++)
        {
            totalPossibalities++;
            printf("Shirt-%d and Tie-%d\n",i,j);
        }
    }

    printf("Therefore thr total number of ways of selecting is: %d\n",totalPossibalities);

    printf("OR by Product rule, the number of ways is = %d\n",(8*5));
}
