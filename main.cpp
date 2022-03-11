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
  text = "I'm so tireddddd~";
  key = "sleep";
  std::string decryptedC = decryptCaesar(encryptCaesar(text, shift), shift);
  std::string decryptedV = decryptVigenere(encryptVigenere(text, key), key);

  std::cout << "\n\nPlain text: " << text << std::endl;

  std::cout << "\n== Caesar ==\nshift: " << shift << std::endl;
  std::cout << "Cipher text: " << encryptCaesar(text, shift) << std::endl;
  std::cout << "Decrypted: " << decryptedC << std::endl;

  std::cout << "\n\n== Vigenere ==\nkeyword: " << key << std::endl;
  std::cout << "Cipher text: " << encryptVigenere(text, key) << std::endl;
  std::cout << "Decrypted: " << decryptedV << std::endl;

  text = "Time to sleep :)";
  key = "hardwork";
  shift = 21;
  decryptedC = decryptCaesar(encryptCaesar(text, shift), shift);
  decryptedV = decryptVigenere(encryptVigenere(text, key), key);

  std::cout << "\n\nPlain text: " << text << std::endl;

  std::cout << "\n== Caesar ==\nshift: " << shift << std::endl;
  std::cout << "Cipher text: " << encryptCaesar(text, shift) << std::endl;
  std::cout << "Decrypted: " << decryptedC << std::endl;

  std::cout << "\n\n== Vigenere ==\nkeyword: " << key << std::endl;
  std::cout << "Cipher text: " << encryptVigenere(text, key) << std::endl;
  std::cout << "Decrypted: " << decryptedV << std::endl;
  
  return 0;
}
