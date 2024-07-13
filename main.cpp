#include <iostream>
#include <vector>
using namespace std;
void printer(vector<string>& vec) ;
int main() {
    cout << "Welcome to my tic tac toe game " << endl ;
    cout << "This game is made without using any copilot" << endl << endl;
    cout << "Enter what you would like to choose ?? " << endl << "\t1. X \n\t2. O" << endl;
    cout << "Type 1 or 2 " << endl;
    string opt , comp;
    cin >> opt ;
    while (true) {
        if ( opt == "1" ) {
            comp = "O";
            opt = "X" ;
        }else if ( opt == "2" ) {
            comp = "X";
            opt = "O";
        } else {
            cout << "The value is incorrect" ;
        }
    }

}
void printer(vector<string>& vec) {
}
