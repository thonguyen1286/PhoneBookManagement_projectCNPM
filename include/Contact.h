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
---
#include "../include/Contact.h"

Contact::Contact() {
    this->isFavorite = false;
    this->isBlocked = false;
}

Contact::Contact(string id, string name, string phone, string email, string address, string group, string note) {
    this->id = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->address = address;
    this->group = group;
    this->note = note;
    this->isFavorite = false;
    this->isBlocked = false;
}

string Contact::getId() const { return id; }
string Contact::getName() const { return name; }
string Contact::getPhone() const { return phone; }
string Contact::getEmail() const { return email; }
string Contact::getAddress() const { return address; }
string Contact::getGroup() const { return group; }
bool Contact::getIsFavorite() const { return isFavorite; }
bool Contact::getIsBlocked() const { return isBlocked; }
string Contact::getNote() const { return note; }

void Contact::setName(string name) { this->name = name; }
void Contact::setPhone(string phone) { this->phone = phone; }
void Contact::setEmail(string email) { this->email = email; }
void Contact::setAddress(string address) { this->address = address; }
void Contact::setGroup(string group) { this->group = group; }
void Contact::setFavorite(bool isFavorite) { this->isFavorite = isFavorite; }
void Contact::setBlocked(bool isBlocked) { this->isBlocked = isBlocked; }
void Contact::setNote(string note) { this->note = note; }

string Contact::toString() {
    return id + "|" + name + "|" + phone + "|" + email + "|" + address + "|" + 
           group + "|" + (isFavorite ? "1" : "0") + "|" + (isBlocked ? "1" : "0") + "|" + note;
}

void Contact::displayRaw() {
    cout << left << setw(10) << id 
         << left << setw(20) << name 
         << left << setw(15) << phone 
         << left << setw(15) << group << endl;
}

void Contact::displayDetail() {
    cout << "--- CONTACT DETAIL ---" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address << endl;
    cout << "Group: " << group << endl;
    cout << "Favorite: " << (isFavorite ? "Yes" : "No") << endl;
    cout << "Blocked: " << (isBlocked ? "Yes" : "No") << endl;
    cout << "Note: " << note << endl;
}
