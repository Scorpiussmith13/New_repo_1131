#include<iostream>
using namespace std;
int i,a[20],flag=0,index,mid;
void input()
{
	
	for(i=0;i<10;i++)
    {
    	cin>>a[i];
    	}
}
void output()
{
	for(i=0;i<10;i++)
	{
		cout<<"\t"<<a[i];
	
	}
	
}
int search()
{int index;
cin>>index;	
for(i=0;i<10;i++)
{
	if(a[i]==index) 
    {
	cout<<"The searched number is "<<index<<" and its position is "<<i<<"th";	
    flag =1;
	} 
    
	}	

if (flag==0)
{
cout<<"\n NOT FOUND";
}

}

int main()
{
	cout<<" \n Enter 10  numbers";
	 input();
	cout<<"\n The order of arrays :- ";
	output();
	cout<<"\n Enter the number to be searched";
     
  	search();
	                                               

 	return 0;
}




