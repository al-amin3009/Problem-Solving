/// How do you find the duplicate number on a given integer array?


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,2,6,8,14,6,1,2,3,5,4,7,6,6};

    int a[15];
    memset(a,0,sizeof(a));

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n ;i++)
    {
        int p= arr[i];
        if(a[p]>=1)
            printf("%d is duplicate\n",arr[i]);
        else
            a[p]++;
    }
}
