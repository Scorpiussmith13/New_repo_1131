#include <iostream>
using namespace std;
int a[10],i;
 void input()
    {
	for(i=0;i<10;i++)
 	{
	 cin>>a[i];
    }
	 }
 	
	 
	 void display()
 	{
	 for ( i=0;i<10;i++)
	 {
	 
	 cout<<a[i]<<"\t";
     }
	 }
	 
	 int sum1()
	{
	  int s=0;
	 for(i=0;i<10;i++)
	 {
	
	 	s=s+a[i];
     }
	 return s;	
	 
}
	 int max1()
	 {
	 	
	 	int temp=a[0];
	 	for(i=0;i<10;i++)
	 	{
	 		
	 		if (temp<a[i])
	        temp=a[i];  	 
	    } 
		return temp;
		 
	}
	 	
	     int min1()
	     { int tark=a[0];
	     for(i=0;i<10;i++)
		 {
		 if (a[i]<tark)
		 tark=a[i];
	     }
		 return tark;
		 }
		 
		 float avg1()
		 {
		 	int p=sum1();
		 	float k;
		 	 k=p/10;
		 	
		 	return (float) k;
		 }
		 	
		 int main()
		 {int sum,max,min;float avg;
		 cout<<"Enter 10 numbers";
		 input();
		 cout<<"The numbers entered are   ";
		 display();
		 	
	         char n,y;char choice;
			 while(1)
			 {cout<<" \n Enter your choice of operation (1 for sum; 2 for max value; 3 for min value; 4 for average of arrays ; 5 to exit";
			 int b;
			 cin>>b;
		 	switch(b)
		 	{
		 		case 1:  sum = sum1();
		 		cout<<"The sum is  \n"<<sum;
				 break;
		 		case 2: max= max1();
		 		cout<<"The maximum value among the entered values is \n "<<max;
		 		break;
			    case 3:  min = min1();
			    cout<<"The minimum number among the enterd value is \n "<<min;
                break;
				case 4: avg = avg1(); 			    
			    cout<<"The average of all the values entered is \n "<<(float)avg; 
			     break;
			     case 5: exit(0);
                 break;
				 default : cout<<"WRONG NUMBER ENTERED....try again(1,2,3,4,5)";
				 break;			
            }
			 
		}
	
		return 0;	 
		 }	
		 
		 
	 
	 
	 
	 
	 	
	 
	 
