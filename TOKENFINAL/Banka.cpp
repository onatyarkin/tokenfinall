#include "Banka.h"
#include <iostream>
#include <string>



Banka::Banka(string bankId, string ad, bool mode){
    this->bankId = bankId;
    this->ad = ad;
    this->mode = mode;
}

string Banka::getAd(){
    return this->ad;
}

void Banka::print() {

    cout << this->ad << endl;
    cout << this->mode << endl;
}


string Banka::to_string() {
    return this->ad;
    
}


void Banka::setMode(bool modeInput) {
     this->mode = modeInput;
}

void Banka::setAD(string AdInput) {
    this->ad = AdInput;

}

string Banka::getID() {
    return this->id;

}
bool Banka::getMode() {

    return this->mode;


}