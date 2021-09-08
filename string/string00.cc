#include <iostream>
#include <string>

using namespace std;

int
main()
{
    string test;
    cout << "test = " << test << endl;

    test = "word test";
    cout << "test = " << test << endl;

    string testtest = test + test;
    cout << "test + test = " << testtest << endl;

    if(test == testtest)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}