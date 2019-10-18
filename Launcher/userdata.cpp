#include "userdata.h"

userData::userData()
{
    fName = "null";
    lName = "null";
    email = "null";
    phoneNumber = "null";
    userId = "null";
    password = "null";
    rank = 0;
    secureEmailGateway = 0;
    dataEncryption = 0;
    serverSecurity = 0;
}
 userData::userData(string b, string first, string last, string e, string phone, string user,
                    string pass, int r, int se, int de, int ss)
 {   businessName = b;
     fName = first;
     lName = last;
     email = e;
     phoneNumber = phone;
     userId = user;
     password = pass;
     rank = r;
     secureEmailGateway = se;
     dataEncryption = de;
     serverSecurity = ss;
 }
 void userData::setfName(string first)
 {
     fName = first;
 }
 void userData::setlName(string last)
 {
     lName = last;
 }
 void userData::setEmail(string e)
 {
     email = e;
 }
 void userData::setPhoneNumber(string phone)
 {
     phoneNumber = phone;
 }
 void userData::setUserId(string user)
 {
     userId = user;
 }
 void userData::setPassword(string pass)
 {
     password = pass;
 }
 void userData::setRank(int r)
 {
     rank = r;
 }
 void userData::setsecureEmailGateway(int e)
 {
     secureEmailGateway = e;
 }
 void userData::setdataEncryption(int d)
 {
     dataEncryption = d;
 }
 void userData::setserverSecurity(int s)
 {
     serverSecurity = s;
 }

 void userData::getfName(string& first) const
 {
     first = fName;
 }
 void userData::getlName(string& last) const
 {
     last = lName;
 }
 void userData::getEmail(string& e) const
 {
     e = email;
 }
 void userData::getPhoneNumber(string& phone) const
 {
     phone = phoneNumber;
 }
 void userData::getUserId(string& user) const
 {
     user = userId;
 }
 void userData::getPassword(string& pass) const
 {
     pass = password;
 }
 void userData::getRank(int& r) const
 {
     r = rank;
 }
 void userData::getsecureEmailGateway(int &e) const
 {
     e = secureEmailGateway;
 }
 void userData::getdataEncryption(int &d) const
 {
     d = dataEncryption;
 }
 void userData::getserverSecutiy(int &s) const
 {
     s = serverSecurity;
 }
 void userData::incUserCount()
 {
     userCount++;
 }
 void userData::decUserCount()
 {
     userCount--;
 }

 void userData::setBusinessName(string business)
 {
     businessName = business;
 }
 void userData::getBusinessName(string& business) const
 {
     business = businessName;
 }

 adminData::adminData()
 {
    userData::setfName("null");
    userData::setlName("null");
    userData::setEmail("null");
    userData::setPhoneNumber("null");
    userData::setUserId("null");
    userData::setPassword("null");
    userData::setRank(1);
    userData::setsecureEmailGateway(0);
    userData::setdataEncryption(0);
    userData::setserverSecurity(0);
 }
 adminData::adminData(string b, string first, string last, string e, string phone,
           string user, string pass, int r,  int se, int de, int ss)
     :userData(b, first, last, e, phone, user, pass,r, se, de, ss)
{
    int rank;
    userData::getRank(rank);
    rank = 1;
    userData::setRank(rank);

}

