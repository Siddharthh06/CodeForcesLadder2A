#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char num[1000];
    scanf("%s", num);
    int len;
    len = strlen(num);
    int numint =  atoi(num);
    
    for (int i = 0; i<len; i++)
    {
        if (num[i] == '4' && num[i+1] == '7')
        {
            printf("YES");
            break;
        }
        else
        {
            if(numint%47 == 0)
            {
                printf("YES");
                break;
            }
            else if(numint%7 == 0)
            {
                printf("YES");
                break;
            }
            else if (numint%4 == 0)
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }
        }
    }
    
    
    return 0;
}


