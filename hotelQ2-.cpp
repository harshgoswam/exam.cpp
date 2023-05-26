#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{   
    private:
	int id;
	char name[50];
	char type[50];
	char room[50];

	int staff;


	public:
	void a1()
	
	{
		this->id=id;
		this->name[50]=name[50];
		this->type[50]=type[50];
		this->room[50]=room[50];
		this->staff=staff;
	
		
		cout<<"Enter  id=";
		cin>>id;
		cout<<"Enter  name=";
		cin>>name;
		
		cout<<"Enter   type=";
		cin>>type;
		
		cout<<"Enter room=";
		cin>>room;
		
		cout<<"Enter  staff=";
		cin>>staff;
		
		
	
		a2();
		
	}
	void a2()
	{  
		
		cout<<" ID="<<id<<endl;
		  cout<<" Name="<<name<<endl;
		cout<<" Type="<<type<<endl;
			cout<<" Room="<<room<<endl;
		cout<<" Staff="<<staff<<endl;
	
	}	
};
main()
{
	Hotel h;
	h.a1();
	
}
