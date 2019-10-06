#include<iostream>
using namespace std;
int main()
{
	int a[5],temp,i,j;
	cout<<"Enter an array";
	for ( i=0;i<5;i++)
	{
	cin>>a[i];
    } 
//	int ext=a[j+1];
// sorting part	
	for( j=1;j<5;j++)
	{   
	   
        while(a[j]<a[j-1]&&j>=0)
		{
			temp=a[j-1];
	     	a[j-1]=a[j];
	     	a[j]=temp;
	       j--;   
	   } 
   	
	}	
	
	cout<<"\n The sorted array is ";
	for(i=0;i<5;i++)
	{
		cout<<"\n "<<a[i];
	}	
		
		
	return 0;	
	
	
	}
