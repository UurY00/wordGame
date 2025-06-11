#pragma once
#include "User.h"

namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WordGame için özet
	/// </summary>
	public ref class WordGame : public System::Windows::Forms::Form
	{
	public:
		WordGame(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
			userinfo->Text = user->userName;
			label2->Visible = false;
			wnumber1->Visible = false;
			wnumber2->Visible = false;
			wnumber3->Visible = false;
			wnumber4->Visible = false;
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~WordGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ userinfo;
	private: System::Windows::Forms::Button^ learnbtn;


	private: System::Windows::Forms::Button^ wordTest;

	private: System::Windows::Forms::Button^ settings;
	private: System::Windows::Forms::Button^ wordle;
	private: System::Windows::Forms::Label^ wnumber1;
	private: System::Windows::Forms::Label^ wnumber2;
	private: System::Windows::Forms::Label^ wnumber3;
	private: System::Windows::Forms::Label^ wnumber4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ newWord;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WordGame::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userinfo = (gcnew System::Windows::Forms::Label());
			this->learnbtn = (gcnew System::Windows::Forms::Button());
			this->wordTest = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->wordle = (gcnew System::Windows::Forms::Button());
			this->wnumber1 = (gcnew System::Windows::Forms::Label());
			this->wnumber2 = (gcnew System::Windows::Forms::Label());
			this->wnumber3 = (gcnew System::Windows::Forms::Label());
			this->wnumber4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->newWord = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(190, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 98);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WORD GAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// userinfo
			// 
			this->userinfo->AutoSize = true;
			this->userinfo->BackColor = System::Drawing::Color::Transparent;
			this->userinfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userinfo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->userinfo->Location = System::Drawing::Point(12, 491);
			this->userinfo->Name = L"userinfo";
			this->userinfo->Size = System::Drawing::Size(20, 25);
			this->userinfo->TabIndex = 1;
			this->userinfo->Text = L"*";
			// 
			// learnbtn
			// 
			this->learnbtn->BackColor = System::Drawing::Color::Transparent;
			this->learnbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->learnbtn->FlatAppearance->BorderSize = 0;
			this->learnbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->learnbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->learnbtn->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->learnbtn->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->learnbtn->Location = System::Drawing::Point(316, 206);
			this->learnbtn->Name = L"learnbtn";
			this->learnbtn->Size = System::Drawing::Size(201, 48);
			this->learnbtn->TabIndex = 2;
			this->learnbtn->Text = L"Learn New Words";
			this->learnbtn->UseVisualStyleBackColor = false;
			this->learnbtn->Click += gcnew System::EventHandler(this, &WordGame::learnbtn_Click);
			// 
			// wordTest
			// 
			this->wordTest->BackColor = System::Drawing::Color::Transparent;
			this->wordTest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wordTest->FlatAppearance->BorderSize = 0;
			this->wordTest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->wordTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wordTest->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wordTest->ForeColor = System::Drawing::Color::Gray;
			this->wordTest->Location = System::Drawing::Point(316, 271);
			this->wordTest->Name = L"wordTest";
			this->wordTest->Size = System::Drawing::Size(201, 42);
			this->wordTest->TabIndex = 3;
			this->wordTest->Text = L"Take a Quiz";
			this->wordTest->UseVisualStyleBackColor = false;
			this->wordTest->Click += gcnew System::EventHandler(this, &WordGame::wordTest_Click);
			// 
			// settings
			// 
			this->settings->BackColor = System::Drawing::Color::Transparent;
			this->settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->settings->FlatAppearance->BorderSize = 0;
			this->settings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settings->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->settings->ForeColor = System::Drawing::Color::DimGray;
			this->settings->Location = System::Drawing::Point(316, 329);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(201, 44);
			this->settings->TabIndex = 4;
			this->settings->Text = L"Settings";
			this->settings->UseVisualStyleBackColor = false;
			this->settings->Click += gcnew System::EventHandler(this, &WordGame::settings_Click);
			// 
			// wordle
			// 
			this->wordle->BackColor = System::Drawing::Color::Transparent;
			this->wordle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wordle->FlatAppearance->BorderSize = 0;
			this->wordle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->wordle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wordle->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wordle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wordle->Location = System::Drawing::Point(316, 389);
			this->wordle->Name = L"wordle";
			this->wordle->Size = System::Drawing::Size(201, 38);
			this->wordle->TabIndex = 5;
			this->wordle->Text = L"Wordle";
			this->wordle->UseVisualStyleBackColor = false;
			this->wordle->Click += gcnew System::EventHandler(this, &WordGame::wordle_Click);
			// 
			// wnumber1
			// 
			this->wnumber1->AutoSize = true;
			this->wnumber1->BackColor = System::Drawing::Color::Transparent;
			this->wnumber1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wnumber1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wnumber1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->wnumber1->Location = System::Drawing::Point(142, 334);
			this->wnumber1->Name = L"wnumber1";
			this->wnumber1->Size = System::Drawing::Size(34, 39);
			this->wnumber1->TabIndex = 6;
			this->wnumber1->Text = L"5";
			this->wnumber1->Click += gcnew System::EventHandler(this, &WordGame::wnumber1_Click);
			// 
			// wnumber2
			// 
			this->wnumber2->AutoSize = true;
			this->wnumber2->BackColor = System::Drawing::Color::Transparent;
			this->wnumber2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wnumber2->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wnumber2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->wnumber2->Location = System::Drawing::Point(234, 334);
			this->wnumber2->Name = L"wnumber2";
			this->wnumber2->Size = System::Drawing::Size(46, 39);
			this->wnumber2->TabIndex = 7;
			this->wnumber2->Text = L"10";
			this->wnumber2->Click += gcnew System::EventHandler(this, &WordGame::wnumber2_Click);
			// 
			// wnumber3
			// 
			this->wnumber3->AutoSize = true;
			this->wnumber3->BackColor = System::Drawing::Color::Transparent;
			this->wnumber3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wnumber3->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wnumber3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->wnumber3->Location = System::Drawing::Point(513, 334);
			this->wnumber3->Name = L"wnumber3";
			this->wnumber3->Size = System::Drawing::Size(46, 39);
			this->wnumber3->TabIndex = 8;
			this->wnumber3->Text = L"15";
			this->wnumber3->Click += gcnew System::EventHandler(this, &WordGame::wnumber3_Click);
			// 
			// wnumber4
			// 
			this->wnumber4->AutoSize = true;
			this->wnumber4->BackColor = System::Drawing::Color::Transparent;
			this->wnumber4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wnumber4->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->wnumber4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->wnumber4->Location = System::Drawing::Point(634, 334);
			this->wnumber4->Name = L"wnumber4";
			this->wnumber4->Size = System::Drawing::Size(50, 39);
			this->wnumber4->TabIndex = 9;
			this->wnumber4->Text = L"20";
			this->wnumber4->Click += gcnew System::EventHandler(this, &WordGame::wnumber4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(247, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 36);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Select The Word Amount";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// newWord
			// 
			this->newWord->BackColor = System::Drawing::Color::Transparent;
			this->newWord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newWord->FlatAppearance->BorderSize = 0;
			this->newWord->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->newWord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newWord->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->newWord->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->newWord->Location = System::Drawing::Point(316, 162);
			this->newWord->Name = L"newWord";
			this->newWord->Size = System::Drawing::Size(201, 38);
			this->newWord->TabIndex = 11;
			this->newWord->Text = L"Add New Word";
			this->newWord->UseVisualStyleBackColor = false;
			this->newWord->Click += gcnew System::EventHandler(this, &WordGame::newWord_Click);
			// 
			// WordGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(806, 525);
			this->Controls->Add(this->newWord);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->wnumber4);
			this->Controls->Add(this->wnumber3);
			this->Controls->Add(this->wnumber2);
			this->Controls->Add(this->wnumber1);
			this->Controls->Add(this->wordle);
			this->Controls->Add(this->settings);
			this->Controls->Add(this->wordTest);
			this->Controls->Add(this->learnbtn);
			this->Controls->Add(this->userinfo);
			this->Controls->Add(this->label1);
			this->Name = L"WordGame";
			this->Text = L"WordGame";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: static int wordsNumber = 10;
	private: System::Void settings_Click(System::Object^ sender, System::EventArgs^ e) {
		settings->Visible = false;
		wordTest->Visible = false;
		learnbtn->Visible = false;
		wordle->Visible = false;
		label2->Visible = true;
		wnumber1->Visible = true;
		wnumber2->Visible = true;
		wnumber3->Visible = true;
		wnumber4->Visible = true;


	}
		   public: bool switchTest = false;
private: System::Void wordTest_Click(System::Object^ sender, System::EventArgs^ e) {
	switchTest = true;
	this->Close();
	
}


private: System::Void wnumber1_Click(System::Object^ sender, System::EventArgs^ e) {
	wordsNumber = 5;
	settings->Visible = true;
	wordTest->Visible = true;
	learnbtn->Visible = true;
	wordle->Visible = true;
	label2->Visible = false;
	wnumber1->Visible = false;
	wnumber2->Visible = false;
	wnumber3->Visible = false;
	wnumber4->Visible = false;
}
private: System::Void wnumber2_Click(System::Object^ sender, System::EventArgs^ e) {
	wordsNumber = 10;
	settings->Visible = true;
	wordTest->Visible = true;
	learnbtn->Visible = true;
	wordle->Visible = true;
	label2->Visible = false;
	wnumber1->Visible = false;
	wnumber2->Visible = false;
	wnumber3->Visible = false;
	wnumber4->Visible = false;
}
private: System::Void wnumber3_Click(System::Object^ sender, System::EventArgs^ e) {
	wordsNumber = 15;
	settings->Visible = true;
	wordTest->Visible = true;
	learnbtn->Visible = true;
	wordle->Visible = true;
	label2->Visible = false;
	wnumber1->Visible = false;
	wnumber2->Visible = false;
	wnumber3->Visible = false;
	wnumber4->Visible = false;
}
private: System::Void wnumber4_Click(System::Object^ sender, System::EventArgs^ e) {
	wordsNumber = 20;
	settings->Visible = true;
	wordTest->Visible = true;
	learnbtn->Visible = true;
	wordle->Visible = true;
	label2->Visible = false;
	wnumber1->Visible = false;
	wnumber2->Visible = false;
	wnumber3->Visible = false;
	wnumber4->Visible = false;
}
	   public: bool switchLearn = false;
private: System::Void learnbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	switchLearn = true;
	this->Close();
}
	   public: bool switchWordle = false;
private: System::Void wordle_Click(System::Object^ sender, System::EventArgs^ e) {
	switchWordle = true;
	this->Close();
}
	   public: bool switchNewWord = false;
private: System::Void newWord_Click(System::Object^ sender, System::EventArgs^ e) {
	switchNewWord = true;
	this->Close();
}
};
}
