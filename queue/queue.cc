#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> q;

    // insert three elements into the queue
    q.push("Bob");
    q.push("Sue");
    q.push("Tim");

    // read and print two elements from the queue
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();

    // insert two new elements
    q.push("Jasper");
    q.push("Homer");

    // skip one element
    q.pop(); // alien abduction

    // read and print two elements
    cout << q.front();
    q.pop();
    cout << q.front() << endl;
    q.pop();

    // print number of elements in the queue
    cout << "How many people are waiting in line: " << q.size()
         << endl;
}