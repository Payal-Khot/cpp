#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		long long int cell_no;
		string email_id;
		void getdata()
		{
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter cell no"<<endl;
			cin>>cell_no;
			cout<<"enter email id"<<endl;
			cin>>email_id;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Cell No :"<<cell_no<<endl;
			cout<<"Email Id :"<<email_id<<endl;
		}
};
class Student:public Person
{	
	public:
		int roll;
		string div;
	void getdata2()
	{
		cout<<"enter roll no "<<endl;
		cin>>roll;
		cout<<"enter div "<<endl;
		cin>>div;
	}
	void display1()
	{
		cout<<"Roll No :"<<roll<<endl<<"Div :"<<div<<endl;
	}
};
class Faculty:public Person
{
	public:
			string subject;
			int employee_id;
			void data()
			{
				cout<<"enter  the subject "<<endl;
				cin>>subject;
				cout<<"enter employee id "<<endl;
				cin>>employee_id;
			}
			void display2()
			{
				cout<<"Subject :"<<subject<<endl<<"Employee Id :"<<employee_id<<endl;
			}
};
int main()
{
	Student p;
	p.getdata();
	p.getdata2();
	p.display();
	p.display1();
	Faculty f;
	p.getdata();
	f.data();
		p.display();
	f.display2();	
	return 0;
}

