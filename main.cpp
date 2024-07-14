#include <iostream>
#include <vector>
using namespace std;
void printer(vector<string>& vec) ;
int main() {
    cout << "Welcome to my tic tac toe game " << endl ;
    cout << "This game is made without using any copilot" << endl << endl;
    string opt , comp; // define important elements
    vector<string> vec;
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
    printer(vec) ;
    while (true) {
        cout << "Enter position x axis : " ;
        int i ;
        cin >> i ;
        cout << "Enter position y axis : " ;
        int j;
        cin >> j ;
        int pos = (3 * (j- 1) + (i-1)) ; // for position
        vector<string>::iterator itr = (vec.begin() + pos) ;
        *itr = "X";
        break;
    }
}
void printer(const vector<string> & vec) {
    cout << endl << endl ;
    string blank = " ";
    cout << "Y   *---*---*---*" << endl;
    cout << "3   | "<< blank << " | "<< blank << " | "<< blank << blank << "|" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "2   | "<< blank << " | "<< blank << " | "<< blank << blank << "|" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "1   | "<< *vec.begin() << " | "<< *(vec.begin()+1) << " | "<< *(vec.begin() +2)  << " |" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "0-----1---2---3-X" << endl ;
}
