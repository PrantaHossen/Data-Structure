#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Give a Number : ";
    cin>>number;
    int array[number];
    for(int i=0; i<number; i++)
    {
        cin>>array[i];

    }

    int temp=0;
    int min_index=0;

    for(int i=0; i<number; i++)
    {
        min_index=i;
        for(int j=i+1; j<number; j++)
        {
            if(array[min_index]>j)
            {
                min_index=j;
            }
        }
        temp=array[min_index];
        array[min_index]=array[i];
        array[i]=temp;

    }
    cout<<"Selection Sorted Number:  ";
    for(int i=0; i<number; i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}
