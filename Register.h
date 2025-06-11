#pragma once
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
	/// Register için özet
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginbtn;
	protected:

	private: System::Windows::Forms::Button^ registerBtn;
	protected:

	private: System::Windows::Forms::TextBox^ regPsw;

	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ regUser;

	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ registerFnt;
	private: System::Windows::Forms::TextBox^ ConfPsw;

	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->registerBtn = (gcnew System::Windows::Forms::Button());
			this->regPsw = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->regUser = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->registerFnt = (gcnew System::Windows::Forms::Label());
			this->ConfPsw = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::Transparent;
			this->loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->loginbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->loginbtn->Location = System::Drawing::Point(232, 362);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(116, 40);
			this->loginbtn->TabIndex = 16;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &Register::loginbtn_Click);
			// 
			// registerBtn
			// 
			this->registerBtn->BackColor = System::Drawing::Color::Transparent;
			this->registerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->registerBtn->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->registerBtn->Location = System::Drawing::Point(90, 362);
			this->registerBtn->Name = L"registerBtn";
			this->registerBtn->Size = System::Drawing::Size(116, 40);
			this->registerBtn->TabIndex = 15;
			this->registerBtn->Text = L"Register";
			this->registerBtn->UseVisualStyleBackColor = false;
			this->registerBtn->Click += gcnew System::EventHandler(this, &Register::registerBtn_Click);
			// 
			// regPsw
			// 
			this->regPsw->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->regPsw->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->regPsw->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->regPsw->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->regPsw->Location = System::Drawing::Point(90, 232);
			this->regPsw->Name = L"regPsw";
			this->regPsw->Size = System::Drawing::Size(245, 19);
			this->regPsw->TabIndex = 14;
			this->regPsw->UseSystemPasswordChar = true;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->password->Location = System::Drawing::Point(88, 202);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(313, 49);
			this->password->TabIndex = 13;
			this->password->Text = L"Password";
			// 
			// regUser
			// 
			this->regUser->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->regUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->regUser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->regUser->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->regUser->Location = System::Drawing::Point(90, 163);
			this->regUser->Name = L"regUser";
			this->regUser->Size = System::Drawing::Size(245, 19);
			this->regUser->TabIndex = 12;
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->username->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->username->Location = System::Drawing::Point(86, 140);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(313, 49);
			this->username->TabIndex = 11;
			this->username->Text = L"Username";
			// 
			// registerFnt
			// 
			this->registerFnt->BackColor = System::Drawing::Color::Transparent;
			this->registerFnt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->registerFnt->ForeColor = System::Drawing::SystemColors::GrayText;
			this->registerFnt->Location = System::Drawing::Point(84, 72);
			this->registerFnt->Name = L"registerFnt";
			this->registerFnt->Size = System::Drawing::Size(313, 49);
			this->registerFnt->TabIndex = 10;
			this->registerFnt->Text = L"Register";
			// 
			// ConfPsw
			// 
			this->ConfPsw->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ConfPsw->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConfPsw->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->ConfPsw->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ConfPsw->Location = System::Drawing::Point(90, 306);
			this->ConfPsw->Name = L"ConfPsw";
			this->ConfPsw->Size = System::Drawing::Size(245, 19);
			this->ConfPsw->TabIndex = 18;
			this->ConfPsw->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(86, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 49);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Confirm Password";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(791, 479);
			this->Controls->Add(this->ConfPsw);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->registerBtn);
			this->Controls->Add(this->regPsw);
			this->Controls->Add(this->password);
			this->Controls->Add(this->regUser);
			this->Controls->Add(this->username);
			this->Controls->Add(this->registerFnt);
			this->Name = L"Register";
			this->Text = L"Word Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: User^ user0 = nullptr;
	private: System::Void registerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = regUser->Text;
		String^ password = regPsw->Text;
		String^ confirmPassword = ConfPsw->Text;

		if (username->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Username or Password is empty. Please enter all.", "Register Error", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Passwords dont match. Please enter again.", "Register Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE Username=@Username;";
			SqlCommand command(sqlQuery, % sqlc);
			command.Parameters->AddWithValue("@Username", username);
			
			if (command.ExecuteScalar() != nullptr) {
				MessageBox::Show("Username exist. Please enter another one.", "Register Error", MessageBoxButtons::OK);
				sqlc.Close();
				return;
			}
			sqlc.Close();

		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}
		try {
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();

			String^ sqlQuery = "INSERT INTO Users " + "(Username, Password) VALUES " + "(@Username, @Password);";
			SqlCommand command(sqlQuery, % sqlc);
			command.Parameters->AddWithValue("@Username", username);
			command.Parameters->AddWithValue("@Password", password);

			command.ExecuteNonQuery();

			
			
				user0 = gcnew User;
				user0->userName = username;
				user0->passWord = password;

				this->Close();
			
			
		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}
	}
	public: bool switchLog = false;
private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	switchLog = true;
	this->Close();
}
};
}
