#include "Land.h"
#include <cstring>
#include <iostream>
using namespace std;

void Land::setLDetails(int lID, const char lLocation[], int lPrice,
                       const char lSize[]) {
  landID = lID;
  strcpy(landLocation, lLocation);
  landPrice = lPrice;
  strcpy(landSize, lSize);
}

void Land::viewLDetails() {
  cout << "Land ID = " << landID << endl;
  cout << "Land Location = " << landLocation << endl;
  cout << "Land Price = " << landPrice << endl;
  cout << "Land Size = " << landSize << endl << endl;
}