#include<iostream>
using namespace std;
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
    	
		if(year%4==0&&year%100==0&&year%400==0)
		printf("Leap");
		else if(year%4==0&&year%100!=0)
		{
			printf("\nLeap");
			
		}
else printf(" \nNot leap");
return 0;
}







