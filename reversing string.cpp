#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[23]; char temp;
cout<<"Enter a string ";
cin>>a;
 for(int i=0, j=9;i<9;i++,j--)

 {
    temp=a[i];
	a[i]=a[j];
	a[j]=temp;
		
  } 
 
cout<<"\nThe reversed word is "<<a;	
return 0;	
}
