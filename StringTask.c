#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    
    for (int i = 0; i<len; i++)
    {
        if (word[i] == 65 || word[i] == 69 || word[i] == 73 || word[i] == 79|| word[i] == 85 || word[i] == 97 || word[i] == 101 || word[i] == 117 || word[i] == 105 || word[i] == 111 || word[i] == 89 || word[i] == 121)
        {
            ;
        }
        else if ( word[i] <= 90 && word[i] >= 65)
        {
            char k;
            k = word[i]+32;
            printf(".%c", k);
        }
        else if (word[i] <= 122 && word[i] >= 97)
        {
            printf(".%c", word[i]);
        }
    }
    
    return 0;
}
