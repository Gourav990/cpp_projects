#include<iostream>
using namespace std;

int main(){
    cout<<"----------------- WELCOME TO METRO PARKING-------------------"<<endl;
    int enter;
    int Cars=0,Bikes=0,Others=0,Vehicle=0;
    while (enter!=6 )
    {
        cout<<"Enter your choice"<<endl;
        cout<<"Press 1 to enter the Bike"<<endl;
        cout<<"Press 2 to enter the Car"<<endl;
        cout<<"Press 3 to enter the Others"<<endl;
        cout<<"Press 4 to enter the Show the record"<<endl;
        cout<<"Press 5 to enter the delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cout<<"Selection: ";
        cin>>enter;

        if (enter==1)
        {
            Bikes++;
            system("CLS");
        cout<<"Bike is added"<<endl;
        }
        else if (enter==2)
        {
            Cars++;
            system("CLS");
            cout<<"Cars is added"<<endl;         
        }
        else if (enter==3)
        {
            Others++;
            system("CLS");
            cout<<"Others vehicle is added"<<endl;
        }
        else if (enter==4)
        {
            cout<<"Bikes "<<Bikes<<endl;
            cout<<"Cars "<<Cars<<endl;
            cout<<"Others Vehicle "<<Others<<endl;
        }
           else if (enter==5)
        {
            Bikes=0;
            Cars=0;
            Others=0;
            system("CLS");
            cout<<"All record is delected...!!!"<<endl;;
        }
        else if (enter==6)
        {
            
            cout<<"THANK YOU FOR USING ME...!!!"<<endl;
            exit(0);
               
        }
        else{
            cout<<"Invalid Input"<<endl;
        }
    }
    

 return 0;
}
