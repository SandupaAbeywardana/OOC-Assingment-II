#include "Buyer.h"
#include "Land.h"
#include <cstring>
#include <iostream>
using namespace std;

void Buyer::setBDetails(int bID, const char bName[], const char bEmail[],
                        const char bContact[]) {
  buyerID = bID;
  strcpy(buyerName, bName);
  strcpy(buyerEmail, bEmail);
  strcpy(buyerContactNo, bContact);
}

void Buyer::viewBDetails() {
  cout << "Buyer ID = " << buyerID << endl;
  cout << "Buyer Name = " << buyerName << endl;
  cout << "Buyer Email = " << buyerEmail << endl;
  cout << "Buyer Contact Number = " << buyerContactNo << endl << endl;
}

void Land::viewLDetails() {
  cout << "Land ID = " << landID << endl;
  cout << "Land Location = " << landLocation << endl;
  cout << "Land Price = " << landPrice << endl;
  cout << "Land Size = " << landSize << endl << endl;
}