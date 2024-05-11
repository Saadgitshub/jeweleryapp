#pragma once
#include"Products.h"
#include"AddProducts.h"
namespace jewelery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for EProduc
	/// </summary>
	public ref class EProduc : public System::Windows::Forms::Form
	{
	public:
		EProduc(void)
		{
			InitializeComponent();

			// Assuming you have a list of Products retrieved from your database
			
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EProduc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Productsinfo;
	private: System::Windows::Forms::Button^ howProductsButton;
	private: System::Windows::Forms::LinkLabel^ LLOrder;




	protected:

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
			this->Productsinfo = (gcnew System::Windows::Forms::Label());
			this->howProductsButton = (gcnew System::Windows::Forms::Button());
			this->LLOrder = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Existent Products";
			this->label1->Click += gcnew System::EventHandler(this, &EProduc::label1_Click);
			// 
			// Productsinfo
			// 
			this->Productsinfo->AutoSize = true;
			this->Productsinfo->Location = System::Drawing::Point(39, 141);
			this->Productsinfo->Name = L"Productsinfo";
			this->Productsinfo->Size = System::Drawing::Size(109, 25);
			this->Productsinfo->TabIndex = 1;
			this->Productsinfo->Text = L"Products :";
			// 
			// howProductsButton
			// 
			this->howProductsButton->Location = System::Drawing::Point(278, 414);
			this->howProductsButton->Name = L"howProductsButton";
			this->howProductsButton->Size = System::Drawing::Size(135, 45);
			this->howProductsButton->TabIndex = 2;
			this->howProductsButton->Text = L"show";
			this->howProductsButton->UseVisualStyleBackColor = true;
			this->howProductsButton->Click += gcnew System::EventHandler(this, &EProduc::button1_Click);
			// 
			// LLOrder
			// 
			this->LLOrder->AutoSize = true;
			this->LLOrder->Location = System::Drawing::Point(484, 424);
			this->LLOrder->Name = L"LLOrder";
			this->LLOrder->Size = System::Drawing::Size(95, 25);
			this->LLOrder->TabIndex = 3;
			this->LLOrder->TabStop = true;
			this->LLOrder->Text = L"Ordering";
			this->LLOrder->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EProduc::LLOrder_LinkClicked_1);
			// 
			// EProduc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 495);
			this->Controls->Add(this->LLOrder);
			this->Controls->Add(this->howProductsButton);
			this->Controls->Add(this->Productsinfo);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"EProduc";
			this->Text = L"EProduc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   private:
		   System::Void ShowProductsButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   
		   }
		   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   ShowProducts();
		   }

		   // Function to retrieve and display products
		   void ShowProducts()
		   {
			   try
			   {
				   String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
				   SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				   SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Products", sqlConn);
				   sqlConn->Open();
				   SqlDataReader^ reader = cmd->ExecuteReader();

				   // Clear existing labels
				   Productsinfo->Text = "";

				   // Display products in the label
				   while (reader->Read())
				   {
					   Productsinfo->Text += "ID: " + reader["ProductID"]->ToString() + ", Name: " + reader["Name"]->ToString() + ",Description: " + reader["Description"]->ToString() +
						 
						   ", Quantity: " + reader["Quantity"]->ToString() + ", Price: " + reader["Price"]->ToString() + "\n";
				   }

				   // Close the connection
				   reader->Close();
				   sqlConn->Close();
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error: " + ex->Message);
			   }
		   }

		
	private: System::Void LLOrder_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
		   public: bool switchtoOrder = false;
private: System::Void LLOrder_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoOrder = true;
	this->Close();
}
};
}
