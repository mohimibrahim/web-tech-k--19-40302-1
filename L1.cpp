#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;

    fact(num)
}
 int fact(int n)
 {
     int i, f=1;
     for(i=1, i<=n, i++)
        f=f*i;
     cout<<"The factorial of "<<n<<" is: "<<f;
 }
