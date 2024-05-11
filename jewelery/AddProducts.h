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
	/// Summary for AddProducts
	/// </summary>
	public delegate void ProductAddedEventHandler(Products^ product);
	

	public ref class AddProducts : public System::Windows::Forms::Form
	{
	public:
		AddProducts(Users^ user, Products^ product)
		{
			InitializeComponent();
			// Initialize the product object
			this->product = gcnew Products();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddProducts()
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
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbDescription;
	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::TextBox^ tbQuantity;





	private: System::Windows::Forms::Button^ tbAdd;
	private: System::Windows::Forms::Button^ tbCancel;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ LLBack;






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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantity = (gcnew System::Windows::Forms::TextBox());
			this->tbAdd = (gcnew System::Windows::Forms::Button());
			this->tbCancel = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->LLBack = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(187, 67);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Products";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 216);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &AddProducts::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 279);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 347);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 404);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Quantity";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(272, 221);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(283, 38);
			this->tbName->TabIndex = 5;
			// 
			// tbDescription
			// 
			this->tbDescription->Location = System::Drawing::Point(272, 279);
			this->tbDescription->Margin = System::Windows::Forms::Padding(4);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(283, 38);
			this->tbDescription->TabIndex = 6;
			// 
			// tbPrice
			// 
			this->tbPrice->Location = System::Drawing::Point(272, 347);
			this->tbPrice->Margin = System::Windows::Forms::Padding(4);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(283, 38);
			this->tbPrice->TabIndex = 7;
			// 
			// tbQuantity
			// 
			this->tbQuantity->Location = System::Drawing::Point(272, 404);
			this->tbQuantity->Margin = System::Windows::Forms::Padding(4);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(283, 38);
			this->tbQuantity->TabIndex = 8;
			// 
			// tbAdd
			// 
			this->tbAdd->Location = System::Drawing::Point(193, 477);
			this->tbAdd->Margin = System::Windows::Forms::Padding(4);
			this->tbAdd->Name = L"tbAdd";
			this->tbAdd->Size = System::Drawing::Size(157, 38);
			this->tbAdd->TabIndex = 9;
			this->tbAdd->Text = L"Add";
			this->tbAdd->UseVisualStyleBackColor = true;
			this->tbAdd->Click += gcnew System::EventHandler(this, &AddProducts::tbAdd_Click);
			// 
			// tbCancel
			// 
			this->tbCancel->Location = System::Drawing::Point(403, 477);
			this->tbCancel->Margin = System::Windows::Forms::Padding(4);
			this->tbCancel->Name = L"tbCancel";
			this->tbCancel->Size = System::Drawing::Size(152, 38);
			this->tbCancel->TabIndex = 10;
			this->tbCancel->Text = L"Cancel";
			this->tbCancel->UseVisualStyleBackColor = true;
			this->tbCancel->Click += gcnew System::EventHandler(this, &AddProducts::tbCancel_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(266, 563);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(195, 31);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Modify / Delete";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AddProducts::linkLabel1_LinkClicked);
			// 
			// LLBack
			// 
			this->LLBack->AutoSize = true;
			this->LLBack->Location = System::Drawing::Point(864, 563);
			this->LLBack->Name = L"LLBack";
			this->LLBack->Size = System::Drawing::Size(109, 31);
			this->LLBack->TabIndex = 12;
			this->LLBack->TabStop = true;
			this->LLBack->Text = L"go back";
			this->LLBack->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AddProducts::LLBack_LinkClicked);
			// 
			// AddProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 629);
			this->Controls->Add(this->LLBack);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->tbCancel);
			this->Controls->Add(this->tbAdd);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"AddProducts";
			this->Text = L"AddProducts";
			this->Load += gcnew System::EventHandler(this, &AddProducts::AddProducts_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: Products^ product = nullptr;
	private: System::Void tbAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Name = tbName->Text;
		String^ Description = tbDescription->Text;
		double Price;
		int Quantity;
		

		if (Name->Length == 0 || Description->Length == 0 || tbPrice->Text->Length == 0 || tbQuantity->Text->Length == 0 ) {
			MessageBox::Show("Please enter all the fields");
			return;
		}

		try {
			// Convert text to numeric values
			Price = System::Convert::ToDouble(tbPrice->Text);
			Quantity = System::Convert::ToInt32(tbQuantity->Text);

			String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO Products (Name, Description, Price, Quantity) VALUES (@Name, @Description, @Price, @Quantity);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Name", Name);
			command.Parameters->AddWithValue("@Description", Description);
			command.Parameters->AddWithValue("@Price", Price);
			command.Parameters->AddWithValue("@Quantity", Quantity);
			

			command.ExecuteNonQuery();

			// Assign values to Products object
			product = gcnew Products;
			product->Name = Name;
			product->Description = Description;
			product->Price = Price;
			product->Quantity = Quantity;
			

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void tbCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddProducts_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

		   public: bool switchtoModify = false;
		private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->switchtoModify = true;
			this->Close();

		}
			   public:bool switchtoMain = false;
	private: System::Void LLBack_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoMain = true;
		this->Close();
}
};
	}
	