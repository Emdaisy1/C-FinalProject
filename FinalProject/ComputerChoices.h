#pragma once
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void showBoard(char *);
int winCheck(char *, char&, char&);
bool winTry(char *);
bool blockUser(char *);
void computerMove(char *);