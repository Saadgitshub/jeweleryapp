#pragma once
using namespace System;

public ref class OrderItems {
public:
    int OrderItemID;
    int OrderID;
    int ProductID;
    int Quantity;


    OrderItems(int orderItemID, int orderID, int productID, int quantity) {
        this->OrderItemID = orderItemID;
        this->OrderID = orderID;
        this->ProductID = productID;
        this->Quantity = quantity;
    }

    OrderItems() {
        // Initialize members with default values if necessary
        OrderItemID = 0;
        OrderID = 0;
        ProductID = 0;
        Quantity = 0;
    }

};
