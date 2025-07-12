#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"\n\t\t---------------------Welcome to the Number Guessing Game--------------------------\n"<<endl;
    cout<<"\n\t\t------>>You will have to guess a number between 1 to 100";
    cout<<"\n\t\t---->>Lets start playing game."<<endl;

    srand(time(0));
    int randNumber=(rand()%100)+1;
    cout<<"\n---You will have total 5 chances to guess the correct answer\n";
    int chanceleft=5;
    int playerInput;
    for(int i=1;i<=5;i++)
    {
        cout<<"\n--->Enter the number:";
        cin>>playerInput;
        if(playerInput==randNumber)
        {
            cout<<"\nCongrats!!.You have successfully guessed the right number\n";
            cout<<"\nThanks for playing.Have a nice day";
            break;
        }
        else
        {
            if(playerInput>randNumber)
            {
                cout<<"\n-->Insert a Smaller Number.Try Again--"<<endl;
            }
            else
            {
                cout<<"\n-->Insert a larger number.Try again"<<endl;
            }
        }
        chanceleft--;
        cout<<"\n(Chances Left to guess the Random Number:"<<chanceleft<<")"<<endl;
        if(chanceleft==0)
        {
            cout<<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<<"The random number was:"<<randNumber<<endl;
        }

    }
    cout<<"\n";
    return 0;

}