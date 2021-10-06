// advance example
#include <iostream>  // std::cout
#include <iterator>  // std::distance
#include <vector>      // std::list

int main() {
  std::vector<int> myvector;
  for (int i = 0; i < 10; i++) myvector.push_back(i * 10);

  std::vector<int>::iterator first = myvector.begin();
  std::vector<int>::iterator halfway  = first + myvector.size()/2;

  std::cout << "myvector: ";
  for (auto it = myvector.begin(); it != myvector.end(); it++) std::cout << *it << " ";
  std::cout << std::endl;

  std::cout << "The distance is: " << std::distance(first, halfway) << '\n';

  return 0;
}