#include<iostream>
#include<cstdlib>
#include<ctime>

#define Rock 1
#define Paper 2
#define scissors 3
using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    int Me=0;
    int Robo=0;
    bool draw=0;
    do
    {
        cout<<"Select your throw"<<endl;
        cout<<"1) Rock"<<endl;
        cout<<"2) Paper"<<endl;
        cout<<"3) Scissors"<<endl;
        cout<<"Selction is: ";
        cin>>Me;
        cout<<endl;

        Robo=(rand() % 3) + 1;

        if (Robo==Rock)
        {
            cout<<"Robo throw Rock."<<endl;
        }
        else if (Robo==Paper)
        {
            cout<<"Robo throw Paper."<<endl;
        }
        else if (Robo== scissors)
        {
            cout<<"Robo throw Scissors."<<endl;
        }
        
        draw=false;

        if (Robo==Me)
        {
            draw=true;
            cout<<"Draw! Play again."<<endl;
        }
        else if (Robo==Rock && Me==scissors)
        {
            cout << "ROCK beats SCISSORS! YOU LOSS." << endl;
        }
        else if (Robo==Rock && Me==Paper)
        {
            cout << "Paper beats Rock! YOU WIN." << endl;
        }
        else if (Robo==scissors && Me==Paper)
        {
            cout << "SCISSORS beats Paper! YOU LOSS." << endl;
        }
        else if (Robo==scissors && Me==Rock)
        {
            cout << "Rock beats SCISSORS! YOU WIN." << endl;
        }
        else if (Robo==Paper && Me==Rock)
        {
            cout << "Paper beats Rock! YOU LOSS." << endl;
        }
        else if (Robo==Paper && Me==scissors)
        {
            cout << "SCISSORS beats Paper! YOU WIN." << endl;
        }
        cout<<endl;

    } while (draw);
    
return 0;
}


