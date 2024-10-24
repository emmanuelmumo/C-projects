#include <stdio.h>

/*Recursive function*/
int SumSquares(int n)
{/*Base case for termination*/
    /*Square of 0 is 0*/
    if (n == 0)
        return 0;
    /*Square of 1 is 1*/
    if (n==1)
        return 1;
    return (n*n)+SumSquares(n-1);
}
/*Calling your function*/
int main(){
int n;
/*Ask user to enter thier positive integer*/
    printf("Enter a positive integer:\n ");
    scanf("%d", &n);
    /*Give the results*/
printf("The sum of all squares from 0 to %d is: %d\n", n, SumSquares(n));
return 0;
}
