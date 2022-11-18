#include "Admin.h"
#include "Buyer.h"
#include "Land.h"
#include "Seller.h"
#include <cstring>
#include <iostream>
using namespace std;

void Buyer::viewBDetails() {
  cout << "Buyer ID = " << buyerID << endl;
  cout << "Buyer Name = " << buyerName << endl;
  cout << "Buyer Email = " << buyerEmail << endl;
  cout << "Buyer Contact Number = " << buyerContactNo << endl << endl;
}

void Seller::viewSDetails() {
  cout << "Seller ID = " << sellerID << endl;
  cout << "Seller Name = " << sellerName << endl;
  cout << "Seller Email = " << sellerEmail << endl;
  cout << "Seller Contact Number = " << sellerContactN << endl << endl;
}

void Land::viewLDetails() {
  cout << "Land ID = " << landID << endl;
  cout << "Land Location = " << landLocation << endl;
  cout << "Land Price = " << landPrice << endl;
  cout << "Land Size = " << landSize << endl << endl;
}