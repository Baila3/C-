#include <iostream>
int main()
{
  double miles;
  double kilometers;

  std::cout << "Distance in miles: ";
  std::cin >> miles;

  kilometers = miles * 1.609344;

  std::cout << "There are " << kilometers << " kilometers in " << miles << " miles\n";
}