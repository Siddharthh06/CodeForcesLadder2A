#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    return *arr;
}

int main()
{
    int arr[3];
    
    for (int i = 0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int final[6];
    
    final[0]= (arr[0]+arr[1]) * arr[2];
    final[1]= arr[0] + arr[1] * arr[2];
    final[3]= arr[0] * (arr[1] + arr[2]);
    final[2]= arr[0] * arr[1] * arr[2];
    final[4]= arr[0] + arr[1] + arr[2];
    final[5]= arr[0] * arr[1] + arr[2];
    sort(6, final);
    printf("%d", final[5]);
    
    return 0;
}
