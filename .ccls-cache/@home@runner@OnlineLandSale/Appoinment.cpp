#include "Appointment.h"
#include <cstring>
#include <iostream>
using namespace std;

void Appointment::setSDetails(int appID, int sID, int bID, int lID, int srID, const char appDate [], const char appTime [])
{
	appID = A_ID;
	sID = S_ID;
	bID = B_ID;
	lID = L_ID;
  srID = SR_ID;
  strcpy_s(appDate, A_date);
  strcpy_s(appTime, A_time);
    
}


