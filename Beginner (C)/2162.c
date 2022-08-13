// Peaks and Valleys

#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];

    //taking the inputs
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //if the first index contains a valley, x = 0
    if (arr[0] < arr[1])
        x = 0;
    //else if the first index contains a peak, x = 1
    else if (arr[0] > arr[1])
        x = 1;
    //if both indexes contain the same value, there is not pattern
    //hence goto end
    else 
        goto end;
    
    //checking will be done from index 0 to index n - 2
    for (int i = 0; i < n - 1; i++)
    {
        //check whether the even indexes are valley or not
        if ((i + x) % 2 == 0)
        {
            //if they are not valley arr[i] is not less than arr[i + 1], then goto end
            if (arr[i] >= arr[i + 1])
                goto end;
        }
        else
        {
            //if odd indexes are not peak, i.e. arr[i] is not greater than arr[i + 1], then goto end
            if (arr[i] <= arr[i + 1])
                goto end;
        }
    }

    //if the program reaches here, that means there is a pattern
    printf("1\n");
    return 0;

    end:
        printf("0\n");
    
    return 0;
}

/*
Description:
The inputs can be of two combinations. Valley -> Peak -> Valley ->... or Peak -> Valley -> Peak -> ...
Any else combinations represent that there is no pattern.
Valley is of less value than Peak.

The first combination is taken as the standard. 
In the first combination, the even indexes -> valley and odd indexes -> Peak

But in the second combinations the odd indexes -> valley and even indexes -> peak
So, in order to treat the second combinations as first combination
we have to make the odd indexes behave like even indexes.
Thats why we have added 1, if the 2nd combination (where 1st value > 2nd value) is found.
In the next paragraph, 
even index means even indexes (for the first combination) and odd indexes (for the second combination)

Now, the value of even indexes should be less than the value of  even index + 1. (represents the valley)
and the value of odd indexes should be greater than the value of odd index + 1. (represents the peak)
if this condition is not followed at any index, goto end and print 0.
if this condition is followed by all the indexes, then print 1. 

the checking will be done from index 0 to less than n - 1 i.e. (< n- 1).
if the n is 5, the last index is 5 - 1 = 4
the last index is being checked, when checking the n - 2 index.
that's why the loop runs till n - 2 index or < n - 1 index.
*/