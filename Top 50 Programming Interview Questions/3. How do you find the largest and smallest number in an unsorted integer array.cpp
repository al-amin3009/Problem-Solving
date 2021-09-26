/// How do you find the largest and smallest number in an unsorted integer array?


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,2,6,8,14,6,1,2,3,5,4,7,6,6};

    int minimum= 9999999, maximum= -9999999;
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maximum)
            maximum = arr[i];
        if(arr[i]<minimum)
            minimum = arr[i];
    }
    printf("maximum number is %d\n",maximum);
    printf("minimum number is %d\n",minimum);
}
