#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "Products.h" // Include the Products header file
#include "AddProducts.h" // Include the AddProducts header file
#include "EProduc.h"
#include"Orderitem.h"
#include"Orders.h"
#include"Modify.h"
namespace jewelery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ManageUsers
	/// </summary>
	public ref class ManageUsers : public System::Windows::Forms::Form
	{
	public:
		ManageUsers(void)
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
		~ManageUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Usersinfos;

	private: System::Windows::Forms::Button^ btshowuser;
	private: System::Windows::Forms::LinkLabel^ llDelete;

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
			this->Usersinfos = (gcnew System::Windows::Forms::Label());
			this->btshowuser = (gcnew System::Windows::Forms::Button());
			this->llDelete = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(170, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Existent Users";
			this->label1->Click += gcnew System::EventHandler(this, &ManageUsers::label1_Click);
			// 
			// Usersinfos
			// 
			this->Usersinfos->AutoSize = true;
			this->Usersinfos->Location = System::Drawing::Point(31, 89);
			this->Usersinfos->Name = L"Usersinfos";
			this->Usersinfos->Size = System::Drawing::Size(80, 25);
			this->Usersinfos->TabIndex = 1;
			this->Usersinfos->Text = L"Users :";
			// 
			// btshowuser
			// 
			this->btshowuser->Location = System::Drawing::Point(647, 395);
			this->btshowuser->Name = L"btshowuser";
			this->btshowuser->Size = System::Drawing::Size(115, 33);
			this->btshowuser->TabIndex = 2;
			this->btshowuser->Text = L"Show";
			this->btshowuser->UseVisualStyleBackColor = true;
			this->btshowuser->Click += gcnew System::EventHandler(this, &ManageUsers::btshowuser_Click);
			// 
			// llDelete
			// 
			this->llDelete->AutoSize = true;
			this->llDelete->Location = System::Drawing::Point(784, 399);
			this->llDelete->Name = L"llDelete";
			this->llDelete->Size = System::Drawing::Size(125, 25);
			this->llDelete->TabIndex = 3;
			this->llDelete->TabStop = true;
			this->llDelete->Text = L"Delete User";
			this->llDelete->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ManageUsers::llDelete_LinkClicked);
			// 
			// ManageUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 440);
			this->Controls->Add(this->llDelete);
			this->Controls->Add(this->btshowuser);
			this->Controls->Add(this->Usersinfos);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ManageUsers";
			this->Text = L"ManageUsers";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btshowuser_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowUsers();
	}
		   void ShowUsers() {
			   try
			   {
				   String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
				   SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				   SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Login", sqlConn);
				   sqlConn->Open();
				   SqlDataReader^ reader = cmd->ExecuteReader();

				   // Clear existing labels
				   Usersinfos->Text = "";
				   
				   // Display products in the label
				   while (reader->Read())
				   {
					   Usersinfos->Text += "ID: " + reader["ID"]->ToString() + ", Username: " + reader["Username"]->ToString() + ",Email: " + reader["Email"]->ToString() +

						   ", Password: " + reader["Password"]->ToString() +  "\n";
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
		   public: bool switchtoDelete = false;
private: System::Void llDelete_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoDelete = true;
	this->Close();

}
};
}
