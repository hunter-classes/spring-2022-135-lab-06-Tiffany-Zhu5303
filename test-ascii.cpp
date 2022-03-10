#include <iostream>
#include <string>

std::string ascii(std::string input){
 //char array to hold each letter converted from string
  char letters[input.length()];

  for(int i = 0; i < input.length(); i++){
   //to convert each letter from string to char
    letters[i] = input[i];

     //for the ascii value of each letter
    int letter = letters[i];
    
    std::cout << letters[i] << " " << letter << std::endl;
  }

  return " ";
}
  

int main()
{
  std::string input = "Hello, World";
  std::cout << ascii(input) << std::endl;

  input = "I'm Tiffany Zhu";
  std::cout << ascii(input) << std::endl;
  
  return 0;
}
