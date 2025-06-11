#pragma once
#include "User.h"
#include "Words.h"
#include "WordGame.h"
#include <random>
static Words wordlist[20];

namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	
	/// <summary>
	/// LearnMenu için özet
	/// </summary>
	public ref class LearnMenu : public System::Windows::Forms::Form
	{
	public:
		
		LearnMenu(User^ user)
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
		~LearnMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ engTitle;
	protected:
	private: System::Windows::Forms::Label^ engWord;
	private: System::Windows::Forms::Label^ turTitle;
	private: System::Windows::Forms::Label^ turWord;
	private: System::Windows::Forms::Label^ expTitle;
	private: System::Windows::Forms::Label^ example;
	private: System::Windows::Forms::Button^ showbtn;
	private: System::Windows::Forms::Button^ exitbtn;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LearnMenu::typeid));
			this->engTitle = (gcnew System::Windows::Forms::Label());
			this->engWord = (gcnew System::Windows::Forms::Label());
			this->turTitle = (gcnew System::Windows::Forms::Label());
			this->turWord = (gcnew System::Windows::Forms::Label());
			this->expTitle = (gcnew System::Windows::Forms::Label());
			this->example = (gcnew System::Windows::Forms::Label());
			this->showbtn = (gcnew System::Windows::Forms::Button());
			this->exitbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// engTitle
			// 
			this->engTitle->AutoSize = true;
			this->engTitle->BackColor = System::Drawing::Color::Transparent;
			this->engTitle->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->engTitle->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->engTitle->Location = System::Drawing::Point(97, 95);
			this->engTitle->Name = L"engTitle";
			this->engTitle->Size = System::Drawing::Size(150, 29);
			this->engTitle->TabIndex = 0;
			this->engTitle->Text = L"English Word :";
			// 
			// engWord
			// 
			this->engWord->AutoSize = true;
			this->engWord->BackColor = System::Drawing::Color::Transparent;
			this->engWord->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->engWord->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->engWord->Location = System::Drawing::Point(279, 95);
			this->engWord->Name = L"engWord";
			this->engWord->Size = System::Drawing::Size(0, 29);
			this->engWord->TabIndex = 1;
			// 
			// turTitle
			// 
			this->turTitle->AutoSize = true;
			this->turTitle->BackColor = System::Drawing::Color::Transparent;
			this->turTitle->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->turTitle->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->turTitle->Location = System::Drawing::Point(97, 187);
			this->turTitle->Name = L"turTitle";
			this->turTitle->Size = System::Drawing::Size(153, 29);
			this->turTitle->TabIndex = 2;
			this->turTitle->Text = L"Turkish Word :";
			// 
			// turWord
			// 
			this->turWord->AutoSize = true;
			this->turWord->BackColor = System::Drawing::Color::Transparent;
			this->turWord->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->turWord->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->turWord->Location = System::Drawing::Point(279, 187);
			this->turWord->Name = L"turWord";
			this->turWord->Size = System::Drawing::Size(0, 29);
			this->turWord->TabIndex = 3;
			// 
			// expTitle
			// 
			this->expTitle->AutoSize = true;
			this->expTitle->BackColor = System::Drawing::Color::Transparent;
			this->expTitle->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->expTitle->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->expTitle->Location = System::Drawing::Point(97, 319);
			this->expTitle->Name = L"expTitle";
			this->expTitle->Size = System::Drawing::Size(102, 29);
			this->expTitle->TabIndex = 4;
			this->expTitle->Text = L"Example :";
			// 
			// example
			// 
			this->example->AutoSize = true;
			this->example->BackColor = System::Drawing::Color::Transparent;
			this->example->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->example->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->example->Location = System::Drawing::Point(279, 319);
			this->example->Name = L"example";
			this->example->Size = System::Drawing::Size(0, 29);
			this->example->TabIndex = 5;
			// 
			// showbtn
			// 
			this->showbtn->BackColor = System::Drawing::Color::Transparent;
			this->showbtn->FlatAppearance->BorderSize = 0;
			this->showbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showbtn->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->showbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->showbtn->Location = System::Drawing::Point(191, 429);
			this->showbtn->Name = L"showbtn";
			this->showbtn->Size = System::Drawing::Size(255, 35);
			this->showbtn->TabIndex = 6;
			this->showbtn->Text = L"Show Words";
			this->showbtn->UseVisualStyleBackColor = false;
			this->showbtn->Click += gcnew System::EventHandler(this, &LearnMenu::showbtn_Click);
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Transparent;
			this->exitbtn->FlatAppearance->BorderSize = 0;
			this->exitbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitbtn->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->exitbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->exitbtn->Location = System::Drawing::Point(696, 465);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(138, 35);
			this->exitbtn->TabIndex = 7;
			this->exitbtn->Text = L"Exit ";
			this->exitbtn->UseVisualStyleBackColor = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &LearnMenu::exitbtn_Click);
			// 
			// LearnMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(846, 512);
			this->Controls->Add(this->exitbtn);
			this->Controls->Add(this->showbtn);
			this->Controls->Add(this->example);
			this->Controls->Add(this->expTitle);
			this->Controls->Add(this->turWord);
			this->Controls->Add(this->turTitle);
			this->Controls->Add(this->engWord);
			this->Controls->Add(this->engTitle);
			this->Name = L"LearnMenu";
			this->Text = L"Word Game";
			this->Load += gcnew System::EventHandler(this, &LearnMenu::LearnMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool switchMain = false;
		
private: System::Void exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	switchMain = true;
	this->Close();
}
	   public: int c{ 0 };
private: System::Void showbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int limit = wordGame::WordGame::wordsNumber;
	if (c < limit) {
		Words word =wordlist[c];
		std::string e = word.engWord;
		std::string t = word.turWord;
		std::string exp = word.example;
		String^ eng = gcnew String(e.c_str());
		String^ tur = gcnew String(t.c_str());
		String^ exampl = gcnew String(exp.c_str());
		engWord->Text = eng;
		turWord->Text = tur;
		example->Text = exampl;
		c++;
		if (c == limit) {
			MessageBox::Show("This is it. Come back again if you want to learn more words.", "Learning Words", MessageBoxButtons::OK);
			this->Close();
		}
	}
	else {
		MessageBox::Show("This is it. Come back again if you want to learn more words.", "Learning Words", MessageBoxButtons::OK);
		this->Close();
	}
}
private: System::Void LearnMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	int count{ 0 };
	c = 0;
	int limit = wordGame::WordGame::wordsNumber;
	try {
		String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlc(cstring);
		sqlc.Open();

		String^ sqlQuery = "SELECT MAX(WordID) FROM Words;";
		SqlCommand command(sqlQuery, % sqlc);
		SqlDataReader^ reader = command.ExecuteReader();
		reader->Read();
		count = reader->GetInt32(0);
		sqlc.Close();
	}
	catch (Exception^ exception) {
		MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
	}
	try {
		
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> distr(1, count);


		for (int i = 0;i <= limit;i++) {

			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();
			String^ sqlQuery2 = "SELECT * FROM Words WHERE WordID=@WordID;";
			SqlCommand command2(sqlQuery2, % sqlc);
			int a = distr(gen);
			command2.Parameters->AddWithValue("@WordID",a );
			SqlDataReader^ reader2 = command2.ExecuteReader();
			reader2->Read();
			Words word;
			word.ID = reader2->GetInt32(0);
			String^ eng = reader2->GetString(1);
			String^ tur = reader2->GetString(2);
			word.learned = reader2->GetBoolean(4);
			char cStr[50] = { 0 };
			if (eng->Length < sizeof(cStr))
				sprintf(cStr, "%s", eng);
			word.engWord = cStr;
			char cStr2[50] = { 0 };
			if (tur->Length < sizeof(cStr2))
				sprintf(cStr2, "%s", tur);
			word.turWord = cStr2;
			sqlc.Close();

			SqlConnection sqlc2(cstring);
			sqlc2.Open();
			String^ sqlQuery3 = "SELECT Examples FROM wordExamples WHERE exampleID=@exampleID;";
			SqlCommand command3(sqlQuery3, % sqlc2);
			command3.Parameters->AddWithValue("@exampleID", a);
			SqlDataReader^ reader3 = command3.ExecuteReader();
			reader3->Read();
			String^ example = reader3->GetString(0);
			char cStr3[200] = { 0 };
			if (example->Length < sizeof(cStr3))
				sprintf(cStr3, "%s", example);
			word.example = cStr3;
			wordlist[i] = word;
			sqlc2.Close();
		}

	}
	catch (Exception^ exception) {
		MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
	}
}

};
}
