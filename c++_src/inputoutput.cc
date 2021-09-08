#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = -16;
    double d = 3.14159;

    // pad the first column to use a minimum of 12 positions in the output
    cout << "i: " << setw(12) << i << "next col" << endl;
    cout << "d: " << setw(12) << d << "next col" << endl;

    // pad the first column and left-justify all columns
    cout << left << "i: " << setw(12) << i << "next col" << endl;
    cout << "d: " << setw(12) << d << "next col" << endl;
    // restore normal justification
    cout << right;

    cout << internal;
    cout << "i: " << setw(12) << i << "next col" << endl;
    cout << "d: " << setw(12) << d << "next col" << endl;

    // pad the first column, using # as the pad character
    cout << setfill('#');
    cout << "i: " << setw(12) << i << "next col" << endl;
    cout << "d: " << setw(12) << d << "next col" << endl;
    // restore the normal pad character
    cout << setfill(' ');

    return 0;
}