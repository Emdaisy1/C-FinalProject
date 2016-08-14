#pragma once
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <time.h>

void showBoard(char *);
int winCheck(char *, char&, char&);
bool winTry(char *);
bool blockUser(char *);
bool choseRandSpace(char *);
bool choseLogicalSpace(char *);
void computerMove(char *);