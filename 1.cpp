#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    vector<int> arr(n);
    cout<< "Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    cout<< endl<<"Array elements : ";
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        cout<<arr[i]<< " ";
    }

    double avg = sum/n;
    cout<<endl<<"Average is : "<<avg;

    return 0;
}

