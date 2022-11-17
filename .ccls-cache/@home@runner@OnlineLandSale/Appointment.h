#pragma once

Class Appointment
{
  private :
      int appointmentID; 
      int sellerID;
      int buyerID;
      int landID;
      int salesrepID;
      char appointmentDate[10];
      char appointmentTime[10];
  
  public :
    void setAppDetails(int appID, int sID, int bID, int lID, int srID, const char appDate [], const char appTime []);

};