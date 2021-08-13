#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //input
    char lyrics[200];
    scanf("%s", lyrics);
    
    int len = strlen(lyrics);
    
    int j=0;
    int wubval[100];
    for (int i = 0; i<len; i++)
    {
        if (lyrics[i] == 'W')
        {
            if (lyrics[i+1] == 'U')
            {
                if (lyrics[i+2] == 'B')
                {
                    wubval[j] = (i);
                    j++;
                    i += 2;
                }
                else
                    ;
            }
            else
                ;
        }
        else
            ;
    }
    
    for (int i = 0, k = 0; i < len; i++)
    {
        if (i == wubval[k] && i == 0)
        {
            i += 2;
            k++;
        }
        else if (i == wubval[k] && i > 0)
        {
            if ((i + 3) == wubval[k+1])
            {
                i += 2;
                k++;
            }
            else
            {
                printf(" ");
                i += 2;
                k++;
            }
        }
        else
        {
            printf("%c", lyrics[i]);
        }
    }
    return 0;
}
