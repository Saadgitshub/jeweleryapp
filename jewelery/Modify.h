#pragma once
#include "products.h"
#include "Users.h"
#include"AddProducts.h"
#include"EProduc.h"
namespace jewelery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Modify
	/// </summary>
	public ref class Modify : public System::Windows::Forms::Form
	{
	public:
		Modify(Products^Product)
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
		~Modify()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ ModifyBT;
	private: System::Windows::Forms::Button^ DeleteBT;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ pdID;
	private: System::Windows::Forms::TextBox^ pdID2;



	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbDescription;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::TextBox^ tbQuantity;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ModifyBT = (gcnew System::Windows::Forms::Button());
			this->DeleteBT = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pdID = (gcnew System::Windows::Forms::TextBox());
			this->pdID2 = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modify Products";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(606, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Delete Products";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ProductID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(48, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Description:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Price:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(54, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Quantity:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(616, 117);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"ProductID:";
			// 
			// ModifyBT
			// 
			this->ModifyBT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModifyBT->Location = System::Drawing::Point(133, 428);
			this->ModifyBT->Name = L"ModifyBT";
			this->ModifyBT->Size = System::Drawing::Size(104, 32);
			this->ModifyBT->TabIndex = 8;
			this->ModifyBT->Text = L"Modify";
			this->ModifyBT->UseVisualStyleBackColor = true;
			this->ModifyBT->Click += gcnew System::EventHandler(this, &Modify::ModifyBT_Click);
			// 
			// DeleteBT
			// 
			this->DeleteBT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteBT->Location = System::Drawing::Point(739, 185);
			this->DeleteBT->Name = L"DeleteBT";
			this->DeleteBT->Size = System::Drawing::Size(88, 32);
			this->DeleteBT->TabIndex = 9;
			this->DeleteBT->Text = L"Delete";
			this->DeleteBT->UseVisualStyleBackColor = true;
			this->DeleteBT->Click += gcnew System::EventHandler(this, &Modify::DeleteBT_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(489, 455);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pdID
			// 
			this->pdID->Location = System::Drawing::Point(166, 120);
			this->pdID->Name = L"pdID";
			this->pdID->Size = System::Drawing::Size(100, 20);
			this->pdID->TabIndex = 11;
			// 
			// pdID2
			// 
			this->pdID2->Location = System::Drawing::Point(750, 120);
			this->pdID2->Name = L"pdID2";
			this->pdID2->Size = System::Drawing::Size(100, 20);
			this->pdID2->TabIndex = 12;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(166, 167);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 20);
			this->tbName->TabIndex = 13;
			// 
			// tbDescription
			// 
			this->tbDescription->Location = System::Drawing::Point(180, 222);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(100, 20);
			this->tbDescription->TabIndex = 14;
			// 
			// tbPrice
			// 
			this->tbPrice->Location = System::Drawing::Point(166, 273);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(100, 20);
			this->tbPrice->TabIndex = 15;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(166, 328);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(100, 20);
			this->tbQuantity->TabIndex = 16;
			// 
			// Modify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 643);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->pdID2);
			this->Controls->Add(this->pdID);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->DeleteBT);
			this->Controls->Add(this->ModifyBT);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Modify";
			this->Text = L"Modify";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Products^ product = nullptr;
private: System::Void ModifyBT_Click(System::Object^ sender, System::EventArgs^ e) {
	int ProductID;
	if (!Int32::TryParse(pdID->Text, ProductID)) {
		MessageBox::Show("Please enter a valid product ID.");
		return;
	}

	try {
		String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		// Update the product in the database with the modified details
		SqlCommand^ cmdUpdate = gcnew SqlCommand("UPDATE Products SET Name = @Name, Description = @Description, Price = @Price, Quantity = @Quantity WHERE ProductID = @ProductID", sqlConn);
		cmdUpdate->Parameters->Add("@ProductID", SqlDbType::Int)->Value = ProductID;
		cmdUpdate->Parameters->Add("@Name", SqlDbType::NVarChar)->Value = tbName->Text;
		cmdUpdate->Parameters->Add("@Description", SqlDbType::NVarChar)->Value = tbDescription->Text;
		cmdUpdate->Parameters->Add("@Price", SqlDbType::Decimal)->Value = Convert::ToDecimal(tbPrice->Text);
		cmdUpdate->Parameters->Add("@Quantity", SqlDbType::Int)->Value = Convert::ToInt32(tbQuantity->Text);
		cmdUpdate->ExecuteNonQuery();

		sqlConn->Close();
		MessageBox::Show("Product details modified successfully.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}



	   
private: System::Void DeleteBT_Click(System::Object^ sender, System::EventArgs^ e) {
	int ProductID;
	if (!Int32::TryParse(pdID2->Text, ProductID)) {
		MessageBox::Show("Please enter a valid product ID.");
		return;
	}

	try {
		String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		// Check if the product exists
		SqlCommand^ cmdCheck = gcnew SqlCommand("SELECT COUNT(*) FROM Products WHERE ProductID = @ProductID", sqlConn);
		cmdCheck->Parameters->AddWithValue("@ProductID", ProductID);
		int count = safe_cast<int>(cmdCheck->ExecuteScalar());

		if (count == 0) {
			MessageBox::Show("Product with ID " + ProductID + " does not exist.");
			return;
		}

		// Delete the product from the database
		SqlCommand^ cmdDelete = gcnew SqlCommand("DELETE FROM Products WHERE ProductID = @ProductID", sqlConn);
		cmdDelete->Parameters->AddWithValue("@ProductID", ProductID);
		cmdDelete->ExecuteNonQuery();

		sqlConn->Close();
		MessageBox::Show("Product deleted successfully.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}
};
}
