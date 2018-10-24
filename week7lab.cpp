#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
srand( time(NULL) ); 

int x; //declaring variables
x = 500; //x is ammount of funds to gamble

start:
int a,w;
cout << "Welcome to binary roulette! To begine select a number you wish to bet on." << "\n";
cin >> a;  //retreiving input of what player would like to bet on

if (a == 0)
cout << "You are now betting on 0.\n";

else if (a == 1)
cout << "You are now betting on 1.\n";

else
{cout <<"You are now exiting the game.";
return 0;}

cout << "Please enter the ammount you wish to bet. You currently have " << x << "$ to wager." << "\n";
cin >> w;

    // Picks either 0 or 1 randomly with equal probablilty	
    // CAN BE RUN AS MANY TIMES AS NEEDED
    int random = rand() % 2;
    cout << "The winning number is: " << random << ".\n";

if(a == random)
{x = x + w;
cout << "Congragulations! You won " << w << "$. You now have " << x << "$. \n";
goto start;}

else
{x = x - w;

if(x == 0)
goto end;

else 
{cout << "Sorry you lost " << w << "$. You now have " << x << "$.\n";
goto start;}
}

end:
cout << "Sorry you lost and you're broke! :(  The game is over.";
return 0;
}