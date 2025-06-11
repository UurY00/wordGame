#pragma once
#include <string>
#include "User.h"

namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Login için özet
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loginFont;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::TextBox^ usernamebox;


	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ passwordbox;
	private: System::Windows::Forms::Button^ logbtn;
	private: System::Windows::Forms::Button^ regbtn;
	private: System::Windows::Forms::Label^ resetpsw;




	protected:


	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->loginFont = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->usernamebox = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->passwordbox = (gcnew System::Windows::Forms::TextBox());
			this->logbtn = (gcnew System::Windows::Forms::Button());
			this->regbtn = (gcnew System::Windows::Forms::Button());
			this->resetpsw = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginFont
			// 
			this->loginFont->BackColor = System::Drawing::Color::Transparent;
			this->loginFont->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->loginFont->ForeColor = System::Drawing::SystemColors::GrayText;
			this->loginFont->Location = System::Drawing::Point(82, 97);
			this->loginFont->Name = L"loginFont";
			this->loginFont->Size = System::Drawing::Size(313, 49);
			this->loginFont->TabIndex = 0;
			this->loginFont->Text = L"Login";
			this->loginFont->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->username->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->username->Location = System::Drawing::Point(84, 165);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(313, 49);
			this->username->TabIndex = 1;
			this->username->Text = L"Username";
			// 
			// usernamebox
			// 
			this->usernamebox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->usernamebox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernamebox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->usernamebox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->usernamebox->Location = System::Drawing::Point(88, 188);
			this->usernamebox->Name = L"usernamebox";
			this->usernamebox->Size = System::Drawing::Size(245, 19);
			this->usernamebox->TabIndex = 2;
			this->usernamebox->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->password->Location = System::Drawing::Point(86, 227);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(313, 49);
			this->password->TabIndex = 4;
			this->password->Text = L"Password";
			this->password->Click += gcnew System::EventHandler(this, &Login::password_Click);
			// 
			// passwordbox
			// 
			this->passwordbox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->passwordbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->passwordbox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->passwordbox->Location = System::Drawing::Point(88, 257);
			this->passwordbox->Name = L"passwordbox";
			this->passwordbox->Size = System::Drawing::Size(245, 19);
			this->passwordbox->TabIndex = 5;
			this->passwordbox->UseSystemPasswordChar = true;
			// 
			// logbtn
			// 
			this->logbtn->BackColor = System::Drawing::Color::Transparent;
			this->logbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->logbtn->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->logbtn->Location = System::Drawing::Point(90, 339);
			this->logbtn->Name = L"logbtn";
			this->logbtn->Size = System::Drawing::Size(116, 40);
			this->logbtn->TabIndex = 7;
			this->logbtn->Text = L"Login";
			this->logbtn->UseVisualStyleBackColor = false;
			this->logbtn->Click += gcnew System::EventHandler(this, &Login::logbtn_Click);
			// 
			// regbtn
			// 
			this->regbtn->BackColor = System::Drawing::Color::Transparent;
			this->regbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->regbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->regbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->regbtn->Location = System::Drawing::Point(231, 339);
			this->regbtn->Name = L"regbtn";
			this->regbtn->Size = System::Drawing::Size(116, 40);
			this->regbtn->TabIndex = 8;
			this->regbtn->Text = L"Register";
			this->regbtn->UseVisualStyleBackColor = false;
			this->regbtn->Click += gcnew System::EventHandler(this, &Login::regbtn_Click);
			// 
			// resetpsw
			// 
			this->resetpsw->AutoSize = true;
			this->resetpsw->BackColor = System::Drawing::Color::Transparent;
			this->resetpsw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetpsw->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->resetpsw->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->resetpsw->Location = System::Drawing::Point(275, 393);
			this->resetpsw->Name = L"resetpsw";
			this->resetpsw->Size = System::Drawing::Size(120, 15);
			this->resetpsw->TabIndex = 9;
			this->resetpsw->Text = L"I forget my password";
			this->resetpsw->Click += gcnew System::EventHandler(this, &Login::resetpsw_Click);
			this->resetpsw->MouseLeave += gcnew System::EventHandler(this, &Login::resetpsw_MouseLeave);
			this->resetpsw->MouseHover += gcnew System::EventHandler(this, &Login::resetpsw_MouseHover);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(756, 461);
			this->Controls->Add(this->resetpsw);
			this->Controls->Add(this->regbtn);
			this->Controls->Add(this->logbtn);
			this->Controls->Add(this->passwordbox);
			this->Controls->Add(this->password);
			this->Controls->Add(this->usernamebox);
			this->Controls->Add(this->username);
			this->Controls->Add(this->loginFont);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Login";
			this->Text = L"Word Game";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void password_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public: User^ user0 = nullptr;
private: System::Void logbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ user = this->usernamebox->Text;
	String^ psw = this->passwordbox->Text;
	if (user->Length == 0 || psw->Length == 0) {
		MessageBox::Show("Username or Password is empty. Please enter a username or password.", "Login Error", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlc(cstring);
		sqlc.Open();

		String^ sqlQuery = "SELECT * FROM Users WHERE Username=@Username AND Password=@Password;";
		SqlCommand command(sqlQuery, % sqlc);
		command.Parameters->AddWithValue("@Username", user);
		command.Parameters->AddWithValue("@Password", psw);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user0 = gcnew User;
			user0->userName = reader->GetString(1);
			user0->passWord = reader->GetString(2);

			this->Close();
		}
		else {
			MessageBox::Show("Username or Password is incorrect.", "Login Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ exception) {
		MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
	}
}public: bool switchReg = false;
private: System::Void regbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	switchReg = true;
	this->Close();
}
public: bool switchReset = false;
private: System::Void resetpsw_Click(System::Object^ sender, System::EventArgs^ e) {
	switchReset = true;
	this->Close();
}
private: System::Void resetpsw_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	resetpsw->ForeColor = System::Drawing::Color::DarkGray;
}
private: System::Void resetpsw_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	resetpsw->ForeColor = System::Drawing::Color::DimGray;
}
};
}
