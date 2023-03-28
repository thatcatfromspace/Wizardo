#pragma once

namespace Wizardo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ signInLabel;
	private: System::Windows::Forms::Label^ usernamePromptLabel;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ passwordPromptLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Label^ signUpPromptLabel;
	private: System::Windows::Forms::LinkLabel^ signUpLinkLabel;
	private: System::Windows::Forms::Label^ incorrectInfoLabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->signInLabel = (gcnew System::Windows::Forms::Label());
			this->usernamePromptLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->passwordPromptLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->signUpPromptLabel = (gcnew System::Windows::Forms::Label());
			this->signUpLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->incorrectInfoLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signInLabel
			// 
			this->signInLabel->AutoSize = true;
			this->signInLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->signInLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signInLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->signInLabel->Location = System::Drawing::Point(537, 57);
			this->signInLabel->Name = L"signInLabel";
			this->signInLabel->Size = System::Drawing::Size(102, 38);
			this->signInLabel->TabIndex = 0;
			this->signInLabel->Text = L"Sign In";
			// 
			// usernamePromptLabel
			// 
			this->usernamePromptLabel->AutoSize = true;
			this->usernamePromptLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->usernamePromptLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamePromptLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->usernamePromptLabel->Location = System::Drawing::Point(538, 128);
			this->usernamePromptLabel->Name = L"usernamePromptLabel";
			this->usernamePromptLabel->Size = System::Drawing::Size(117, 31);
			this->usernamePromptLabel->TabIndex = 1;
			this->usernamePromptLabel->Text = L"Username";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->usernameTextBox->Location = System::Drawing::Point(544, 176);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(242, 31);
			this->usernameTextBox->TabIndex = 2;
			this->usernameTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::usernameTextBox_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel1->Location = System::Drawing::Point(544, 209);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(254, 4);
			this->panel1->TabIndex = 3;
			// 
			// passwordPromptLabel
			// 
			this->passwordPromptLabel->AutoSize = true;
			this->passwordPromptLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->passwordPromptLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordPromptLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->passwordPromptLabel->Location = System::Drawing::Point(538, 227);
			this->passwordPromptLabel->Name = L"passwordPromptLabel";
			this->passwordPromptLabel->Size = System::Drawing::Size(110, 31);
			this->passwordPromptLabel->TabIndex = 4;
			this->passwordPromptLabel->Text = L"Password";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->passwordTextBox->Location = System::Drawing::Point(551, 280);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(242, 31);
			this->passwordTextBox->TabIndex = 5;
			this->passwordTextBox->UseSystemPasswordChar = true;
			this->passwordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::passwordTextBox_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->panel2->Location = System::Drawing::Point(544, 313);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(255, 4);
			this->panel2->TabIndex = 6;
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
			this->signInButton->Location = System::Drawing::Point(544, 373);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(88, 39);
			this->signInButton->TabIndex = 7;
			this->signInButton->Text = L"Sign In";
			this->signInButton->UseVisualStyleBackColor = false;
			this->signInButton->Click += gcnew System::EventHandler(this, &MyForm::signInButton_Click);
			// 
			// signUpPromptLabel
			// 
			this->signUpPromptLabel->AutoSize = true;
			this->signUpPromptLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->signUpPromptLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUpPromptLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->signUpPromptLabel->Location = System::Drawing::Point(638, 390);
			this->signUpPromptLabel->Name = L"signUpPromptLabel";
			this->signUpPromptLabel->Size = System::Drawing::Size(140, 17);
			this->signUpPromptLabel->TabIndex = 8;
			this->signUpPromptLabel->Text = L"Not a registered user\?";
			// 
			// signUpLinkLabel
			// 
			this->signUpLinkLabel->AutoSize = true;
			this->signUpLinkLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->signUpLinkLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUpLinkLabel->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->signUpLinkLabel->Location = System::Drawing::Point(768, 390);
			this->signUpLinkLabel->Name = L"signUpLinkLabel";
			this->signUpLinkLabel->Size = System::Drawing::Size(55, 17);
			this->signUpLinkLabel->TabIndex = 9;
			this->signUpLinkLabel->TabStop = true;
			this->signUpLinkLabel->Text = L"Sign up.";
			// 
			// incorrectInfoLabel
			// 
			this->incorrectInfoLabel->AutoSize = true;
			this->incorrectInfoLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->incorrectInfoLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->incorrectInfoLabel->ForeColor = System::Drawing::Color::Firebrick;
			this->incorrectInfoLabel->Location = System::Drawing::Point(541, 330);
			this->incorrectInfoLabel->Name = L"incorrectInfoLabel";
			this->incorrectInfoLabel->Size = System::Drawing::Size(20, 17);
			this->incorrectInfoLabel->TabIndex = 10;
			this->incorrectInfoLabel->Text = L"   ";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 510);
			this->Controls->Add(this->incorrectInfoLabel);
			this->Controls->Add(this->signUpLinkLabel);
			this->Controls->Add(this->signUpPromptLabel);
			this->Controls->Add(this->signInButton);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordPromptLabel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->usernamePromptLabel);
			this->Controls->Add(this->signInLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimumSize = System::Drawing::Size(918, 557);
			this->Name = L"MyForm";
			this->Text = L"Wizardo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void usernameTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		passwordTextBox->Focus();
	}
}

private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ username = usernameTextBox->Text, ^pass = passwordTextBox->Text;
	if (username != "admin" || pass != "root") {
		incorrectInfoLabel->Text = "Incorrect username or password.";
	}
}
private: System::Void passwordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		signInButton->PerformClick();
	}
}
};
}
