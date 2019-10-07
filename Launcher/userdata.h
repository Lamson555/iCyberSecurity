#ifndef USERDATA_H
#define USERDATA_H
#include <iomanip>
#include <string>

using namespace std;

// Class userData is the base class for all the user's information.
// It will contain all the common information needed for all types
// of the users, interacting with the application.
class userData
{
private:
    string fName;       //string variable to store user's first name
    string lName;       //string variable to store user's last name
    string email;       //string variable to store user's email
    string phoneNumber; //string variable to store user's phone number
    string userId;      //string varuable to store user's userID
    string password;    //string variable to store user's password

    int userCount;
    // userCount is a variable of type int; it will be used to keep count of
    // the total number of users using the application.
    // userCount will only be used with increment and decrement operations.
    int rank;
    // int rank will be used as a method to develop a heirarchy. Such that depending on the
    // interface you create your account you will be assigned a corresponding rank.
    //              Example: rank = 1; Admin / Owner
    //                       rank = 2; Employee
    //                       rank = 3; Customer
    //                       rank = 0; Null (will have no access to any operations)
public:
    userData();
    //default constructor of the class, will set all variables to null
    userData(string f, string l, string e, string p, string u, string pass, int r);
    //constructor using special parameters, taking string fName, string lName, string email
    // string phoneNumber, string userId, string password, and an int rank.
    void setfName (string f);
    //Set the first name of the user
    void setlName (string l);
    // set the last name of the user
    void setEmail (string e);
    // set the email of the user
    void setPhoneNumber(string p);
    // set the phone number of the user
    void setUserId (string u);
    // set the userId of the user
    void setPassword (string pass);
    // set the password of the user
    void setRank (int r);
    // set the rank of the user

    void getfName (string& f) const;
    // get the first name of the user
    void getlName (string& l) const;
    // get the last name of the user
    void getEmail (string& e) const;
    // get the email of the user
    void getPhoneNumber (string& p) const;
    // get the phone number of the user
    void getUserId (string& u) const;
    // get the userId of the user
    void getPassword (string& pass) const;
    // get the password of the user
    void getRank (int& r)const;
    // get the rank of the user

    void incUserCount();
    // function to increment the userCount variable
    void decUserCount();
    //function to decrement the userCount variable

    //~userData();
    //destructor for the class, will delete the object once it is out of scope.
    //void print();
    // print function for the class. Will print all necessary information
    // related to the class neatly.
};

class ownerData: public userData
/* Class ownerData is derived from class userData, its purpose
 * is to add additional information to user's whom create an
 * account as an owner of a business. Such as the name of their
 * business. */

{
private:
    string businessName;    //string variable to store the owner's business name
public:
    ownerData();
    //default constructor of the derived class
    ownerData(string b, string first, string last, string e, string phone,
              string user, string pass, int r);
    //constructor using parameters from the base and derived class, it will
    //call the base constructor in the function defenition.
    void setBusinessName(string b);
    //set the name of the business of the owner
    void getBusinessName(string& b)const;
    //get the name of the business of the owner.
};

#endif // USERDATA_H
