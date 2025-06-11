#pragma once

namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// ResetPassword için özet
	/// </summary>
	public ref class ResetPassword : public System::Windows::Forms::Form
	{
	public:
		ResetPassword(void)
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
		~ResetPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ loginbtn;

	private: System::Windows::Forms::TextBox^ resetCnfrmPsw;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ resetPsw;


	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ resetUser;

	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Button^ resetbtn;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResetPassword::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->resetCnfrmPsw = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resetPsw = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->resetUser = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->resetbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(88, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reset Password";
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::Transparent;
			this->loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->loginbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->loginbtn->Location = System::Drawing::Point(259, 377);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(80, 34);
			this->loginbtn->TabIndex = 1;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &ResetPassword::loginbtn_Click);
			// 
			// resetCnfrmPsw
			// 
			this->resetCnfrmPsw->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->resetCnfrmPsw->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resetCnfrmPsw->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->resetCnfrmPsw->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resetCnfrmPsw->Location = System::Drawing::Point(94, 333);
			this->resetCnfrmPsw->Name = L"resetCnfrmPsw";
			this->resetCnfrmPsw->Size = System::Drawing::Size(245, 19);
			this->resetCnfrmPsw->TabIndex = 24;
			this->resetCnfrmPsw->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Location = System::Drawing::Point(90, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 49);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Confirm New Password";
			// 
			// resetPsw
			// 
			this->resetPsw->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->resetPsw->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resetPsw->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->resetPsw->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resetPsw->Location = System::Drawing::Point(94, 259);
			this->resetPsw->Name = L"resetPsw";
			this->resetPsw->Size = System::Drawing::Size(245, 19);
			this->resetPsw->TabIndex = 22;
			this->resetPsw->UseSystemPasswordChar = true;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->password->Location = System::Drawing::Point(92, 229);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(313, 49);
			this->password->TabIndex = 21;
			this->password->Text = L"New Password";
			// 
			// resetUser
			// 
			this->resetUser->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->resetUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resetUser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->resetUser->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resetUser->Location = System::Drawing::Point(94, 190);
			this->resetUser->Name = L"resetUser";
			this->resetUser->Size = System::Drawing::Size(245, 19);
			this->resetUser->TabIndex = 20;
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->username->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->username->Location = System::Drawing::Point(90, 167);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(313, 49);
			this->username->TabIndex = 19;
			this->username->Text = L"Username";
			// 
			// resetbtn
			// 
			this->resetbtn->BackColor = System::Drawing::Color::Transparent;
			this->resetbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resetbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->resetbtn->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->resetbtn->Location = System::Drawing::Point(94, 377);
			this->resetbtn->Name = L"resetbtn";
			this->resetbtn->Size = System::Drawing::Size(144, 34);
			this->resetbtn->TabIndex = 25;
			this->resetbtn->Text = L"Reset Password";
			this->resetbtn->UseVisualStyleBackColor = false;
			this->resetbtn->Click += gcnew System::EventHandler(this, &ResetPassword::resetbtn_Click);
			// 
			// ResetPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(902, 573);
			this->Controls->Add(this->resetbtn);
			this->Controls->Add(this->resetCnfrmPsw);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->resetPsw);
			this->Controls->Add(this->password);
			this->Controls->Add(this->resetUser);
			this->Controls->Add(this->username);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->label1);
			this->Name = L"ResetPassword";
			this->Text = L"ResetPassword";
			this->Load += gcnew System::EventHandler(this, &ResetPassword::ResetPassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchLogin = false;
	private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		switchLogin = true;
		this->Close();
	}
	private: System::Void ResetPassword_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resetbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = resetUser->Text;
		String^ password = resetPsw->Text;
		String^ confirmPassword = resetCnfrmPsw->Text;
		if (username->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Username or Password is empty. Please enter all.", "Reset Error", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Passwords dont match. Please enter again.", "Reset Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE Username=@Username;";
			SqlCommand command(sqlQuery, % sqlc);
			command.Parameters->AddWithValue("@Username", username);

			if (command.ExecuteScalar() == nullptr) {
				MessageBox::Show("Username not found. Please enter another one.", "Reset Error", MessageBoxButtons::OK);
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

			String^ sqlQuery = "UPDATE Users SET Password=@Password WHERE Username=@Username";
			SqlCommand command(sqlQuery, % sqlc);
			command.Parameters->AddWithValue("@Password", password);
			command.Parameters->AddWithValue("@Username", username);

			command.ExecuteNonQuery();
			switchLogin = true;
			this->Close();

		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}
	}
};
}
