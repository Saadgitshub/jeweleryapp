#pragma once
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "Products.h" // Include the Products header file
#include "AddProducts.h" // Include the AddProducts header file
#include "EProduc.h"
#include"Ordering.h"
#include"Orderitem.h"
#include"Orders.h"
#include"Users.h"


namespace jewelery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Ordering
	/// </summary>
	public ref class Ordering : public System::Windows::Forms::Form
	{
	public:
		Ordering(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ordering()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbpID;
	private: System::Windows::Forms::TextBox^ tbQuantity;
	private: System::Windows::Forms::Button^ btOrder;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbuserID;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbpID = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->btOrder = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbuserID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(221, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ordering";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ProductID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quanitity:";
			// 
			// tbpID
			// 
			this->tbpID->Location = System::Drawing::Point(198, 112);
			this->tbpID->Name = L"tbpID";
			this->tbpID->Size = System::Drawing::Size(100, 31);
			this->tbpID->TabIndex = 4;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(198, 183);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(100, 31);
			this->tbQuantity->TabIndex = 5;
			// 
			// btOrder
			// 
			this->btOrder->Location = System::Drawing::Point(327, 441);
			this->btOrder->Name = L"btOrder";
			this->btOrder->Size = System::Drawing::Size(172, 40);
			this->btOrder->TabIndex = 6;
			this->btOrder->Text = L"Add To Cart";
			this->btOrder->UseVisualStyleBackColor = true;
			this->btOrder->Click += gcnew System::EventHandler(this, &Ordering::btOrder_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"UserID:";
			// 
			// tbuserID
			// 
			this->tbuserID->Location = System::Drawing::Point(198, 244);
			this->tbuserID->Name = L"tbuserID";
			this->tbuserID->Size = System::Drawing::Size(100, 31);
			this->tbuserID->TabIndex = 8;
			// 
			// Ordering
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 502);
			this->Controls->Add(this->tbuserID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btOrder);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbpID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Ordering";
			this->Text = L"Ordering";
			this->Load += gcnew System::EventHandler(this, &Ordering::Ordering_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ordering_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		int ProductID, Quantity, UserID;

		// Validate input
		if (!Int32::TryParse(tbpID->Text, ProductID) || !Int32::TryParse(tbQuantity->Text, Quantity) || !Int32::TryParse(tbuserID->Text, UserID)) {
			MessageBox::Show("Invalid input for Product ID, Quantity, or UserID.");
			return;
		}

		try {
			String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			// Insert a new order
			int orderID = InsertNewOrder(sqlConn, UserID);

			// Insert into OrderItems table
			String^ orderItemQuery = "INSERT INTO OrderItems (OrderID, ProductID, Quantity) VALUES (@OrderID, @ProductID, @Quantity);";
			SqlCommand^ orderItemCommand = gcnew SqlCommand(orderItemQuery, sqlConn);
			orderItemCommand->Parameters->AddWithValue("@OrderID", orderID);
			orderItemCommand->Parameters->AddWithValue("@ProductID", ProductID);
			orderItemCommand->Parameters->AddWithValue("@Quantity", Quantity);

			orderItemCommand->ExecuteNonQuery();

			// Calculate total price
			Decimal TotalPrice = CalculateTotalPrice(orderID, sqlConn);

			// Update total price in the Orders table
			String^ updateTotalPriceQuery = "UPDATE Orders SET TotalPrice = @TotalPrice WHERE OrderID = @OrderID;";
			SqlCommand^ updateTotalPriceCommand = gcnew SqlCommand(updateTotalPriceQuery, sqlConn);
			updateTotalPriceCommand->Parameters->AddWithValue("@TotalPrice", TotalPrice);
			updateTotalPriceCommand->Parameters->AddWithValue("@OrderID", orderID);
			updateTotalPriceCommand->ExecuteNonQuery();

			MessageBox::Show("Item added to cart successfully.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

		   int InsertNewOrder(SqlConnection^ connection, int userID) {
			   String^ insertOrderQuery = "INSERT INTO Orders (UserID, TotalPrice) VALUES (@UserID, @TotalPrice); SELECT SCOPE_IDENTITY();";
			   SqlCommand^ insertOrderCommand = gcnew SqlCommand(insertOrderQuery, connection);
			   insertOrderCommand->Parameters->AddWithValue("@UserID", userID);
			   insertOrderCommand->Parameters->AddWithValue("@TotalPrice", Decimal(0)); // Set initial total price to 0

			   return Convert::ToInt32(insertOrderCommand->ExecuteScalar());
		   }

		   Decimal CalculateTotalPrice(int orderID, SqlConnection^ connection) {
			   Decimal totalPrice = Decimal(0); // Initialize totalPrice to 0

			   String^ query = "SELECT p.Price, oi.Quantity FROM Products p JOIN OrderItems oi ON p.ProductID = oi.ProductID WHERE oi.OrderID = @OrderID;";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   command->Parameters->AddWithValue("@OrderID", orderID);

			   SqlDataReader^ reader = command->ExecuteReader();
			   while (reader->Read()) {
				   Decimal price = reader->GetDecimal(0);
				   int quantity = reader->GetInt32(1);
				   totalPrice = Decimal::Add(totalPrice, Decimal::Multiply(price, Decimal(quantity))); // Calculate total price using Add() method
			   }

			   reader->Close();
			   return totalPrice;
		   }


		   };
	}
