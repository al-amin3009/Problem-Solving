///  How do you find the missing number in a given integer array of 1 to 100?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,9,10,11};

    int n= sizeof(arr)/ sizeof(arr[0]);

    printf("%d\n",n);

    int total = (n+1)*(n+2) / 2;

    for(int i=0;i<n;i++)
    {
        total-= arr[i];
    }

    printf("%d\n",total);
}
