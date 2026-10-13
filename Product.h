//
// Created by Евгения on 13.10.2026.
//

#ifndef INC_13_10_PRODUCT_H
#define INC_13_10_PRODUCT_H

#include <string>
#include <iostream>
using namespace std;
class Product {
private:
    string name;
    float price;
    float weight;
public:
    Product();
    Product(string name, float price , float weight);
    string getName()const;
    float  getPrice()const;
    float getWeight()const;
    void setName(string name);
    void setPrice(float price);
    void setWeight(float weight );
    void displayProduct() const;
};


#endif //INC_13_10_PRODUCT_H
