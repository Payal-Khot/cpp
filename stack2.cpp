#include<iostream>
using namespace std;
class stack
{
	public:
		int a[10],n,i,top;
		void getdata();
		void display();
		void push();
		void pop();
		
};

	void stack :: getdata()
	{
		cout<<"enter the number of elements"<<endl;
		cin>>n;
		cout<<"enter the elements"<<endl;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
	}

	void stack :: push()
	{
		top=n;
		int key;
		
		if(top==n-1)
		{
			cout<<"OVERFLOW"<<endl;
		}
		else
		{
		cout<<"enter the element to insert"<<endl;
		cin>>key;
			top=top+1;
			a[top]=key;
			
		}
		/*for(i=1;i<=n;i++)
		{
		cout<<"new stack is "<<endl;
	}*/
}
	void stack :: pop()
	{
		top=n;
		if(top==0)
		{
			cout<<"EMPTY"<<endl;
		}
		else
		{
			n--;
			top=top-1;
		
		}
		/*for(i=1;i<=n;i++)
		{
		
		cout<<"stack after popping"<<endl;
	}*/
}
	void stack :: display()
	{
		int i;
		cout<<"stack elements are "<<endl;
		for(i=1;i<=top;i++)
		{
			cout<<a[i]<<endl;
		}
	}
	
	int main()
	{
		stack s;
		s.getdata();
		int c,i;
		cout<<"The operation you want to perform "<<endl;
		for(i=0;i<2;i++)
		{
		cout<<"1. PUSH"<<endl<<"2. POP"<<endl<<"3. DISPLAY"<<endl;
		
		cout<<"enter choice"<<endl;
		cin>>c;
		
		switch(c)
		{
			case 1:	s.push();
				   	break;
			case 2:	s.pop();
					break;
			case 3: s.display();
					break;
			default: cout<<"INVALID CHOICE"<<endl;
				
		}
		}
		
	}
		
	

