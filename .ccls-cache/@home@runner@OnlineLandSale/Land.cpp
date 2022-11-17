#include "Land.h"
#include <cstring>
#include <iostream>
using namespace std;

void Land::setLDetails(int lID, const char lLocation[], int lPrice, const char lSize[])
{
	landID = lID;
	strcpy_s(landLocation, lLocation);
	strcpy_s(landPrice, lPrice);
	strcpy_s(landSize, lSize);
}

void Land::viewLDetails()
{
  cout << "Land ID = " << landID << endl;
	cout << "Land Location = " << landLocation << endl;
	cout << "Land Price = " << landPrice << endl;
	cout << "Land Size = " << landContactN << endl << endl;
}