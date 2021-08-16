#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int coin;
    scanf("%d", &coin);
    
    int coinval[coin];
    int sum=0;
    for(int i = 0; i<coin; i++)
    {
        scanf("%d", &coinval[i]);
        sum += coinval[i];
        
    }
    
    //to find the minimum sum
    int midval = sum/2;
    
    //to find maximum number of coins
    int halfcoin;
    if (coin%2 == 0)
    {
        halfcoin = coin/2;
    }
    else if(coin%2 != 0)
    {
        halfcoin = (coin/2 + 1);
    }
    else
        halfcoin = 0;

    //sorting is decsending order
    int temp;
    for (int i = 0; i<coin; i++)
    {
        for (int j = 0; j<coin; j++)
        {
            if (coinval[j] >= coinval[i])
            {
                temp = coinval[i];
                coinval[i] = coinval[j];
                coinval[j] = temp;
            }
            else
                ;
        }
    }
    
    int sumcoin = 0;
    int numcoin = 0;
    for (int i = coin; i >= halfcoin; i--)
    {
        if (sumcoin <= midval)
        {
            sumcoin += coinval[i-1];
            numcoin++;
        }
        else
        {
            break;
        }
    }
    printf("%d", numcoin);
    return 0;
}
