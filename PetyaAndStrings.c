#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word1[100];
    scanf("%s", word1);
    int len1 = strlen(word1);
    
    char word2[100];
    scanf("%s", word2);
    int len2 = strlen(word2);
    
    for (int i = 0; i<len1; i++)
    {
        if ( word1[i] <= 90 && word1[i] >= 65)
        {
            word1[i] = word1[i]+32;
        }
    }
    for (int i = 0; i<len2; i++)
    {
        if ( word2[i] <= 90 && word2[i] >= 65)
        {
            word2[i] = word2[i]+32;
        }
    }
    
    /*for (int i = 0; i<len1; i++)
    {
        printf("%c", word1[i]);
    }
    printf("\n");
    for (int i = 0; i<len2; i++)
    {
        printf("%c", word2[i]);
    }
    printf("\n");*/
    
   /* int k=0, l=0;
    
    for (int i = 0; i<len1; i++)
    {
        k += word1[i];
    }
    for (int i = 0; i<len2; i++)
    {
        l +=word2[i];
    }
    
    if (k == l)
    {
        printf("0");
    }
    else if (k > l || len1 > len2)
    {
        printf("1");
    }
    else if (k < l || len1 < len2)
    {
        printf("-1");
    }*/
    
    for (int i = 0; i <len1; i++)
    {
        if (word1[i] == word2[i])
        {
            continue;
        }
        else if (word1[i]>word2[i])
        {
            printf("1");
            exit(0);
        }
        else if(word1[i]<word2[i])
        {
            printf("-1");
            exit(0);
        }
    }
    printf("0");
    return 0;
}
