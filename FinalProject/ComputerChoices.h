#pragma once
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <time.h>

void showBoard(char *);
int winCheck(char *, char&, char&);
bool winTry(char *, char&, char&);
bool blockUser(char *, char&, char&);
bool chooseRandSpace(char *, char&, char&);
bool chooseLogicalSpace(char *, char&, char&);
