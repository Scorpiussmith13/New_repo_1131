#include<iostream>
using namespace std;

void Extra_ele(int boxa[],int boxb[],int n)
{
 int count=0,pos;
 for(int i=0;i<n+1;i++)
 {
 	 for(int j=0;j<n;j++)
 	{
 	 	if(boxa[i]==boxb[j]);
 	 	count++;
	    break;
	}

if(count==0)

pos=i;

break; 	 
}	
cout<<" Extra element is \n ";
cout<<boxa[pos];

}

int main()
{
	int boxa[10],boxb[10],n;
	cout<<" Enter the no of elements of array b ";
	cin>>n;
	cout<<" Enter an array..... let it be A.. put an extra element here ";
	for(int i=0;i<n+1;i++)
	{
	cin>>boxa[i];
    } 
    cout<<" Enter the 2nd array ... let it be B...do enter one elements that you want ";
    for(int j=0;j<n;j++)
    {
    	cin>>boxb[j];
	}
Extra_ele(boxa,boxb,n);
return 0;
}




