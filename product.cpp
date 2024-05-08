#include<iostream>
using namespace std;
struct
{
    string product_name;
    int product_id,i;
    int product_price;
    float gst;
}p[5];

void getdata()
{
    int i;
    for(i=1;i<=3;i++)
    {
        cout<<"enter product name : ";
        cin>>p[i].product_name;
        cout<<"enter product ID : ";
        cin>>p[i].product_id;
        cout<<"enter price of the product : ";
        cin>>p[i].product_price;
        cout<<"enter GST of the product : ";
        cin>>p[i].gst;
    }
}

void insert()
{
    int i;
    cout<<"enter size of the list"<<endl;
    cin>>i;
    if(i<=5)
    {
       cout<<"enter product name : ";
        cin>>p[i].product_name;
        cout<<"enter product ID : ";
        cin>>p[i].product_id;
        cout<<"enter price of the product : ";
        cin>>p[i].product_price;
        cout<<"enter GST of the product : ";
        cin>>p[i].gst; 
    }
    else
    {
        cout<<"INVALID"<<endl;
    }
    cout<<"Product name : "<<p[i].product_name<<endl;
        cout<<"Product ID : "<<p[i].product_id<<endl;
        cout<<"Price of Product : "<<p[i].product_price<<endl;
        cout<<"GST of the product : "<<p[i].gst<<endl;
}

void del()
{
    int i;
     int product_id;
    cout<<" product to delete "<<endl;
    cin>>p[i].product_id;
    if(product_id>=0 && product_id<=5)
    {
        for(i=5;i<=product_id;i++)
        {
            p[i+1]=p[i];
        }
    }
    else
    {
        cout<<"INVALID "<<endl;
    }
}

void display()
{
    int i;
    for(i=1;i<=3;i++)
    {
        cout<<"Product name : "<<p[i].product_name<<endl;
        cout<<"Product ID : "<<p[i].product_id<<endl;
        cout<<"Price of Product : "<<p[i].product_price<<endl;
        cout<<"GST of the product : "<<p[i].gst<<endl;
        
    }
}

int main()
{
    int c; 
    getdata();
    cout<<"enter choice"<<endl;

    for(int i=0;i<4;i++)
    {
    cout<<"The operations are as follows :"<<endl;
        cout<<"1. INSERT"<<endl<<"2. DELETE"<<endl<<"3. DISPLAY"<<endl;
        cout<<"Enter the operation you want to perform : "<<endl;
        cin>>c;
    switch(c)
    {
        case 1: insert();
                display();
                break;
        case 2: del();
                display();
                break;
        /*case 3: display();
        break;*/
        default: cout<<"INVALID CHOICE"<<endl;
    }
    }
    return 0;
}