#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[]="geeksforgeeks";
memset(str,'N',5);
cout<<str<<endl;
memset(str,'N',sizeof(str));
cout<<str;
}
