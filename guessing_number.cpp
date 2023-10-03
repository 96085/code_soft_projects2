#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){

    cout<<"\n\t\t--------Welcome to the Number Guessing Game--------\n"<<endl;
    cout<<"\n\t\t-->> You will have to guess a number between 1 to 100."<<endl;
    cout<<"\n\t\t-->>Lets Start playing and Best of luck"<<endl;

    srand(time(0));
    int randNumber = ( rand() %100)+1;
    int playerInput;
    int chanceLeft=100;

    for(int i=0; i<chanceLeft; i++)
    {

        cout<<"\n--->Enter the Number: ";
        cin>>playerInput;
        
        if(playerInput == randNumber)
        {
            cout<<"\nCongrats!!. You successfully guessed the right number\n";
            cout<<"\nThanks for playing. Have a nice day.";
            break;
        }

        else
        {

            if(playerInput>randNumber)
            {
                cout<<"\n""[ Guessed Number is Big, ]"""<<endl;
                cout<<"\n""[ Insert a smaller Number. Try again ]"""<<endl;
            }

            else
            {
                cout<<"\n""[ Guessed Number is Small. ]"""<<endl;
                cout<<"\n""[ Insert a Large Number. Try Again ]"""<<endl;
            }
        }

        chanceLeft--;
        
        if(chanceLeft==0)
        {

            cout<<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<<"The randomNumber was : "<<randNumber<<endl;
            cout<<"Thanks for playing have a nice day.";
        }

    }

    cout<<"\n";

    return 0;

    
}