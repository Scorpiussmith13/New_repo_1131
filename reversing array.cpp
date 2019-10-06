#include<iostream>
using namespace std;

            // Sample paper question no. 3(B) or portion 2nd
                  
    void Reverse(int A[],int n)
    {
    	for(int i=n-1;i>=0;i--)
    	{
    		cout<<"\n";
			cout<<A[i];
		}
	}
	
int main()
  { 
  int box[10],n;
   cout<<" First enter the no of elements of the array ";
  cin>>n;   
   cout<<" Enter the goddamm array you mughead..... ";
   
   for(int i=0;i<n;i++)
   {
   
   cin>>box[i]; 	
  
    }
    Reverse(box,n);
    
    return 0;
    
	}
