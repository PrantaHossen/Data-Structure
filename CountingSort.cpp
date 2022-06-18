#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Give a Number : ";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxno=INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxno=max(maxno,array[i]);
    }

    int count[maxno+10]= {};
    for(int i=0; i<n; i++)
    {
        count[array[i]]++;
    }

    int idx=0;
    for(int i=0; i<=maxno; i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            array[idx]=i;
            idx++;
        }
    }

    cout<<"Sorted Number - ";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }

}
