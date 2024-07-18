#include <iostream>
using namespace std;
void printer(string s[3][3]) ;
void comp_move(string s[3][3], string comp) ;
void cheker(string s[3][3],string &cond) ;

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
    string win = " ";
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
        }
        s[y-1][x-1] = pl ;
        printer(s) ;
        cheker(s,win);
        if ( win == " " ) {
            cout << "computer's move " << endl;
        } else if ( win == "Tie") {
            cout << "All places are filled, match is a tie!!"  << endl;
            printer(s) ;
            return 0 ;
        } else if ( win == "X" || win == "O") {
            if ( win == pl ) {
                cout << "You won !!" ;
                return 0 ;
            } else {
                cout << "Computer won!!";
                return 0 ;
            }
        }


        comp_move(s,comp);
        printer(s) ;
        cheker(s,win);
        // was't sure if this can be put into a function or not
        if ( win == " " ) {
            cout << "your move " << endl;
        } else if ( win == "Tie") {
            cout << "All places are filled, match is a tie!!"  << endl;
            printer(s) ;
            return 0 ;
        } else if ( win == "X" || win == "O") {
            if ( win == pl ) {
                cout << "You won !!" ;
                return 0;
            } else {
                cout << "Computer won!!";
                return 0;
            }
        }
    }
    cout << rand() % 100 ;
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
void comp_move(string s[3][3], string comp) {
    while (true) {
        srand(time(0)) ; // to generate random number everytime
        int x = rand() % 4 ;
        srand(time(0)) ; // to generate random number everytime
        int y = rand() % 4 ;
        if (s[y][x] == " " ) {
            s[y][x] = comp ;
            break;
        }
    }
}
// next thing is write checker
void cheker(string s[3][3],string &cond) {
    // horizontal check
    if (s[0][0] == "O" && s[0][1] == "O" && s[0][2] == "O"  ) {
        cond = "O";
    } else if (s[1][0] == "O" && s[1][1] == "O" && s[1][2] == "O"  ) {
        cond = "O" ;
    } else if (s[2][0] == "O" && s[2][1] == "O" && s[2][2] == "O"  ) {
        cond = "O";
        // vertical check
    } else if (s[0][0] == "O" && s[1][0] == "O" && s[2][0] == "O"  ) {
        cond = "O";
    } else if (s[0][1] == "O" && s[1][1] == "O" && s[2][1] == "O"  ) {
        cond = "O";
    } else if (s[0][2] == "O" && s[1][2] == "O" && s[2][2] == "O"  ) {
        cond = "O";
        // diagonal check
    } else if (s[0][0] == "O" && s[1][1] == "O" && s[2][2] == "O"  ) {
        cond = "O";
    } else if (s[2][0] == "O" && s[1][1] == "O" && s[0][2] == "O"  ) {
        cond = "O";



        // check for x
    }else if (s[0][0] == "X" && s[0][1] == "X" && s[0][2] == "X"  ) {
        cond = "X";
    } else if (s[1][0] == "X" && s[1][1] == "X" && s[1][2] == "X"  ) {
        cond = "X" ;
    } else if (s[2][0] == "X" && s[2][1] == "X" && s[2][2] == "X"  ) {
        cond = "X";
        // vertical check
    } else if (s[0][0] == "X" && s[1][0] == "X" && s[2][0] == "X"  ) {
        cond = "X";
    } else if (s[0][1] == "X" && s[1][1] == "X" && s[2][1] == "X"  ) {
        cond = "X";
    } else if (s[0][2] == "X" && s[1][2] == "X" && s[2][2] == "X"  ) {
        cond = "X";
        // diagonal check
    } else if (s[0][0] == "X" && s[1][1] == "X" && s[2][2] == "X"  ) {
        cond = "X";
    } else if (s[2][0] == "X" && s[1][1] == "X" && s[0][2] == "X"  ) {
        cond = "X";
    } else {
        cond = " " ;
    }
    bool fil = true ;
    for (int i = 0 ; i < 3 ; ++i ) {
        for (int j = 0 ; j < 3 ; ++j) {
            if ( s[i][j] == " ") {
                fil = false ;
            }
        }
    }
    if (fil == true  && cond == " ") {
        cond = "Tie" ;
    }
}
