#include<iostream>
using namespace std;
int main()
{
    char a1[30] = "Ibrahim Arafat ";
    char a2[20] = "Mohim";

    int i = 0, len = 0, j = 0;
    while (a1[i]!='\0')
    {
        i++;
        len++;
    }
    while (a2[j]!='\0')
    {
        a1[len+j]=a2[j];
        j++;
    }
    cout<<"Fullname = "<<a1;
}
