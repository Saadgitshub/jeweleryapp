#pragma once
using namespace System;

public ref class Products {
public:
    int ProductID;
    String^ Name;
    String^ Description;
    double Price;
    int Quantity;
    array<Byte>^ Picture; // Assuming Picture is stored as an array of bytes

    // Constructor
    Products(int id, String^ name, String^ desc, double price, int quantity, array<Byte>^ picture) {
        ProductID = id;
        Name = name;
        Description = desc;
        Price = price;
        Quantity = quantity;
        Picture = picture;
    }

    // Default constructor (if needed)
    Products() {
        // Initialize members with default values if necessary
        ProductID = 0;
        Name = "";
        Description = "";
        Price = 0.0;
        Quantity = 0;
        Picture = nullptr;
    }

};
