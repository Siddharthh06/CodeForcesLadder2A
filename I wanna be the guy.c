//use gnu gcc as compiler
#include <stdio.h>
#include <stdlib.h>

int sort(int a, int arr[a])
{
    int temp;
    
    for(int i = 0; i < a; i++)
          {
              for(int j = i+1; j < a; j++)
              {
                  if(arr[i] > arr[j])
                  {
                      temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                  }
              }
          }
    return &arr;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int x;
    scanf("%d", &x);
    int px[x];
    for (int i = 0; i<x; i++)
    {
        scanf("%d", &px[i]);
    }
    
    int y;
    scanf("%d", &y);
    int py[y];
    for (int i = 0; i<y; i++)
    {
        scanf("%d", &py[i]);
    }
    
    sort(x, px);
    sort(y, py);
    
    //Merging array
    int merge[n];
    int a = 0, b = 0, c = 0;
    for (; a<x && b<y; c++)
    {
        if(px[a] < py[b])
        {
            merge[c] = px[a];
            a++;
        }
        else if (px[a] > py[b])
        {
            merge[c] = py[b];
            b++;
        }
        else if(px[a] == py[b])
        {
            merge[c] = py[b];
            a++;
            b++;
        }
    }
    //to add remainging values from both the arrays to merge array
    while (a<x)
    {
        merge[c] = px[a];
        a++; c++;
    }
    
    while (b<y)
    {
        merge[c] = py[b];
        b++; c++;
    }

    int k = 1;
    for (int i = 0; i<n; i++)
    {
        if (i+1 != merge[i])
        {
            k=0;
        }
    }
    
    if (k == 1)
    {
        printf("I become the guy.");
    }
    else
        printf("Oh, my keyboard!");
    
    return 0;
}
