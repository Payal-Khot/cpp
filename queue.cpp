#include<iostream>
using namespace std;
class queue
{
    public:
            int a[10],i,front,rear,size;
            void getdata();
            void inqueue();
            void dequeue();
            void display();
};

void queue :: getdata()
{
    cout<<"enter the size of the Queue "<<endl;
    cin>>size;
    cout<<"enter the elements in the Queue"<<endl;
    for(i=1;i<=size;i++)
    {
        cin>>a[i];
    }
}

void queue :: inqueue()
{   
    int key;
    front=0;
    rear=0;
    if(front=1 && rear==size-1)
    {
        rear=front+1;
        cout<<"!!!!!!!!!  OVERFLOW  !!!!!!!!!"<<endl;
    }
    else 
    {
       front=1;
        rear=size;
         cout<<"enter the element in the Queue "<<endl;
        cin>>key;
        rear=rear+1;
        a[rear]=key;
    
    }
}

void queue :: dequeue()
{
//front=0;
//rear=0;
    if(front==0)
    {
       front=rear;
        cout<<"!!!!!!!!!  UNDERFLOW  !!!!!!!!!"<<endl;
    }
    /*else if(front==size)
    {
        front=1;   
    }*/
    else
    {
        front=front+1;
    }
}

void queue :: display()
{
    cout<<"The Queue is"<<endl;
    for(i=front;i<=rear;i++)
    {
        cout<<a[i]<<endl;
    }
}


int main()
{
    queue q;
    q.getdata();
    int ch,i;
    for(i=1;i<=2;i++)
    {
        cout<<"The operations are as follows :"<<endl;
        cout<<"1. INQUEUE"<<endl<<"2. DEQUEUE"<<endl<<"3. DISPLAY"<<endl;
        cout<<"Enter the operation you want to perform : "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
                    q.inqueue();
                    break;

            case 2:
                    q.dequeue();
                    break;

            case 3:
                    q.display();
                    break;

            default:
                    cout<<"INVALID CHOICE"<<endl;
         }
    }
    return 0;
}