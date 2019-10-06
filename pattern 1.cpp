#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the limit";
cin>>n;
for (int i = 1 ; i<=n/2+1;i++)
{     cout<<"\n";
	for( int j =1;j<i+1 ;j++)
	cout<<"  "<<"*";
	
}

for(int k = n/2-1; k>=0;k-- )
    {  cout<<"\n";
    	for (int r=k;r>=0;r-- )
    	cout<<"  "<<"*";
	}
return 0;
}
