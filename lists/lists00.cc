#include <iostream>
#include <algorithm>
#include <list>

#define LEARNING_EXPERIENCE 0

using namespace std;

int main() {
  list<char> collection;  // list container for characters

  // append elements from 'a' to 'z';
  for (char c = 'a'; c <= 'z'; ++c) collection.push_back(c);

  for (auto elem : collection)  // range - based FOR loop
    cout << elem << " ";

  cout << endl;

  collection.sort();

  for (auto elem : collection)  // range - based FOR loop
    cout << elem << " ";

  cout << endl;

  collection.sort(std::greater<char>());

  for (auto elem : collection)  // range - based FOR loop
    cout << elem << " ";

  cout << endl;

#if LEARNING_EXPERIENCE
  random_shuffle(collection.begin(), collection.end());

  for (auto elem : collection)  // range - based FOR loop
    cout << elem << " ";

  cout << endl;
#endif

  return 0;
}