#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using std::cout;
using std::vector;

bool isID(const std::string &str);
bool isComment(const std::string &str);
bool isDigit(const std::string &str);
bool isString(const std::string &str);
bool isBool(const std::string &str);
bool isNUM(const std::string &str);
bool isBasetype(const std::string &str);
bool isFor(const std::string &str);
bool isOperator(const std::string &str);
bool isSeparator(const std::string &str);
bool isNotLegal(const std::string &str);
bool isEqual(const std::string &str);
bool isGreaterThan(const std::string &str);
bool isMult(const std::string &str);
bool isDivision(const std::string &str);
bool isPlus(const std::string &str);
bool isMinus(const std::string &str);
bool isEqualEqual(const std::string &str);
bool isLessThan(const std::string &str);
bool isLeftBracket(const std::string &str);
bool isRightBracket(const std::string &str);
bool isRightPar(const std::string &str);
bool isLeftPar(const std::string &str);
bool isSemicolon(const std::string &str);
bool isWhile(const std::string &str);
bool isComma(const std::string &str);
void printToken(const vector<std::string>& tokens);
void runLA(const std::string &nameOfFile);
