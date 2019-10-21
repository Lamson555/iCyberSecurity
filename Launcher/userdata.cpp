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
}
 userData::userData(string first, string last, string e, string phone, string user,
                    string pass, int r)
 {
     fName = first;
     lName = last;
     email = e;
     phoneNumber = phone;
     userId = user;
     password = pass;
     rank = r;
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
 void userData::incUserCount()
 {
     userCount++;
 }
 void userData::decUserCount()
 {
     userCount--;
 }

 ownerData::ownerData()
 {
    userData::setfName("null");
    userData::setlName("null");
    userData::setEmail("null");
    userData::setPhoneNumber("null");
    userData::setUserId("null");
    userData::setPassword("null");
    userData::setRank(1);
 }
 ownerData::ownerData(string b, string first, string last, string e, string phone,
           string user, string pass, int r)
     :userData(first, last, e, phone, user, pass,r)
{
    int rank;
    businessName = b;
    userData::getRank(rank);
    rank = 1;
    userData::setRank(rank);

}
 void ownerData::setBusinessName(string business)
 {
     businessName = business;
 }
 void ownerData::getBusinessName(string& business) const
 {
     business = businessName;
 }
