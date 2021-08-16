#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    
    int i;
    for (i = 0; i<len; i++)
    {
        if (word[i] == 'h')
        {
            i++;
            for (; i<len; i++)
            {
                if (word[i] == 'e')
                {
                    i++;
                    for (; i<len; i++)
                    {
                        if (word[i] == 'l')
                        {
                            i++;
                            for (; i<len; i++)
                            {
                                if (word[i] == 'l')
                                {
                                    i++;
                                    for (; i<len; i++)
                                    {
                                        if (word[i] == 'o')
                                        {
                                            printf("YES");
                                            exit(0);
                                        }
                                        else
                                            ;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("NO");
    return 0;
}
