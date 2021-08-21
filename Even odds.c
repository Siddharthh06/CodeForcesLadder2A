#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n, k, r, z;
    scanf("%lld", &n);
    scanf("%lld", &k);
    
    if (n%2 == 1)
    {
        r = n/2 + 1;
    }
    else
    {
        r = n/2;
    }

    if (k<=r)
    {
        z = 1 + (k-1)*2;
        printf("%lld", z);
    }
    else if (k>r)
    {
        z = 2 + (k-r-1)*2;
        printf("%lld", z);
    }
    /*else if (k==r)
    {
        printf("%lld", k);
    }*/
    
    return 0;
}
