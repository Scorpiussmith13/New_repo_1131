#include<iostream>
#include<math.h>
using namespace std;
int a=0,x,l,b,pi=3.14;
float square(int a)
{
	cout<<"Enter the sides of a square";
	cin>>x;
	a=x*x;
	return (float) a;
	
}
float rec(int a,int b)
{
cout<<"Enter the length and breadth";
cin>>l>>b;
a=l*b;
return (float) a;	
}
float tri(int a,int b,int c)
{
	int s;
	cout<<"Enter the 3 sides of a triangle";
	cin>>l>>b>>x;
	s=(l+b+x)/3;
	a=s*(sqrt((s-a)+(s-b)+(s-c)));
	return (float) a;
	
}
float cube(int a)
{
	cout<<"Enter the sides";
	cin>>x;
	a=6*x*x;
    return a;

}
float  cuboid(int a,int b,int c)
{
	cout<<"Enter length,breadth,height";
	cin>>l>>b>>x;
	a=l*b*x;
	return a;
}
float sphere(int a)
{
	cout<<"Enter the radius";
	cin>>x;
	a=4*pi*x^2;
return a;
}
float hemis(int a)
{
	cout<<"Enter radius ";
	cin>>x;
	a=2*pi*x^2;
    return a;
}
float  cone(int a,int b )
{
	cout<<"Enter radius and length(l)";
	cin>>x>>l;
	a=pi*x*l;
	return a;
}
float cylinder(int a,int b)
{
	cout<<"Enter value of radius and height of cylinder";
	cin>>x>>l;
	a=pi*x^2*l;
	return a;
	
}
int main()
{
	int choice,d;
    while(1)
	{
	cout<<"Enter your choice of calculation \n ~ 1)Rctangle,\n 2)square,\n 3)Triangle,\n 4)Cuboid,\n 5)Cube, \n 6)sphere, \n 7)Hemisphere,\n 8) Cone \n 9)Cylinder \n,0) to exit";
	cin>>choice;
	switch(choice)
	{
		    case 1: d=rec(l,b);
			cout<<"The area is "<<d;
			break;
		    case 2: d=square(x);
					cout<<"The area is "<<d;
			break;
	        case 3: d=tri(l,b,x);
				cout<<"The area is "<<d;
			break;
	        case 4: d=cuboid(l,b,x);
				cout<<"The area is "<<d;
			break;
			case 5: d=cube(x);
						cout<<"The area is "<<d;
			break;
            case 6: d=sphere(x);
						cout<<"The area is "<<d;
			break;	
	        case 7: d=hemis(x);
	        			cout<<"The area is "<<d;
			break;
			case 8: d=cone(x,l);
						cout<<"The area is "<<d;
			break;
			case 9:d=cylinder(x,l);
						cout<<"The area is "<<d;
			break;
	        case 0:exit(0);
	         break;
	         default:cout<<"Wrong value sorry";
	        }
cout<<" \n \n Want to enter more?? If yes type 'y' else type 'n' ";
char v;
cin>>v;
if (v=='n')
{
exit(0);	
}
}
return 0;
}
