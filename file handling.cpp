#include<fstream>
#include<cstdio>
using namespace std;
char a[10],ch;
int main()
{
ifstream stream1;
stream1.open("houses.txt",ios::in||ios::app);
stream1.seekg(0);
stream1.get(ch);
return 0;
}




