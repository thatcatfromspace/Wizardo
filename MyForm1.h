#include <cstdlib>
#include <time.h>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include <sstream>
#pragma once

#pragma comment(lib, "mscoree.lib")

namespace Wizardo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(System::Windows::Forms::Form^ form)
		{
			Form^ loginWindow = form;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ websiteEntry;
	private: System::Windows::Forms::TextBox^ usernameEntry;
	private: System::Windows::Forms::TextBox^ passwordEntry;
	private: System::Windows::Forms::Button^ search;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ detailsLabel;
	private: System::Windows::Forms::TextBox^ detailsLabel1;
	private: System::Windows::Forms::TextBox^ detailsLabel2;

	protected:

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
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->websiteEntry = (gcnew System::Windows::Forms::TextBox());
			this->usernameEntry = (gcnew System::Windows::Forms::TextBox());
			this->passwordEntry = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->detailsLabel = (gcnew System::Windows::Forms::TextBox());
			this->detailsLabel1 = (gcnew System::Windows::Forms::TextBox());
			this->detailsLabel2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// signInButton
			// 
			this->signInButton->AutoEllipsis = true;
			this->signInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->signInButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signInButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->signInButton->Location = System::Drawing::Point(11, 542);
			this->signInButton->Margin = System::Windows::Forms::Padding(2);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(66, 32);
			this->signInButton->TabIndex = 8;
			this->signInButton->Text = L"save";
			this->signInButton->UseVisualStyleBackColor = false;
			this->signInButton->Click += gcnew System::EventHandler(this, &MyForm1::signInButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->label1->Location = System::Drawing::Point(11, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Query a saved password\r\n";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel1->Location = System::Drawing::Point(293, 50);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 4);
			this->panel1->TabIndex = 10;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->usernameTextBox->Location = System::Drawing::Point(293, 21);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(2);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(238, 25);
			this->usernameTextBox->TabIndex = 11;
			this->usernameTextBox->Text = L"Enter the website link here";
			this->usernameTextBox->Click += gcnew System::EventHandler(this, &MyForm1::usernameTextBox_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->label2->Location = System::Drawing::Point(13, 253);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Create A New Entry";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->textBox1->Location = System::Drawing::Point(304, 253);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 25);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Website";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->textBox2->Location = System::Drawing::Point(304, 320);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 25);
			this->textBox2->TabIndex = 14;
			this->textBox2->Text = L"Username";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->textBox3->Location = System::Drawing::Point(304, 394);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 25);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"Password";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->checkBox1->Location = System::Drawing::Point(526, 432);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(149, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Create a secure password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel2->Location = System::Drawing::Point(388, 274);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 4);
			this->panel2->TabIndex = 17;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel3->Location = System::Drawing::Point(388, 415);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(224, 4);
			this->panel3->TabIndex = 11;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel4->Location = System::Drawing::Point(388, 341);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(224, 4);
			this->panel4->TabIndex = 11;
			// 
			// websiteEntry
			// 
			this->websiteEntry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->websiteEntry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->websiteEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->websiteEntry->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->websiteEntry->Location = System::Drawing::Point(388, 245);
			this->websiteEntry->Margin = System::Windows::Forms::Padding(2);
			this->websiteEntry->Name = L"websiteEntry";
			this->websiteEntry->Size = System::Drawing::Size(214, 25);
			this->websiteEntry->TabIndex = 18;
			// 
			// usernameEntry
			// 
			this->usernameEntry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->usernameEntry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameEntry->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->usernameEntry->Location = System::Drawing::Point(388, 311);
			this->usernameEntry->Margin = System::Windows::Forms::Padding(2);
			this->usernameEntry->Name = L"usernameEntry";
			this->usernameEntry->Size = System::Drawing::Size(224, 25);
			this->usernameEntry->TabIndex = 19;
			// 
			// passwordEntry
			// 
			this->passwordEntry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->passwordEntry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordEntry->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->passwordEntry->Location = System::Drawing::Point(388, 385);
			this->passwordEntry->Margin = System::Windows::Forms::Padding(2);
			this->passwordEntry->Name = L"passwordEntry";
			this->passwordEntry->Size = System::Drawing::Size(224, 25);
			this->passwordEntry->TabIndex = 20;
			// 
			// search
			// 
			this->search->AutoEllipsis = true;
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->search->Location = System::Drawing::Point(535, 22);
			this->search->Margin = System::Windows::Forms::Padding(2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(91, 32);
			this->search->TabIndex = 21;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &MyForm1::search_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel5->Location = System::Drawing::Point(2, 166);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(710, 10);
			this->panel5->TabIndex = 18;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel5_Paint);
			// 
			// detailsLabel
			// 
			this->detailsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->detailsLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->detailsLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->detailsLabel->Location = System::Drawing::Point(2, 75);
			this->detailsLabel->Margin = System::Windows::Forms::Padding(2);
			this->detailsLabel->Multiline = true;
			this->detailsLabel->Name = L"detailsLabel";
			this->detailsLabel->Size = System::Drawing::Size(626, 20);
			this->detailsLabel->TabIndex = 22;
			this->detailsLabel->TextChanged += gcnew System::EventHandler(this, &MyForm1::detailsLabel_TextChanged);
			// 
			// detailsLabel1
			// 
			this->detailsLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->detailsLabel1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailsLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->detailsLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->detailsLabel1->Location = System::Drawing::Point(2, 99);
			this->detailsLabel1->Margin = System::Windows::Forms::Padding(2);
			this->detailsLabel1->Multiline = true;
			this->detailsLabel1->Name = L"detailsLabel1";
			this->detailsLabel1->Size = System::Drawing::Size(626, 20);
			this->detailsLabel1->TabIndex = 23;
			// 
			// detailsLabel2
			// 
			this->detailsLabel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->detailsLabel2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailsLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->detailsLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->detailsLabel2->Location = System::Drawing::Point(0, 123);
			this->detailsLabel2->Margin = System::Windows::Forms::Padding(2);
			this->detailsLabel2->Multiline = true;
			this->detailsLabel2->Name = L"detailsLabel2";
			this->detailsLabel2->Size = System::Drawing::Size(626, 20);
			this->detailsLabel2->TabIndex = 24;
			this->detailsLabel2->TextChanged += gcnew System::EventHandler(this, &MyForm1::detailsLabel2_TextChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(675, 585);
			this->Controls->Add(this->detailsLabel2);
			this->Controls->Add(this->detailsLabel1);
			this->Controls->Add(this->detailsLabel);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->search);
			this->Controls->Add(this->passwordEntry);
			this->Controls->Add(this->usernameEntry);
			this->Controls->Add(this->websiteEntry);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->signInButton);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm1";
			this->Text = L"Wizardo";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string fileName = "details.txt";

		// Open the file for writing
		std::ofstream outputFileStream;

		// Check if the file exists
		std::ifstream fileStream(fileName);
		bool fileExists = fileStream.good();
		fileStream.close();

		// If the file does not exist, create it
		if (!fileExists) {
			outputFileStream.open(fileName, std::ios_base::out);
			outputFileStream.close();
		}

		// Open the file for appending
		outputFileStream.open(fileName, std::ios_base::app);

		// Write the data to the file
		outputFileStream << msclr::interop::marshal_as<std::string>(websiteEntry->Text)<<" ";
		outputFileStream << msclr::interop::marshal_as<std::string>(usernameEntry->Text)<<" ";
		outputFileStream << msclr::interop::marshal_as<std::string>(passwordEntry->Text)<<" ";

		// Close the file stream
		outputFileStream.close();

		// Show a message box indicating that the file was saved successfully
		MessageBoxA(NULL, "File saved successfully.", "Save File", MB_OK);

		// Clear the text boxes
		websiteEntry->Text = "";
		usernameEntry->Text = "";
		passwordEntry->Text = "";

		// Focus the cursor on the website entry box
		websiteEntry->Focus();
	}

	
	private: System::Void usernameTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		usernameTextBox->Clear();
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		int passwordPool[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z' };
		if ((int)checkBox1->CheckState == 1) {
			std::string newPassword;
			srand(time(NULL));
			for (int i = 0; i < 8; i++) {
				newPassword += passwordPool[rand() % 51];
			}
			System::String^ newPasswordString = gcnew String(newPassword.c_str());
			std::string messagePromptString = "Your password is " + newPassword;
			System::String^ messagePrompt = gcnew String(messagePromptString.c_str());
			MessageBox::Show(messagePrompt, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			passwordEntry->Text = newPasswordString;
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open the file "details.txt" for reading
	std::ifstream fileStream("details.txt");
	if (!fileStream) {
		MessageBox::Show("Error: File not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Read the lines of the file and look for the username
	std::string line;
	while (std::getline(fileStream, line)) {
		std::istringstream iss(line);
		std::string website, username, password;
		iss >> website >> username >> password;
		if (msclr::interop::marshal_as<System::String^>(username) == usernameTextBox->Text) {
			// Display the details in the label
			detailsLabel->Text = "Website: " + msclr::interop::marshal_as<System::String^>(website);
			detailsLabel1->Text = "Username: " + msclr::interop::marshal_as<System::String^>(username);
			detailsLabel2->Text = "Password: " + msclr::interop::marshal_as<System::String^>(password);
		
			return;
		}
	}

	// If the username is not found, display an error message
	MessageBox::Show("Error: Username not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void detailsLabel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void detailsLabel2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
