#include<iostream>
using namespace std;
//using pointers by Obito !! WELCOME!!
int main()
{
	char *p1;int *p,temp1,value = 12,temp,ar[10];char value1='a';
	//ar[0]=10;
	p = &value;
    //p=&ar[0]; //turn off comments in the prev statment to use arrays.
	p1=&value1;
	temp=*p;   
	temp1=value; /* both value and *p hold the same value*/
  
 cout<<" VALUE OF P "<<p;
 cout<<"\n\n value of temp "<<*p;
 cout<<"\n\n value of temp1 "<<temp1;
 //p1-=1;
 cout<<"\n\n address of value1 "<<p1;
 
return 0;
}
