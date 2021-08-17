## Solutions of CodeForces

### Problem 4A: Watermelon
---
```c
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
```
### Problem 71A: Way Too Long Words

#### Using C
```c
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
```
### Using Python3
```python
num = int(input())
for i in range(0,num):
    word = input()
    length = len(word)
    if length>10:
        print(word[0] + str(length-2) + word[length-1])
    else:
        print(word)
```

### CodeForces ladder
* [CodeForcesLadder](https://a2oj.herokuapp.com/)
