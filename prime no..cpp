#include <iostream>
using namespace std;
int main()
{     int n;
	 cout<<"Enter a number ";
	 cin>>n;
     if (n==2)
	{
	       cout<<"only even prime ";
	       exit(0); 
    }
	 if(n%2==0)
	 {
	 			cout<<"not prime";
	 }
	 else
	 {
	 	 	for(int i=3;i<=99;i+=2)
	 	 	{
	 	 			if(n==i) 
	 	 	   		cout<<"prime";
	 	 	   		else
	 	 	   		{
				    if(n%i==0)
	 	 	   		cout<<"Not prime";
	 		        }
            }
	 }
	 
	 
	return 0; 
}
