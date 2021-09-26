///  How do you find duplicate numbers in an array if it contains multiple duplicates?

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
        a[p]++;
    }
    for(int i=0;i<15;i++)
        if(a[i]>1)
            printf("%d\n",i);
}
