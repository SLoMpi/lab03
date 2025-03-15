#ifndef PRINT_HPP
#define PRINT_HPP

#include <string>
#include <ostream>
#include <fstream>

void print(const std::string& text, std::ostream& out);
void print(const std::string& text, std::ofstream& out);

#endif
