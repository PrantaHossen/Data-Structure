#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give a Number :  ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int key;
    cout<<"Give Searching Number ";
    cin>>key;
    int flag;
    int l=0;
    int r=n-1;

    while(l<=r)
    { 
        int mid=(l+r)/2;
        if(key==arr[mid])
        {
            cout<<"Number Found";
            flag++;
            break;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
           r=mid-1;
        }
    }
    if(flag==0)
    {
        cout<<"Number Not Founded";
    }
}
