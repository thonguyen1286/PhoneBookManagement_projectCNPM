#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Contact {
private:
    string id;
    string name;
    string phone;
    string email;
    string address;
    string group;
    bool isFavorite;
    bool isBlocked;
    string note;

public:
    Contact();
    Contact(string id, string name, string phone, string email, string address, string group, string note);

    string getId() const;
    string getName() const;
    string getPhone() const;
    string getEmail() const;
    string getAddress() const;
    string getGroup() const;
    bool getIsFavorite() const;
    bool getIsBlocked() const;
    string getNote() const;

    void setName(string name);
    void setPhone(string phone);
    void setEmail(string email);
    void setAddress(string address);
    void setGroup(string group);
    void setFavorite(bool isFavorite);
    void setBlocked(bool isBlocked);
    void setNote(string note);

    string toString();
    void displayRaw();
    void displayDetail();
};

#endif
