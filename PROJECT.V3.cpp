#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

int lowE, A, D, G, B, highE, offset=0, debug;
int acci, chord, tune, loop;
int tune1=0, tune2=0, tune3=0, tune4=0, tune5=0, tune6=0;
char note, more;
string m = "major";
string a = "";


void tuning(){
    offset = 0; //change this if there's another tunings
}

void check() {
    if (note == 'A' || note == 'B' || note == 'H' || note == 'C' ||
    note == 'D'|| note == 'E' || note == 'F' || note == 'G') {
         cout << "Note " << note << " selected\n" << endl;
     } else { 
        debug = 1;
        more = 'Y';
        cout << "Invalid input. Please use the given alphabets." << endl;
    }
}

void chordBaseC() {
highE = 0+tune1;
B =     1+tune2;
G =     0+tune3;
D =     2+tune4;
A =     3+tune5;
lowE =  0+tune6;
tuning();
    
    if (note == 'A') { offset = offset+9;}
    else if (note == 'B') { offset = offset+10;}
    else if (note == 'C') { offset = offset+0;}
    else if (note == 'D') { offset = offset+2;}
    else if (note == 'E') { offset = offset+4;}
    else if (note == 'F') { offset = offset+5;}
    else if (note == 'G') { offset = offset+7;}
    else { debug = 1; }
    
    if (acci == 1) {} // no changes needed
    else if (acci == 2) { offset++; a = "#"; } // change for sharp
    else if (acci == 3) { offset--; a = "b"; } //changes for flat
    
    if (chord == 1) {} // no changes needed
    else if (chord == 2) { D--, m = "minor";}
    
    if (offset < 0) { offset = offset + 12; }

    cout << "|e|-x"<< "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-x"<< "-\n" << endl;
    cout << "*******************" << endl;
    
    tuning();
    return;
} //baseC

void chordBaseA() {
highE = 0+tune1;
B =     2+tune2;
G =     2+tune3;
D =     2+tune4;
A =     0+tune5;
lowE =  0+tune6;
tuning();
    
    if (note == 'A') { offset = offset+0;}
    else if (note == 'B') { offset = offset+2;}
    else if (note == 'C') { offset = offset+3;}
    else if (note == 'D') { offset = offset+5;}
    else if (note == 'E') { offset = offset+7;}
    else if (note == 'F') { offset = offset+8;}
    else if (note == 'G') { offset = offset+10;}
    else { debug = 1; }
    
    if (acci == 1) {} // no changes needed
    else if (acci == 2) { offset++; a = "#"; } // change for sharp
    else if (acci == 3) { offset--; a = "b"; } //changes for flat
    
    if (chord == 1) {} // no changes needed
    else if (chord == 2) { B--, m = "minor";}
    
    if (offset < 0) { offset = offset + 12; }

    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-x"<< "-\n" << endl;
    cout << "*******************" << endl;
    
    tuning();
    return;
} //baseA

void chordBaseG() {
highE = 3+tune1;
B =     0+tune2;
G =     0+tune3;
D =     0+tune4;
A =     2+tune5;
lowE =  3+tune6;
    
    if (note == 'A') { offset = offset+2;}
    else if (note == 'B') { offset = offset+4;}
    else if (note == 'C') { offset = offset+5;}
    else if (note == 'D') { offset = offset+7;}
    else if (note == 'E') { offset = offset+9;}
    else if (note == 'F') { offset = offset+10;}
    else if (note == 'G') { offset = offset+0;}
    else { debug = 1; }
    
    if (acci == 1) {} // no changes needed
    else if (acci == 2) { offset++; a = "#"; } // change for sharp
    else if (acci == 3) { offset--; a = "b"; } //changes for flat
    
    if (chord == 1) {} // no changes needed
    else if (chord == 2) { A--, m = "minor";}
    
    if (offset < 0) { offset = offset + 12; }
    
    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-" << lowE + offset << "-\n" << endl;
    cout << "*******************" << endl;
    
    tuning(); //returns offset value
    return;
} //baseG

void chordBaseE() {
highE = 0+tune1;
B =     0+tune2;
G =     1+tune3;
D =     2+tune4;
A =     2+tune5;
lowE =  0+tune6;
    
    if (note == 'A') { offset = offset+5;}
    else if (note == 'B') { offset = offset+7;}
    else if (note == 'C') { offset = offset+8;}
    else if (note == 'D') { offset = offset+10;}
    else if (note == 'E') { offset = offset+0;}
    else if (note == 'F') { offset = offset+2;}
    else if (note == 'G') { offset = offset+3;}
    else { debug = 1; }
    
    if (acci == 1) {} // no changes needed
    else if (acci == 2) { offset++; a = "#"; } // change for sharp
    else if (acci == 3) { offset--; a = "b"; } //changes for flat
    
    if (chord == 1) {} // no changes needed
    else if (chord == 2) { G--, m = "minor";}
    
    if (offset < 0) { offset = offset + 12; }
    
    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-" << A + offset << "-" << endl;
    cout << "|E|-" << lowE + offset << "-\n" << endl;
    cout << "*******************" << endl;
    
    tuning(); //returns offset value
    return;
} //baseE

void chordBaseD() {
highE = 3+tune1;
B =     4+tune2;
G =     3+tune3;
D =     0+tune4;
    
    if (note == 'A') { offset = offset+7;}
    else if (note == 'B') { offset = offset+9;}
    else if (note == 'C') { offset = offset+10;}
    else if (note == 'D') { offset = offset+0;}
    else if (note == 'E') { offset = offset+2;}
    else if (note == 'F') { offset = offset+3;}
    else if (note == 'G') { offset = offset+5;}
    else { debug = 1; }
    
    if (acci == 1) {} // no changes needed
    else if (acci == 2) { offset++; a = "#"; } // change for sharp
    else if (acci == 3) { offset--; a = "b"; } //changes for flat
    
    if (chord == 1) {} // no changes needed
    else if (chord == 2) { highE--, m = "minor";}
    
    if (offset < 0) { offset = offset + 12; }
    
    cout << "|e|-" << highE + offset << "-" << endl;
    cout << "|B|-" << B + offset << "-" << endl;
    cout << "|G|-" << G + offset << "-" << endl;
    cout << "|D|-" << D + offset << "-" << endl;
    cout << "|A|-x" << "-" << endl;
    cout << "|E|-x" << "-\n" << endl;
    cout << "*******************" << endl;
    
    tuning(); //returns offset value
    return;
} //baseD

void clear(){
    loop = 0;
    debug = 0;
    a = "";
    m = "major";
}

int main()
{
    note = 0;
    debug = 0;
    more = 'Y';
    
    do {
        clear();
        
        cout << "Choose a note:" << endl;
        cout << "[A] [B/H] [C] [D] [E] [F] [G]" << endl;
        cin >> note;
    
        if(islower(note)) { note = toupper(note); } // change letter to upper case
        
        check(); // checks correct input
        if (debug == 1) { continue; } // Skip to next iteration if invalid
    
        cout << "Natural, sharp or flat?" << endl;
        cout << "[1] " << note << endl;
        cout << "[2] " << note << "#" << endl;
        cout << "[3] " << note << "b" << endl;
        cin >> acci;
        
        if (cin.fail()) { // skips non-int input and prevents program going nuts
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input. Please use the given numbers.\n" << endl;
            continue; 
        }
        
        if (acci >= 4) {
            cout << "\nInvalid input. Please use the given numbers.\n" << endl;
            continue; // starts loop from the begining
        }
        
        cout << note << a << " selected" << endl;
        cout << "\n[1] Major or [2] Minor?" << endl;
        cin >> chord;
        
        if (cin.fail()) { // skips non-int input and prevents program going nuts
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input. Please use the given numbers.\n" << endl;
            continue; 
        }
        
        if (chord >= 3) {
            cout << "\nInvalid input. Please use the given numbers.\n" << endl;
            continue; 
        } 
    
        if (note == 'E' || note == 'F') {
            cout << "*******************" << endl;
            cout << "" << note << a << " " << m << ":" << endl;
            cout << "*******************" << endl;
            chordBaseE();
            chordBaseA();
            chordBaseC();
            chordBaseD();
            chordBaseG();
        } else if (note == 'A' || note == 'B' || note == 'H') {
            cout << "*******************" << endl;
            cout << "" << note << a << " " << m << ":" << endl;
            cout << "*******************" << endl;
            chordBaseA();
            chordBaseE();
            chordBaseC();
            chordBaseD();
            chordBaseG();
        } else  if (note == 'C') {
            cout << "*******************" << endl;
            cout << "" << note << a << " " << m << ":" << endl;
            cout << "*******************" << endl;
            chordBaseC();
            chordBaseA();
            chordBaseE();
            chordBaseD();
            chordBaseG();
        } else if (note == 'G') {
            cout << "*******************" << endl;
            cout << "" << note << a << " " << m << ":" << endl;
            cout << "*******************" << endl;
            chordBaseG();
            chordBaseE();
            chordBaseA();
            chordBaseC();
            chordBaseD();
        } else if (note == 'D') {
            cout << "*******************" << endl;
            cout << "" << note << a << " " << m << ":" << endl;
            cout << "*******************" << endl;
            chordBaseD();
            chordBaseA();
            chordBaseE();
            chordBaseC();
            chordBaseG();
        }
        
        cout << "Would you like to learn another chord? [Y] [N]" << endl;
        cin >> more; // no need to change the input to capital
    } while (more == 'Y' || more == 'y');
    
    return 0;
}