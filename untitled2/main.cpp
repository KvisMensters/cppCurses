#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    srand( time(0) );
    string stringFirstItem;
    string stringSecondItem;
    while(true){
        cout << "Enter Rock, Scissors or Paper: ";
        cin >> stringFirstItem;
        int intCounter=0;
        intCounter= rand()%3+1;
        if(intCounter==1){
            stringSecondItem="Rock";
            if(stringFirstItem==stringSecondItem){
                cout << "Next Round" << endl;
                continue;
            }
            if(stringFirstItem=="Scissors"){
                cout << "Rock" << endl << "Looser!";
                break;
            }
            if(stringFirstItem=="Paper"){
                cout << "Rock" << endl << "You win!";
                break;
            }
        }
        if(intCounter==2){
            stringSecondItem="Scissors";
            if(stringFirstItem==stringSecondItem){
                cout << "Next Round" << endl;
                continue;
            }
            if(stringFirstItem=="Rock"){
                cout << "Scissors" << endl << "You win!";
                break;
            }
            if(stringFirstItem=="Paper"){
                cout << "Scissors" << endl << "Looser!";
                break;
            }
        }
        if(intCounter==1){
            stringSecondItem="Paper";
            if(stringFirstItem==stringSecondItem){
                cout << "Next Round" << endl;
                continue;
            }
            if(stringFirstItem=="Scissors"){
                cout << "Paper" << endl << "You win!";
                break;
            }
            if(stringFirstItem=="Rock"){
                cout << "Paper" << endl << "Looser!";
                break;
            }
        }
    }

    return 0;
}
