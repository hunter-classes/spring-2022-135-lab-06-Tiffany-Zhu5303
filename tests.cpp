#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("uppercase shift"){
  CHECK(shiftChar('E', 4) == 'I');
  CHECK(shiftChar('C', 18) == 'U');
  CHECK(shiftChar('T', 53) == 'U');
}

TEST_CASE("lowercase shift"){
  CHECK(shiftChar('z', 3) == 'c');
  CHECK(shiftChar('f', 10) == 'p');
  CHECK(shiftChar('n', 22) == 'j');
}

TEST_CASE("short phrases"){
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK(encryptCaesar("I'm tired", 2) == "K'o vktgf");
  CHECK(encryptCaesar("I seriously can't count :(", 14) == "W gsfwcigzm qob'h qcibh :(");
}

TEST_CASE("vigenere word"){
  CHECK(encryptVigenere("Spare", "me") == "Etmvq");
  CHECK(encryptVigenere("Pool", "table") == "Iopw");
}

TEST_CASE("longer vigenere"){
  CHECK(encryptVigenere("Tiffany Zhu", "name") == "Girjnnk Duu");
  CHECK(encryptVigenere("I want to sleep ;-;", "please") == "X henl xd dpewt ;-;");
}

TEST_CASE("decrypt Caesar"){
  CHECK(decryptCaesar("Drsc sc k bkxnyw coxdoxmo.", 10) == "This is a random sentence.");
  CHECK(decryptCaesar("Jxyi yi jqaydw jee bedw -_-", 16) == "This is taking too long -_-");
}

TEST_CASE("decrypt Vigenere"){
  CHECK(decryptVigenere("P fvqv nptmg", "hungry") == "I like pizza");
  CHECK(decryptVigenere("Tghhxy mcdxivfy", "butter") == "Smooth likeeeee");
}

