#include <iostream>
#include "caesar.h"

int main()
{
  //Task B
  std::string text = "Hi";
  std::cout << "Plain text: " << text << std::endl;
  
  int shift = 4;
  std::cout << "Shift: " << shift << std:: endl;

  std::cout << "Cipher text: " << encryptCaesar(text, shift) << "\n" << std::endl;

  text = "Hello, World!";
  std::cout << "Plain text: " << text << std::endl;
  
  shift = 18;
  std::cout << "Shift: " << shift << std:: endl;

  std::cout << "Cipher text: " << encryptCaesar(text, shift) << std::endl;
  
  return 0;
}
