#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		int x;
		void set(int n)
		{
			this->x=n;
		}
		void get()
		{
			cout<<"A="<<this->x<<endl;
		}
	    A operator ++(int)
	    {
	    	A temp;
	    	temp.x=this->x++;
	    	return temp;
	    	cout<<endl;
		}
		
		
};
class B
{
    public :
		int y;
		void setdata(int m)
		{
			this->y=m;
		}
		void getdata()
		{
			cout<<"B="<<this->y<<endl;
		}	
			B operator --(int)
		{
			B temp;
			temp.y=this->y--;
			return temp;
		}
};
main()
{
	A a1;
	a1.set(10);
	a1.get();
	
	a1 ++;
	a1.get();
    cout<<endl;
	
	B b1;
	b1.setdata(15);
	b1.getdata();
	
	b1 --;
	b1.getdata();
}
