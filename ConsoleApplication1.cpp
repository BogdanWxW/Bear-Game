#include <iostream>
using namespace std;

int main()
{
    int A;
    int i = 0;
    int l = 0;
    int r = 0;

    string story[]{ "Well, the bear is still coming\nYou see a tree, will you:" ,  "Good choice,you get to a house\nWill you:"  , "" ,  "" ,  "" };
    string choseLeft[]{ "So,you chose left..." ,  "Left again, huh?"  , "" ,  "" ,  "" };
    string choseRight[]{ "So,you chose right..." ,  "Right again, huh?"  , "" ,  "" ,  "" };
    string answersLeft[]{ "Climb in the tree", "Knock on the door ", "", "" };
    string answersRight[]{ "Run circles around the tree" ,  "Climb through a window" ,  "" ,  "" ,  ""  , "" };
  
    



    cout << "Hello there! This is a new game trial.\n";
    cout << "A bear is chasing you.You choose to run to the: \n";
    cout << "1. Left\n";
    cout<<"2.Right\n";
    cin >> A;

    while (A != 1 && A!=2 || cin.fail())
    { 
        cout << "Don't be silly, only 1 or 2 please!\n"; 
        cin.clear();
        cin.ignore(256, '\n');
        cin >> A;
        
        
    }
    if (A == 1) {
        cout << choseLeft[l];
        l++;
        cout << story[i]<<endl;
        cout << "1.";
        cout << answersLeft[i] <<endl;
        cout << "2.";
        cout<< answersRight[i]<<endl;
            i++;
        cin >> A;

    };
    if (A == 2) {
        cout << choseRight[r];
        r++;
        cout << story[i] << endl;
        cout << "1.";
        cout << answersLeft[i] << endl;
        cout << "2.";
        cout << answersRight[i] << endl;
        i++;
        cin >> A;
    };
    return 0;

}
