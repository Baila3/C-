#include <iostream>

std::string is_palindrome(std::string text)
{
  for (int i = text.size(); i > 0; i--)
  {
    return std::cout << text[i];
  }
}

int main()
{

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}