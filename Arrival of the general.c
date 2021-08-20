#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    int arr[num];
    for (int i = 0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int small = arr[0];
    int large = arr[0];
    int j = 0, k = 0;
    for (int i = 0; i<num; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            j = i; //index holding the largest value
            
        }
        if (arr[i] <= small)
        {
            small = arr[i];
            k = i; //index holding the smallest value
        }
    }
    
    if (k < j)
    {
        printf("%d", (j-1)+(num-k)-1); // "-1" as one move will be common for both and so will be counted twice
    }
    else
    {
        printf("%d", (j-1)+(num-k));
    }
    return 0;
}
