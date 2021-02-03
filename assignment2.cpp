#include<iostream>
using namespace std;
int main()
{
    cout<<"Find the minimum and maximum value of the elements of an array."<<endl;
    int arr[20], n, i, max, min;
    cout<<"\nEnter the array size: ";
    cin>>n;
    while(n > 20 || n <= 0)
    {
        cout<<"\nError! you array size should be in (1 to 20)."<<endl;
        cout<<"Enter the array size again: ";
        cin>>n;
    }
    for(i= 0; i < n; i++)
    {
       cout<<"Enter the element of the array: ";
       cin>>arr[i];
    }
    max = arr[0];
    for(i = 0; i < n; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for(i = 0; i < n; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    cout << "\nLargest element : " << max <<endl;
    cout << "\nSmallest element : " << min;


}
