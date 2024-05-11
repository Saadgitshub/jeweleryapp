#pragma once
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
	/// Summary for DeleteUser
	/// </summary>
	public ref class DeleteUser : public System::Windows::Forms::Form
	{
	public:
		DeleteUser(void)
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
		~DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ UserID;
	private: System::Windows::Forms::TextBox^ tbUser;
	private: System::Windows::Forms::Button^ btDelete;
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
			this->UserID = (gcnew System::Windows::Forms::Label());
			this->tbUser = (gcnew System::Windows::Forms::TextBox());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(222, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Deleting Users";
			// 
			// UserID
			// 
			this->UserID->AutoSize = true;
			this->UserID->Location = System::Drawing::Point(48, 116);
			this->UserID->Name = L"UserID";
			this->UserID->Size = System::Drawing::Size(83, 25);
			this->UserID->TabIndex = 1;
			this->UserID->Text = L"UserID:";
			// 
			// tbUser
			// 
			this->tbUser->Location = System::Drawing::Point(162, 116);
			this->tbUser->Name = L"tbUser";
			this->tbUser->Size = System::Drawing::Size(100, 31);
			this->tbUser->TabIndex = 2;
			this->tbUser->TextChanged += gcnew System::EventHandler(this, &DeleteUser::tbUser_TextChanged);
			// 
			// btDelete
			// 
			this->btDelete->Location = System::Drawing::Point(436, 368);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(169, 33);
			this->btDelete->TabIndex = 3;
			this->btDelete->Text = L"Delete User";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler(this, &DeleteUser::btDelete_Click);
			// 
			// DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 431);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->tbUser);
			this->Controls->Add(this->UserID);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"DeleteUser";
			this->Text = L"DeleteUser";
			this->Load += gcnew System::EventHandler(this, &DeleteUser::DeleteUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteUser_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int ID;
	MessageBox::Show("User ID: " + tbUser->Text);
	if (!Int32::TryParse(tbUser->Text, ID)) {
		MessageBox::Show("Please enter a valid User ID.");
		return;
	}

	try {
		String^ connString = "Data Source=DESKTOP-RR3AB05\\SQLEXPRESS;Initial Catalog=loginapp;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		// Check if the User exists
		SqlCommand^ cmdCheck = gcnew SqlCommand("SELECT COUNT(*) FROM Login WHERE ID = @ID", sqlConn);
		cmdCheck->Parameters->AddWithValue("@ID", ID);
		int count = safe_cast<int>(cmdCheck->ExecuteScalar());

		if (count == 0) {
			MessageBox::Show("User with ID " + ID + " does not exist.");
			return;
		}

		// Delete the User from the database
		SqlCommand^ cmdDelete = gcnew SqlCommand("DELETE FROM Login WHERE ID = @ID", sqlConn);
		cmdDelete->Parameters->AddWithValue("@ID", ID); // Corrected parameter name
		cmdDelete->ExecuteNonQuery();

		sqlConn->Close();
		MessageBox::Show("User deleted successfully.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}

private: System::Void tbUser_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
