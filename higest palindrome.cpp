// PROJECT EULER STUFF

#include<iostream>
using namespace std;

static int flag=0;

void palindrome(int the_no)
{
	int rev_no=0, clone_no=the_no ;
    while(the_no>0)
    {
	
    	rev_no=(rev_no*10)+(the_no%10);
    	
		the_no/=10;
	
	}
if(rev_no==clone_no)
   		{
    		flag++;
		}
rev_no=0,clone_no=0;
}
int main()
{
	int higest=0, product, first_no, second_no;
	
	for(int i=100;i<1000;i++)
	{
		for (int j=100;j<1000;j++)
		{
			product=i*j;
			
			//cout<<product<<"\n";
			palindrome(product);
		    
			if (flag==1)
	        {
			
				higest = product;
        		//cout<<" higest now "<<higest<<" i "<<i<<" j "<<j;
                flag=0;    			
				
				first_no=i;
				
				second_no=j;	 
	 		    
				
			}
	        else 
	        {
	        	continue;
			}
		}
	}

cout<<" result "<<higest<<" \n with "<<first_no<<" "<<second_no;



}
