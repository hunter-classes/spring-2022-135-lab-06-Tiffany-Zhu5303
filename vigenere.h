#pragma once

std::string encryptVigenere(std::string plaintext, std::string keyword);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
