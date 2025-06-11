#pragma once
#include "User.h"
#include <random>
#include "WordGame.h"
#include "Words.h"
#include <cstring>
static Words wordlist2[20];
namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// wordTest için özet
	/// </summary>
	public ref class wordTest : public System::Windows::Forms::Form
	{
	public:
		wordTest(User^ user)
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
		~wordTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ engWord_t;
	protected:
	private: System::Windows::Forms::Label^ testTitle;
	private: System::Windows::Forms::TextBox^ turwbox;
	private: System::Windows::Forms::Button^ confirmbtn;

	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ shwWord;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wordTest::typeid));
			this->engWord_t = (gcnew System::Windows::Forms::Label());
			this->testTitle = (gcnew System::Windows::Forms::Label());
			this->turwbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmbtn = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->shwWord = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// engWord_t
			// 
			this->engWord_t->AutoSize = true;
			this->engWord_t->BackColor = System::Drawing::Color::Transparent;
			this->engWord_t->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->engWord_t->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->engWord_t->Location = System::Drawing::Point(150, 250);
			this->engWord_t->Name = L"engWord_t";
			this->engWord_t->Size = System::Drawing::Size(0, 43);
			this->engWord_t->TabIndex = 0;
			// 
			// testTitle
			// 
			this->testTitle->AutoSize = true;
			this->testTitle->BackColor = System::Drawing::Color::Transparent;
			this->testTitle->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->testTitle->ForeColor = System::Drawing::Color::Cornsilk;
			this->testTitle->Location = System::Drawing::Point(113, 94);
			this->testTitle->Name = L"testTitle";
			this->testTitle->Size = System::Drawing::Size(620, 60);
			this->testTitle->TabIndex = 1;
			this->testTitle->Text = L"What is the turkish translation";
			// 
			// turwbox
			// 
			this->turwbox->BackColor = System::Drawing::Color::Cornsilk;
			this->turwbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->turwbox->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->turwbox->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->turwbox->Location = System::Drawing::Point(445, 255);
			this->turwbox->Name = L"turwbox";
			this->turwbox->Size = System::Drawing::Size(288, 33);
			this->turwbox->TabIndex = 2;
			// 
			// confirmbtn
			// 
			this->confirmbtn->BackColor = System::Drawing::Color::Transparent;
			this->confirmbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->confirmbtn->FlatAppearance->BorderColor = System::Drawing::Color::Cornsilk;
			this->confirmbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->confirmbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmbtn->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->confirmbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->confirmbtn->Location = System::Drawing::Point(521, 294);
			this->confirmbtn->Name = L"confirmbtn";
			this->confirmbtn->Size = System::Drawing::Size(149, 34);
			this->confirmbtn->TabIndex = 3;
			this->confirmbtn->Text = L"CONFIRM";
			this->confirmbtn->UseVisualStyleBackColor = false;
			this->confirmbtn->Click += gcnew System::EventHandler(this, &wordTest::confirmbtn_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->BackColor = System::Drawing::Color::Transparent;
			this->result->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->result->ForeColor = System::Drawing::Color::Cornsilk;
			this->result->Location = System::Drawing::Point(222, 408);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 36);
			this->result->TabIndex = 4;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->exit->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->exit->Location = System::Drawing::Point(710, 449);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(132, 41);
			this->exit->TabIndex = 5;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &wordTest::exit_Click);
			// 
			// shwWord
			// 
			this->shwWord->BackColor = System::Drawing::Color::Transparent;
			this->shwWord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->shwWord->FlatAppearance->BorderColor = System::Drawing::Color::Cornsilk;
			this->shwWord->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->shwWord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shwWord->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->shwWord->ForeColor = System::Drawing::Color::Cornsilk;
			this->shwWord->Location = System::Drawing::Point(123, 296);
			this->shwWord->Name = L"shwWord";
			this->shwWord->Size = System::Drawing::Size(149, 34);
			this->shwWord->TabIndex = 6;
			this->shwWord->Text = L"Show Words";
			this->shwWord->UseVisualStyleBackColor = false;
			this->shwWord->Click += gcnew System::EventHandler(this, &wordTest::shwWord_Click);
			// 
			// wordTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(842, 493);
			this->Controls->Add(this->shwWord);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->result);
			this->Controls->Add(this->confirmbtn);
			this->Controls->Add(this->turwbox);
			this->Controls->Add(this->testTitle);
			this->Controls->Add(this->engWord_t);
			this->Name = L"wordTest";
			this->Text = L"Word Game";
			this->Load += gcnew System::EventHandler(this, &wordTest::wordTest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool switchMain = false;
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		switchMain = true;
		this->Close();
	}
		   public: int c{ 0 };
private: System::Void wordTest_Load(System::Object^ sender, System::EventArgs^ e) {
	int count{ 0 };
	c = 0;
	confirmbtn->Visible = false;
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
			command2.Parameters->AddWithValue("@WordID", a);
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
			wordlist2[i] = word;
			sqlc.Close();
		}
	}
	catch (Exception^ exception) {
		MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
	}
		
}
	   
private: System::Void confirmbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int limit = wordGame::WordGame::wordsNumber;
	if (c < limit) {
		confirmbtn->Visible = false;
		std::string tr = wordlist2[c].turWord;
		String^ g_tur = turwbox->Text;
		char cStr[50] = { 0 };
		if (g_tur->Length < sizeof(cStr))
			sprintf(cStr, "%s", g_tur);
		std::string guess = cStr;
		for (int i = 0;i < tr.length();i++) {
			tr.at(i) = std::toupper(tr.at(i));
		}
		for (int i = 0;i < guess.length();i++) {
			guess.at(i) = std::toupper(guess.at(i));
		}
		
		if (tr.compare(guess) == 0) {
			c++;
			result->Text = "Your guess was right!";
			if (c == limit) {
				MessageBox::Show("Test is over.", "wordTest", MessageBoxButtons::OK);
				switchMain = true;
				this->Close();
			}
			
		}
		else {
			c++;
			if (c < limit) {
				result->Text = "Your guess was wrong.Skip to next word.";
				
			}
			else if (c == limit) {
				result->Text = "Your guess was wrong.";
				MessageBox::Show("Test is over.", "wordTest", MessageBoxButtons::OK);
				switchMain = true;
				this->Close();
			}
		}




	}
	
}
private: System::Void shwWord_Click(System::Object^ sender, System::EventArgs^ e) {
	int limit = wordGame::WordGame::wordsNumber;
	
	confirmbtn->Visible = true;
	if (c < limit) {
		std::string en = wordlist2[c].engWord;
		String^ eng = gcnew String(en.c_str());
		engWord_t->Text = eng;
	
	}

	
}
};
}
