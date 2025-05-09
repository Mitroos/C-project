#include <iostream>
#include <string>
using namespace std;

int lowE, A, D, G, B, highE, offset, debug;
int acci, chord, tune;
int tune1=0, tune2=0, tune3=0, tune4=0, tune5=0, tune6=0,
char note, more;
string m = "major";
string a = "";

void chordBaseE() {
highE = 0+tune1;
B =     0+tune2;
G =     1+tune3;
D =     2+tune4;
A =     2+tune5;
lowE =  0+tune6;
    
    if (note == 'A') { offset = 5;}
    else if (note == 'B') { offset = 7;}
    else if (note == 'C') { offset = 8;}
    else if (note == 'D') { offset = 10;}
    else if (note == 'E') { offset = 0;}
    else if (note == 'F') { offset = 2;}
    else if (note == 'G') { offset = 3;}
    else { debug = 1; }
    
    if (acci == 2) { offset++; a = "#";}
    else if (acci == 3) { offset--; a = "b";}
    
    if (chord == 2) {
        G--; 
        m = "minor";
    }
    
    if (debug == 1) { cout << "Invalid input" << endl; }
    else {
    cout << "" << note << a << " " << m << ":" << endl;
    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-" << lowE + offset << "-\n" << endl;
    }
    return;
} //baseE

void chordBaseA() {
highE = 0+tune1;
B =     2+tune2;
G =     2+tune3;
D =     2+tune4;
A =     0+tune5;
lowE =  0+tune6;
    
    if (note == 'A') { offset = 0;}
    else if (note == 'B') { offset = 2;}
    else if (note == 'C') { offset = 3;}
    else if (note == 'D') { offset = 5;}
    else if (note == 'E') { offset = 7;}
    else if (note == 'F') { offset = 8;}
    else if (note == 'G') { offset = 10;}
    else { debug = 1; }
    
    if (acci == 2) { offset++; a = "#";}
    else if (acci == 3) { offset--; a = "b";}
    
    if (chord == 2) {
        G--; 
        m = "minor";
    }
    
    if (debug == 1) { cout << "Invalid input" << endl; 
    } else {
    cout << "" << note << a << " " << m << ":" << endl;
    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-x" << "-\n" << endl;
    }
    return;
} //baseA

int main()
{
note = 0;
debug = 0;
    
    do {
        cout << "Choose a note:" << endl;
        cout << "[A] [B] [C] [D] [E] [F] [G]" << endl;
        cin >> note;
    
        if(islower(note)) // change letter to upper case
        { note = toupper(note); }
    
        cout << "Note " << note << " selected\n" << endl;
    
        cout << "Natural, sharp or flat?" << endl;
        cout << "[1] " << note << endl;
        cout << "[2] " << note << "#" << endl;
        cout << "[3] " << note << "b" << endl;
        cin >> acci;
        
        cout << note << a << " selected" << endl;
        cout << "\n[1] Major or [2] Minor?" << endl;
        cin >> chord;
    
        if (note == 'E' || note == 'F') {
            chordBaseE();
            chordBaseA();
        }
        else if (note == 'A' || note == 'B') {
            chordBaseA();
            chordBaseE();
        } else {
            chordBaseE();
            chordBaseA();
        }
        cout << "Would you like to learn another code?" << endl;
        cin >> more;
    } while (more == 'Y' || more == 'y');
    return 0;
}