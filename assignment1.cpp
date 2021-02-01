#include<iostream>
using namespace std;
int main()
{
    cout<<"find the average value of the elements of an array."<<endl;

    int arr[50], i, n;
    double sum=0, avg=0;

    cout<<"\nEnter the number of data you want to take in arary: ";
    cin>>n;

    while(n>50 || n<=0)
    {
        cout<<"Error! your number should be in (1 to 50)."<<endl;
        cout<<"Enter the number again: ";
        cin>>n;
    }
    for(i=0; i<n; i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];
    }
    for(i=0; i<n; i ++)
    {
        sum += arr[i];
    }
    avg = sum/n;
    cout<<"\nThe sum of the element of array is: "<<sum<<endl;
    cout<<"\nThe avarage of the element of array is: "<<avg;
}
