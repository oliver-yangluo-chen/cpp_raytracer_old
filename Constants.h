//#ifndef CONSTANT_H
//#define CONSTANT_H
#pragma once
#include "Misc.h"
using namespace std;

const double PI = 3.14159265358979;
// M_PI


const Color RED = {255, 0, 0};
const Color GREEN = {0, 255, 0};
const Color BLUE = {0, 0, 255};
const Color WHITE = {255, 255, 255};
const Color BLACK = {0, 0, 0};

//testing
double X = 512;
double Y = 512;
double ASPECT = Y/X;
double FOV = PI/2;
Vec3 CAMPOS = {0, 0.5, 0};
Vec3 CAMFORWARD = {0, 0, 1};
Vec3 CAMUP = {0, 1, 0};
bool ANTI_ALIASING = false;
int CYCLES = 40;
double BLUR = 5; //greater is less blur
//#endif