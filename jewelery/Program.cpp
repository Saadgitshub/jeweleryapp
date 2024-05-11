#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "Products.h" // Include the Products header file
#include "AddProducts.h" // Include the AddProducts header file
#include "EProduc.h"
#include"Ordering.h"
#include"Orderitem.h"
#include"Orders.h"
#include"Modify.h"
#include"ManageUsers.h"
#include"DeleteUser.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Users^ user = nullptr;
    Products^ product = nullptr;
    OrderItems^ order = nullptr;

    // Show login form
    jewelery::loginform loginform;
    loginform.ShowDialog();

    // Check if the user chose to switch to register
    if (loginform.switchToRegister) {
        jewelery::RegisterForm RegisterForm;
        RegisterForm.ShowDialog();
        // If the user switched back to login, update user
        if (RegisterForm.switchtoLogin) {
            loginform.ShowDialog();
        }
    }
    else {
        // User chose to login
        user = loginform.user;
    }

    // Check if the user authenticated
    if (user != nullptr) {
        jewelery::MainForm mainform(user);
        Application::Run(% mainform);

        // Check if the user wants to add products
        if (mainform.switchtoAdd) {
            // Show a new instance of the AddProducts form
            jewelery::AddProducts addProductsForm(user, product);
            addProductsForm.ShowDialog();
            if (addProductsForm.switchtoModify) {
                // Pass the product object to the Modify form
                jewelery::Modify ModifyProduct(addProductsForm.product);
                ModifyProduct.ShowDialog();
             
            }
           
        }
        else if (mainform.switchtoshow) {
            jewelery::EProduc EProduc;
            EProduc.ShowDialog();
            if (EProduc.switchtoOrder) {
                jewelery::Ordering Ordering;
                Ordering.ShowDialog();
            }
        }

        if (mainform.switchtoManage) {
            // Show the cart form 
            jewelery::ManageUsers ManageUsers;
            ManageUsers.ShowDialog();
            if (ManageUsers.switchtoDelete) {
                jewelery::DeleteUser DeleteUser;
                DeleteUser.ShowDialog();
            }
        }
    }
    else {
        // User canceled authentication
        MessageBox::Show("Authentication canceled",
            "Program.cpp", MessageBoxButtons::OK);
    }
}
