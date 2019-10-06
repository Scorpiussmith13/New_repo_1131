// Code to check multiple inheritence
#include<iostream>
using namespace std;
class super1
{
	public: super1()
	{
		cout<<" Constructor super1 under process!! ";
		
	}
    ~super1()
    
    {
    	cout<<"\n Destruction of super 1 in process.";
    	
	}


};
class sub1 : public super1
{

	public : sub1()
	{
		cout<<" \nConstructing sub1 in process \n ";
	}

~sub1()

{
	cout<<" \n Destructor sub1 in process ";
	
}

};
class sub2 : public sub1
{
	public:  
	sub2()
	{
		cout<<" Constructor of sub2 in process ";
		
	}


 ~sub2()
 {
 	cout<<" \n Destructor sub2 in process!! ";
 }
   
};
int main()
{
//	sub1 obj1;
	sub2 obj2;

return 0;

}
