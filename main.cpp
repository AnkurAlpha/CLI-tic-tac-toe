#include <iostream>
using namespace std;
void printer(string s[3][3]) ;
int main() {
    // starting
    string s[3][3] = {
        { " " , " "  , " " } ,
        { " " , " "  , " " } ,
        { " " , " "  , " " }
    };
    cout << "Welcome to CLI tic tac toe game " << endl ;
    cout << "For playing this game you need some knoledge of coordinate geometry " << endl ;
    cout << "please select your sign : " << endl;
    cout << "1. O" << endl ;
    cout << "2. X" << endl ;
    cout << "Choose [1\\2] : " ;
    int a ;
    cin >> a ;
    string pl , comp;
    if (a == 1 ) {
        pl = "O";
        comp = "X";
    } else if ( a ==2 ) {
        pl = "X";
        comp = "O";
    }else  { /// just a small check
        cout << "Invalide values , terminating..." << endl ;
        return 0 ;
    }


    // main process
    printer(s) ;
    while (true) {
        cout << "Choose the coordinates"  << endl;
        cout << "x : "  ;
        int x ;
        cin >> x ;
        cout << "y : "  ;
        int y ;
        cin >> y ;
        if ( x > 3 || y > 3 || x < 0 || y < 0  ) {
            cout << "Invalid values " << endl;
            continue;
        } else if ( s[y-1][x-1] != " ") {
            cout << "The the location provided is already in use " << endl;
            continue;
        } else {
            cout << "Computer's turn " << endl;
        }
        s[y-1][x-1] = pl ;
        printer(s) ;

        break;
    }
}
void printer(string s[3][3]) {
    cout << endl << endl ;
    string blank = " ";
    cout << s[1][1] << endl;
    cout << "Y   *---*---*---*" << endl;
    cout << "3   | "<< s[2][0] << " | "<< s[2][1] << " | "<< s[2][2] << " |" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "2   | "<< s[1][0] << " | "<< s[1][1] << " | "<< s[1][2] << " |" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "1   | "<< s[0][0] << " | "<< s[0][1] << " | "<< s[0][2]  << " |" << endl;
    cout << "|   *---*---*---*" << endl ;
    cout << "0-----1---2---3-X" << endl ;
    cout << endl << endl;
}
