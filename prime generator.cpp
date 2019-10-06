#include<iostream>
using namespace std;

int main()

{
int no_1,no_2;
cout<<" Enter no 1";
cin>>no_1;
cout<<" Enter no 2";
cin>>no_2;

for(int i=no_1;i<=no_2;i++)
{    
     int flag=0;
	 if(i==0||i==1)
	 {
	 continue;
     }
	 else
{
    for(int j=2;j<=(i/2);j++)
	 
	 {
	 	if(i%j==0)
	    flag++;
	}
}
if(flag==0)
{ 
cout<<i<<"\n";
}
else
flag=0;


}	

return 0;
}
