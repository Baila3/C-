#include <iostream>
#include <string>

int main()
{
  double weightE;
  double weightP;
  int number;

  std::cout << "What is your weight on Earth?\n ";
  std::cin >> weightE;
  std::cout << "Choose a number between 1 and 7:\n ";
  std::cin >> number;

  if (weightE == 1)
  {
    weightP = weightE * 0.38;
    planet = "Mercury\n";
  }
  else if (weightE == 2)
  {
    weightP = weightE * 0.91;
    planet = "Venus\n";
  }
  else if (weightE == 3)
  {
    weightP = weightE * 0.38;
    planet = "Mars\n";
  }
  else if (weightE == 4)
  {
    weightP = weightE * 2.34;
    planet = "Jupiter\n";
  }
  else if (weightE == 5)
  {
    weightP = weightE * 1.06;
    planet = "Saturn\n";
  }
  else if (weightE == 6)
  {
    weightP = weight * 0.92;
    planet = "Uranus\n";
  }
  else if (weightE == 7)
  {
    weightP = weightE * 1.19;
    planet = "Neptune\n";
  }
  std::cout << "Your weight on " << planet << " is" << weightP;
}