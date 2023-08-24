//#ifndef IMAGE_H
//#define IMAGE_H
#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include "Misc.h"
using namespace std;

class Image{
private:
  int width, height; //const?
  vector<vector<Color>> pic;
public:
  Image(int width_, int height_, Color c);
  void setPixel(int w, int h, Color c);
  Color getPixel(int w, int h);
  void writeToFile(string filename);
};
//#endif