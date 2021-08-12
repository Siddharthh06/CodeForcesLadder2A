#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //input
    char sum[1000];
    scanf("%s", sum);
    int len = strlen(sum);
    
    int temp=0;
    //arranging in increasing order
    for (int i = 0; i<len; i+=2)
    {
        for (int j = 0; j<len; j+=2)
        {
            if (sum[j]>sum[i])
            {
                temp = sum[j];
                sum[j] = sum[i];
                sum[i] = temp;
            }
        }
    }
    //printing
    printf("%s", sum);
    return 0;
}
