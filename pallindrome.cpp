#include<iostream>
using namespace std;
int main()
{int n,s=0,r;
cout<<"Enter the number to check if its a pallindrome or not  ";
cin>>n;
 int a = n;
for (int i = 1 ;i<=3 ;i++)
{
r = n%10;
s = (s*10)+r;
n = n/10;
}
if (a==s)
	cout<<"pallindrome.Thank u :)";
	else
	cout<<"Not pallindrome .THANK U! ";

return 0;
}

