#include<iostream>
using namespace std;
// alternate elemenst of an array

int main()
{int box[5][5];
cout<<" Enter the array elements ";
for(int i=0; i<5;i++)
{
	for(int j=0;j<2;j++)
        {
        	cin>>box[i][j];
		} 
}
int asign=1;
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	
	{
		if(asign=1)
		{
			cout<<box[i][j]<<" ";
		}
	asign*=-1;
	}
}

return 0;
}
