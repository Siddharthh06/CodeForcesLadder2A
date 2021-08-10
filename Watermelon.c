#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    scanf("%d", &w);
    int i;
    i = w%2;
    if(w == 2)
    {
        printf("NO");
    }
    else if (i == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    
    return 0;
}
