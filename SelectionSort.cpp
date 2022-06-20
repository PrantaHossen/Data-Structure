#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }



    cout<<endl<<endl<<"Given Number--";

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"----------------"<<endl<<"Sorted Number--";

    int min_index =0;
    int temp =0;

    for(int i=0; i<n; i++)
    {
        min_index = i;

        for(int j=i+1; j<n; j++)
        {

            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
