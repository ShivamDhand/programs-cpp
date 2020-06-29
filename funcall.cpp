#include<iostream>
using namespace std;

int calCube(int);
int main()
{
int  n,cube=0;
cout<<"\n Enter the number to be cubed..\n";
cin>>n;
cube=calCube(n);
cout<<"The required cube="<<cube<<"\n";
return 0;
}
int calCube(int num)
{
return num*num*num;
}