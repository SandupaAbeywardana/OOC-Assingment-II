#include "Seller.h"
#include <cstring>
#include <iostream>
using namespace std;

void Seller::setSDetails(int sID, const char sName[], const char sEmail[], const char sContact[])
{
	sellerID = sID;
	strcpy_s(sellerName,sName);
	strcpy_s(sellerEmail, sEmail);
	strcpy_s(sellerContactN, sContact);
}

void Seller::viewSDetails()
{
	cout << "Seller ID = " << sellerID << endl;
	cout << "Seller Name = " << sellerName << endl;
	cout << "Seller Email = " << sellerEmail << endl;
	cout << "Seller Contact Number = " << sellerContactN << endl << endl;
}

void Seller::viewAppDetails()
{
}