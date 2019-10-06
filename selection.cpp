#include<iostream>
using namespace std;
int main()

{
     int temp,flag=0,loc,min,i,j;  
  
	int a[5];
	cout<<"\n Enter an array of numbers (10 max)";
	for(int i=0;i<5;i++)
	{
	cin>>a[i];
    }
	 
     	
	for( i=0;i<4;i++)
 	{   min=a[i];
        loc=i;
	    for( j=i+1;j<5;j++)
	     {
	     	
		if(a[j]<min)
	    {
		min=a[j];
		loc=j;
	    }                                     
               
         }
	     
          temp=a[i];
         a[i]=a[loc];
         a[loc]=temp;
        
} 
	
	cout<<"The sorted array is ";
	for( i=0;i<5;i++)
	{
		
		cout<<"\n "<<a[i];
	}
	return 0;
}
