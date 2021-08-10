//  main.c
//  YoungPhysicist

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n>100 || n<1)
    {
        printf("Enter number of forces in range \n");
        exit(0);
    }
    
    //taking input of n number of forces
    int array[n][3];

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    
    //summing the forces on different axes
    int sum[3];
    
    for (int q=0; q<3; q++)
    {
        sum[q] = 0;
    }
    for (int a = 0; a<3; a++)
    {
        for (int b=0; b<n; b++)
        {
            sum[a] = sum[a] + array[b][a];
        }
    }
    
    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    
    return(0);
}
