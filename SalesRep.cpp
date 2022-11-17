#include "SalesRep.h"
#include "Seller.h"
#include <cstring>
#include <iostream>
using namespace std;

void SalesRep::viewSDetails()
{
  cout << "Seller ID = " << sellerID << endl;
	cout << "Seller Name = " << sellerName << endl;
	cout << "Seller Email = " << sellerEmail << endl;
	cout << "Seller Contact Number = " << sellerContactN << endl << endl;
}
void SalesRep::viewBDetails()
{
  cout << "Buyer ID = " << buyerID << endl;
	cout << "Buyer Name = " << buyerName << endl;
	cout << "Buyer Email = " << buyerEmail << endl;
	cout << "Buyer Contact Number = " << buyerContactN << endl << endl;
}
void SalesRep::viewLDetails()
{
  cout << "Buyer ID = " << buyerID << endl;
	cout << "Buyer Name = " << buyerName << endl;
	cout << "Buyer Email = " << buyerEmail << endl;
	cout << "Buyer Contact Number = " << buyerContactN << endl << endl;
}
void SalesRep::viewAppDetails()
{
  cout << "" << appID << endl;
  cout << "" << 
}