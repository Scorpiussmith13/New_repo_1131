#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int flag, a[10],n,temp=0,x,numb,sum=0;
	
	cout<<"Enter the number ";
	cin>>numb;
	flag=numb;
	while(numb!=0)
	{
		x=numb%10;
		numb=numb/10;
		temp++;
		
	}
	n=temp;
	    while(numb!=0)
				{
					x=numb%10;
	for(int i=0;i<n;i++)
{  
              
	     			a[i]=x;
				
				}				
					numb/=10;
	
	
				
				
}

for(int i=0;i<n;i++)
{
	a[i]=a[i]^n;
    sum=sum+a[i];
}
if(sum==flag)
cout<<"Armstrong";
else
cout <<"not";




return 0;



}
