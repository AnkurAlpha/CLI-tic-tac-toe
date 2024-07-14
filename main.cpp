#include <iostream>
using namespace std;
void printer(string& str) ;
void user_i(string& str, int i , int j );
void com_i(string& str) ;
int main() {
    cout << "Welcome to my tic tac toe game " << endl ;
    cout << "This game is made without using any copilot" << endl << endl;
    string opt , comp; // define important elements
    string str[3][3] = {
        {" ", " " , " " },
        {" ", " " , " " },
        {" ", " " , " " }
    };
    while (true) {
        cout << "Enter what you would like to choose ?? " << endl << "\t1. X \n\t2. O" << endl;
        cout << "Type 1 or 2 " << endl;
        cin >> opt ;
        if ( opt == "1" ) {
            comp = "O";
            opt = "X" ;
            break;
        }else if ( opt == "2" ) {
            comp = "X";
            opt = "O";
            break;
        } else {
            cout << "The value is incorrect" << endl;
            cout << "please re-enter " << endl;
        }
    }
}
void printer(string& str) {
    cout << endl << endl ;
    string blank = " ";
    cout << "Y   *---*---*---*" << endl;
    cout << "3   | "<< blank << " | "<< blank << " | "<< blank << blank << "|" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "2   | "<< blank << " | "<< blank << " | "<< blank << blank << "|" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "1   | "<< blank << " | "<< blank << " | "<< blank << blank << "|" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "0-----1---2---3-X" << endl ;
}
void user_i(string& str , int i , int j ){
}
void com_i(string& str ) {
}
