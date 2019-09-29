#include <iostream>
using namespace std;
int main()
{
	
int a,b,c;
cout <<"Enter the values of the 3 numbers";
cin>>a>>b>>c;
 
if (a<b && b<c)
{
cout<<"The smallest number is "<<a<<"\n";
cout<<"The middle no. is "<<b<<"\n";
cout<<"The largest no is "<<c<<"\n";
}
else 
{	
if(a<b && b>c && c>a)
{
cout<<"The highest number is "<<b<<"\n";
cout<<"The middle no. is "<<c<<"\n";
cout<<"the smallest no is "<<a<<"\n";
}

else{
 
 if (a>b&&b<c&&c>a)

{

cout<<"The lowest number is"<<b <<"\n";
cout<<"The middle number is "<<a<<"\n";
cout<<"The highest number is "<<c<<"\n";
}

else {
if (a<b && b>c && a>c)
{

cout<<"The lowest no. "<<c<<"\n";
cout<<"The middle no. "<<a<<"\n";
cout<<"The highest no.  "<<b<<"\n";
}

else {
if (a>b&&b>a)
{
cout<<"The lowest no."<<c<<"\n";
cout<<"The middle no."<<b<<"\n";
cout<<"The highest no."<<a<<"\n";
}

else (a>b&&b<c&&c<a);
{

cout<<"The lowest no."<<b<<"\n";
cout<<"The middle no."<<c<<"\n";
cout<<"The higest no."<<a<<"\n";
}
}}}}
return 0;

}
