#pragma once
#include "Users.h"
#include"products.h"
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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Users^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Userinfo->Text = "ID=" + user->ID + ",username=" + user->Username +
				", Email=" + user->Email;


		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Userinfo;
	private: System::Windows::Forms::LinkLabel^ LLAddProducts;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ showProducts;

	private: System::Windows::Forms::LinkLabel^ LLManage;










	protected:


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
			this->Userinfo = (gcnew System::Windows::Forms::Label());
			this->LLAddProducts = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->showProducts = (gcnew System::Windows::Forms::LinkLabel());
			this->LLManage = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(378, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Dashboard";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// Userinfo
			// 
			this->Userinfo->AutoSize = true;
			this->Userinfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Userinfo->Location = System::Drawing::Point(35, 138);
			this->Userinfo->Name = L"Userinfo";
			this->Userinfo->Size = System::Drawing::Size(92, 25);
			this->Userinfo->TabIndex = 1;
			this->Userinfo->Text = L"Userinfo";
			this->Userinfo->Click += gcnew System::EventHandler(this, &MainForm::Userinfo_Click);
			// 
			// LLAddProducts
			// 
			this->LLAddProducts->AutoSize = true;
			this->LLAddProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLAddProducts->Location = System::Drawing::Point(909, 468);
			this->LLAddProducts->Name = L"LLAddProducts";
			this->LLAddProducts->Size = System::Drawing::Size(141, 25);
			this->LLAddProducts->TabIndex = 2;
			this->LLAddProducts->TabStop = true;
			this->LLAddProducts->Text = L"Add Products";
			this->LLAddProducts->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::LLAddProducts_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(778, 477);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 13);
			this->linkLabel1->TabIndex = 3;
			// 
			// showProducts
			// 
			this->showProducts->AutoSize = true;
			this->showProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showProducts->Location = System::Drawing::Point(730, 468);
			this->showProducts->Name = L"showProducts";
			this->showProducts->Size = System::Drawing::Size(150, 25);
			this->showProducts->TabIndex = 4;
			this->showProducts->TabStop = true;
			this->showProducts->Text = L"ShowProducts";
			this->showProducts->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::showProducts_LinkClicked);
			// 
			// LLManage
			// 
			this->LLManage->AutoSize = true;
			this->LLManage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLManage->Location = System::Drawing::Point(531, 468);
			this->LLManage->Name = L"LLManage";
			this->LLManage->Size = System::Drawing::Size(152, 25);
			this->LLManage->TabIndex = 6;
			this->LLManage->TabStop = true;
			this->LLManage->Text = L"Manage Users";
			this->LLManage->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel2_LinkClicked);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1083, 543);
			this->Controls->Add(this->LLManage);
			this->Controls->Add(this->showProducts);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->LLAddProducts);
			this->Controls->Add(this->Userinfo);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: bool switchtoAdd = false;
	private: System::Void LLAddProducts_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoAdd = true;
		this->Close();

	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void Userinfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   public: bool switchtoshow = false;
	private: System::Void showProducts_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoshow = true;
		this->Close();
		
	}
		   
	private: System::Void LLorder_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}
			public: bool switchtoManage = false;
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->switchtoManage = true;
			this->Close();

}
};
}