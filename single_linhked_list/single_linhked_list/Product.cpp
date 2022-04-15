#include <iostream>
#include <string>

using namespace std;

class Product {
private:
     string pcode;
     string pro_name;
     int quantity;
     int saled;
     double price;

public:
    Product(){
    }

     Product(string pcode, string pro_name, int quantity, int saled, double price) {
        this->pcode = pcode;
        this->pro_name = pro_name;
        this->quantity = quantity;
        this->saled = saled;
        this->price = price;
    }

     string getPcode() {
        return pcode;
    }

     void setPcode(string pcode) {
        this->pcode = pcode;
    }

     string getPro_name() {
        return pro_name;
    }

     void setPro_name(string pro_name) {
        this->pro_name = pro_name;
    }

     int getQuantity() {
        return quantity;
    }

     void setQuantity(int quantity) {
        this->quantity = quantity;
    }

     int getSaled() {
        return saled;
    }

     void setSaled(int saled) {
        this->saled = saled;
    }

     double getPrice() {
        return price;
    }

     void setPrice(double price) {
        this->price = price;
    }

     void toString() {
         cout << pcode << " " << pro_name << " " << quantity << " " << price << " " << saled << endl;
     }
};