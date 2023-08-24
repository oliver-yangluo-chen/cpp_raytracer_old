#include "Image.h"
using namespace std;

Image::Image(int width_, int height_, Color c):
  width(width_), height(height_) {
  pic = vector<vector<Color>>(height, vector<Color>(width, c));
}

void Image::setPixel(int w, int h, Color c){
  pic[h][w] = c;
}

Color Image::getPixel(int w, int h){
  return pic[h][w];
}

void Image::writeToFile(string filename){
  ofstream fout(filename);

  fout << "P3" << endl;
  fout << height << " " << width << endl; 
  fout << 255 << endl; //maximum color value

  for(int i = height-1; i >= 0; --i){
    for(int j = 0; j < width; ++j){
      fout << (int)pic[i][j].red << " ";
      fout << (int)pic[i][j].green << " ";
      fout << (int)pic[i][j].blue << endl;
    }
  }
  return;
}