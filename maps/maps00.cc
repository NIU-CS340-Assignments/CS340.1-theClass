// constructing maps
#include <iostream>
#include <map>

using namespace std;

bool fncomp(char lhs, char rhs) { return lhs > rhs; }

struct classcomp {
  bool operator()(const char &lhs, const char &rhs) const { return lhs > rhs; }
};

void printMap(map<char, int> &m) {
  auto mapPtr = m.cbegin();

  while (mapPtr != m.cend()) {
    cout << mapPtr->first << ": " << mapPtr->second << endl;
    mapPtr++;
  }  // End of WHILE
}  // End of printMap

void printMap(map<char, int, classcomp> &m) {
  auto mapPtr = m.cbegin();

  while (mapPtr != m.cend()) {
    cout << mapPtr->first << ": " << mapPtr->second << endl;
    mapPtr++;
  }  // End of WHILE

}  // End of printMap

void printMap(map<char, int, bool (*)(char, char)> &m) {
  auto mapPtr = m.cbegin();

  while (mapPtr != m.cend()) {
    cout << mapPtr->first << ": " << mapPtr->second << endl;
    mapPtr++;
  }  // End of WHILE

}  // End of printMap

int main() {
  std::map<char, int> first;

  first['a'] = 10;
  first['b'] = 50;
  first['c'] = 70;
  first['d'] = 30;

  std::map<char, int> second(first.begin(), first.end());

  std::map<char, int> third(second);

// class as Compare
  std::map<char, int, classcomp> fourth;
  fourth['a'] = 10;
  fourth['b'] = 50;

  bool (*fn_pt)(char, char) = fncomp;
  // function pointer as Compare
  std::map<char, int, bool (*)(char, char)> fifth(fn_pt);  
  fifth['a'] = 10;
  fifth['b'] = 50;
  fifth['c'] = 70;
  fifth['d'] = 30;

  cout << endl << " First " << endl;
  printMap(first);
  cout << endl << " Second " << endl;
  printMap(second);
  cout << endl << " Third " << endl;
  printMap(third);
  cout << endl << " Fourth " << endl;
  printMap(fourth); 
  cout << endl << " Fifth " << endl;
  printMap(fifth);

  return 1;
}
