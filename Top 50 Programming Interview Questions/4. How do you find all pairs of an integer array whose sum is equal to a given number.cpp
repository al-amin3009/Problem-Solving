///  How do you find all pairs of an integer array whose sum is equal to a given number?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4,2,6,8,14,6,1,2,3,5,4,7,6,6}, target = 7;

    int n= sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        if(mp.find(target-arr[i]) != mp.end())
        {
            printf("find at %d=%d and %d=%d\n",i,arr[i],mp[target-arr[i]],target-arr[i]);
        }
        mp[arr[i]]=i;
    }
}
