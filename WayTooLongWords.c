#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n); //nuumber of lines
    
    
    
    for (int i = 0; i<n; i++)
    {
        char word[10000];
        unsigned long int len;
        
        scanf("%s", word);
        len = strlen(word);
        
        if (len>10)
        {
            printf("%c%lu%c\n", word[0], len-2, word[len-1]);
        }
        else
            printf("%s\n", word);
    }
    return 0;

}
