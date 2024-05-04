
#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
  		private:
                int date;
                int year;
                int month;
                string M;
		public:
			Date();
			Date(int d,int m,int y);
			void setDate();
			void display();
			void difference(int d1,int d2,int m1,int m2,int y1,int y2);
};

	Date::Date()//constructor
		{
                      date=0;month=0;year=0;
		}

      Date::Date(int d,int m,int y)//parameterized
	{
		date=d;
		month=m;
		year=y;

	}
     void  Date:: setDate()
	{
	
                  cout<<"enter date";
                                cin>>date;
                                cout<<"enter month";
                                cin>>month;
                                 cout<<"enter year";
                                 cin>>year;



	}
     void  Date::display()
	{
		   cout<<"Date:"<<date<<"-"<<month<<"-"<<year<<endl;
                                if(month==1)
                                    cout<<"Date:"<<date<<"-"<<"JAN"<<"-"<<year<<endl;
                                else if(month==2)
                                        cout<<"Date:"<<date<<"-"<<"FEB"<<"-"<<year<<endl;
                                 else if(month==3)
                                        cout<<"Date:"<<date<<"-"<<"MARCH"<<"-"<<year<<endl;
                                 else if(month==4)
                                        cout<<"Date:"<<date<<"-"<<"APRIL"<<"-"<<year<<endl;
                                 else if(month==5)
                                        cout<<"Date:"<<date<<"-"<<"MAY"<<"-"<<year<<endl;
                                 else if(month==6)
                                        cout<<"Date:"<<date<<"-"<<"JUNE"<<"-"<<year<<endl;
                                 else if(month==7)
                                        cout<<"Date:"<<date<<"-"<<"JULY"<<"-"<<year<<endl;
                                 else if(month==8)
                                        cout<<"Date:"<<date<<"-"<<"AUG"<<"-"<<year<<endl;
                                 else if(month==9)
                                        cout<<"Date:"<<date<<"-"<<"SEPT"<<"-"<<year<<endl;
                                 else if(month==10)
                                        cout<<"Date:"<<date<<"-"<<"OCT"<<"-"<<year<<endl;
                                 else if(month==11)

                                        cout<<"Date:"<<date<<"-"<<"NOV"<<"-"<<year<<endl;
                                 else if(month==12)
                                {
                                        cout<<"Date:"<<date<<"-"<<"DEC"<<"-"<<year<<endl;
                                }
                                cout<<"Date:"<<date<<"/"<<month<<"/"<<year<<endl;
	}
void Date::difference(int d1,int d2,int m1,int m2,int y1,int y2)
{
	int days=0;
	days=30-d1;
	days=days+(d2-1);
	if(m1!=m2)
	{
		for(int i=m1+1;i<m2;i++)
		{
			if(i==1 || i==3 || i==7 || i==9 || i==11)
			{
				days=days+31;
			}
			else if(i==4||i==6||i==9||i==11)
			{
				days=days+30;
			}
			else if(i==2||y1%4==0)
			{
				days=days+28;
			}
			else
			{
				days=days+29;
			}
		}
	}
	else
	{
		if(d1>d2)
		{
			days=d1-d2;
		}
		else
		{
			days=d2-d1;
		}
	}
	cout<<"difference between two days : "<<days<<endl;
}


int main()
{
    Date d4;
	Date d1(05,10,2004);
	Date d2(04,10,2004);
	d1.display();
	d2.display();
	d1.difference(05,04,10,10,2004,2004); 
	
	 
	
	return 0;
}
