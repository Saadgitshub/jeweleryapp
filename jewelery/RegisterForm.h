#pragma once
#include "Users.h"

namespace jewelery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Label3;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ LLLogin;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->LLLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(264, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Form";
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(57, 184);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(71, 25);
			this->Label3->TabIndex = 2;
			this->Label3->Text = L"Email:";
			this->Label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password:";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(270, 117);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(309, 31);
			this->tbUsername->TabIndex = 4;
			this->tbUsername->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbUsername_TextChanged);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(270, 181);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(309, 31);
			this->tbEmail->TabIndex = 5;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(270, 240);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(309, 31);
			this->tbPassword->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Confirm Password:";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(270, 303);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(309, 31);
			this->tbConfirmPassword->TabIndex = 8;
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(412, 398);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(135, 38);
			this->btnRegister->TabIndex = 9;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(591, 398);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(124, 38);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// LLLogin
			// 
			this->LLLogin->AutoSize = true;
			this->LLLogin->Location = System::Drawing::Point(439, 452);
			this->LLLogin->Name = L"LLLogin";
			this->LLLogin->Size = System::Drawing::Size(251, 25);
			this->LLLogin->TabIndex = 11;
			this->LLLogin->TabStop = true;
			this->LLLogin->Text = L"Login(already a member)";
			this->LLLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLabel1_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(771, 503);
			this->Controls->Add(this->LLLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: bool switchtoLogin = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoLogin = true;
	this->Close();

}
	public: Users^ user = nullptr;
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Username = tbUsername->Text;
	String^ Email = tbEmail->Text;
	String^ Password = tbPassword->Text;
	String^ ConfirmPassword= tbConfirmPassword->Text;
	if (Username->Length == 0 || Email->Length == 0 || Password->Length == 0) {
		MessageBox::Show("Please enter all the fields");
		("one or more empty fields"), MessageBoxButtons::OK;

		return;
	}
	if (String::Compare(Password, ConfirmPassword) != 0) {
		MessageBox::Show("the confirmed password doesnt match the password");
		("password error !"), MessageBoxButtons::OK;
		return;

	}
	try {
		String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO Login " +
			"(Username,Email,Password)VALUES" +
			"(@Username,@Email,@Password);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@Username", Username);
		command.Parameters->AddWithValue("@Email", Email);
		command.Parameters->AddWithValue("@Password", Password);
		
		
		command.ExecuteNonQuery();
		user = gcnew Users;
		user->Username = Username;
		user->Email = Email;
		user->Password = Password;
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	
}
private: System::Void tbUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
