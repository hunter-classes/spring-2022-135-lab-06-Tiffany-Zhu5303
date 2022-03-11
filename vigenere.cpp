#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
  char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int index = -1;
  std::string encrypted;
  int loop = 0;
  int asciiCode;

  for(int i = 0; i < plaintext.length(); i++){
    //ascii code to check if char is an alphabet
    asciiCode = plaintext[i];
    //std::cout << asciiCode << plaintext[i]<< std::endl;

    if(asciiCode <= 122 && asciiCode >= 97){
    for(int j = 0; index < 0; j++){
      
      //saves number into the index variable for lowercases
      if(keyword[loop] == alphabet[j]){
	index = j;
	loop++;
      }

    }

    }else if (asciiCode <= 90 && asciiCode >= 65){
      for(int j = 0; index < 0; j++){
      
      //saves number into the index variable for uppercases
      if(keyword[loop] == alphabet[j]){
	index = j;
	loop++;
      }
      }
    }

    //loop through keyword after reaching the end
      if(loop >= keyword.length()){
	loop = 0;
      }

    if(index > -1){
      //std::cout << shiftChar(plaintext[i], index) << std::endl;
      encrypted += shiftChar(plaintext[i], index);
      //std::cout << "this is the index" << index << std::endl;
      index = -1;
    }else{//if it is not an alphabet
      encrypted += shiftChar(plaintext[i], index);
    }
    
  }

  return encrypted;
}
