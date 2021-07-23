#include "Merchant.h"
#include <iostream>
#include "string"
#include "vector"


Merchant::Merchant (string id, string name, string registrationtime, string terminalID, string cihaz, string tckimlikno,
vector<banka> anlasmalilar, string password){

this id-> id;
this name-> name;
this registrationtime-> registrationtime;
this terminalID-> terminalID;
this cihaz-> cihaz;
this tckimlikno-> tckimlikno;
this anlasmalilar-> anlasmalilar; 
this password-> password;
}

void Merchant::print() {

cout <<this->id << endl;
cout << this-> name << endl;
cout << this-> registrationtime << endl;
cout << this-> terminalID << endl;
cout << this-> cihaz << endl;
cout << this-> tckimlikno << endl;
cout << this-> password << endl;

for (int i = 0; i < anlasmalilar.size(); i++) {
    cout << (anlasmalilar.at(i).to_string());

}
cout << " " endl;
}

void Merchant::bankaEkle(Banka banka) {
    this->anlasmalilar.push_back(banka);
}

void Merchant::bankaCikar(string id) {
    for (int i = 0; i < anlasmalilar.size(); i++) {
        Banka banka = anlasmalilar.at(i);
        if (banka.getID() == id) {
            anlasmalilar.erase(i);
            break;
        }
    }
}

void Merchant::bankaMod(string id) {
    for (int i = 0; i < anlasmalilar.size(); i++) {
        Banka banka = anlasmalilar.at(i);
        if (banka.getID() == id) {
            banka.setMode();
            break;
        }
    }
}

string Merchant::getID() {
    return this->id;
}

string Merchant::to_string() {
    return this->name;
}

string Merchant::to_string() {
    return this->registrationtime
}

string Merchant::to_string() {
    return this->cihaz
}
string Merchant::to_string() {
    return this->tcKimlikNo
}

string Merchant::to_string() {
    return this->password
}