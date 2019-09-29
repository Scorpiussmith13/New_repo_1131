#include<iostream>
using namespace std;
void display(int a[10])
{int i;
for (i=0;i<10;i++) 
cout<<a[i]<<"\t";		
}
int max(int a[10])
{
	int temp = a[0];
	for(int i=1;i<10;i++)
	{
		if (a[i]>temp)
		  {
		  	temp=a[i];
		  	
		  }
		
	}
	
return temp;	
	
}
int sum( int a[10])
{
int s=0;
for(int j=0;j<10;j++)
   s=s+a[j];
   
   	
return s;	
	}

int main()
{ int a[10];
cout<<"Enter 10 numbers for processing";
	for (int i=0;i<10;i++)
	cin>>a[i];
	cout<<"the displayed value of array"<<"\n";
	display(a);

cout<<"The highest value among these no. is "<<"\n";

int y= max(a);
cout<<y<<"\n"; 

cout<<"\n"<<"The sum of above arrays is   ";
int m=sum(a);
cout<<m;

return 0;
}
