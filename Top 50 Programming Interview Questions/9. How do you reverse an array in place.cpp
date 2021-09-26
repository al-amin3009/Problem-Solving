/// How do you reverse an array in place?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,2,6,8,14,6,1,2,3,5,4,7,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0,j=n-1; i<=j; i++,j--)
    {
        swap(arr[i],arr[j]);
    }

    for(int i=0;i<n; i++)
        printf("%d ",arr[i]);
}
