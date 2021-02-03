#include<iostream>
using namespace std;
int Factorial(int n)
{
    int fact = 1;
    for (int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"Enter the number to check factorial: "<<endl;
    cin>>n;
    cout<<"the factorial is - "<<Factorial(n);
}
