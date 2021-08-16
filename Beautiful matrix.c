#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int mat[5][5];
    
    for (int i = 0 ; i<5; i++)
    {
        for (int j = 0; j<5; j++)
        {
            scanf("%d", &mat[j][i]);
        }
    }
    
    int k, l;
    for (int i = 0 ; i<5; i++)
    {
        for (int j = 0; j<5; j++)
        {
            if(mat[j][i] == 1)
            {
                k = i;
                l = j;
            }
        }
    }
    
    int row = abs(k - 2);
    int col = abs(l - 2);
    
    printf("%d", row + col);
    return 0;
}


