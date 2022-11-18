#include "Appointment.h"
#include <cstring>
#include <iostream>
using namespace std;

void Appointment::setAppDetails(int appID, int sID, int bID, int lID, int srID, const char appDate [], const char appTime [])
{
	appointmentID = appID;
	sellerID = sID;
	buyerID = bID;
	landID = lID;
  salesrepID = srID;
  strcpy(appointmentDate, appDate);
  strcpy(appointmentTime, appTime);
    
}