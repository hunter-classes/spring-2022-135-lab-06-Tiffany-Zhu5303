#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

  //Task C

  text = "Good night";
  //asume keyword only has lowercase (a-z)
  std::string key = "yoru";

  std::cout << "\nPlain text: " << text << std::endl;
  std::cout << "Keyword: " << key << std::endl;
  std::cout << "Cipher text: " << encryptVigenere(text, key) << std::endl;

  text = "Oh my god -.-";
  key = "maji";
  
  std::cout << "\nPlain text: " << text << std::endl;
  std::cout << "Keyword: " << key << std::endl;
  std::cout << "Cipher text: " << encryptVigenere(text, key) << std::endl;

  //Task D
  
  
  return 0;
}
