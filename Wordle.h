#pragma once
#include <cstring>
#include <random>
#include <vector>
#include<unordered_set>
static std::vector<char> matchedW;
static std::vector<char> partialW;
static std::vector<char> notFoundW;
namespace wordGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Wordle için özet
	/// </summary>
	public ref class Wordle : public System::Windows::Forms::Form
	{
	public:
		Wordle(void)
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
		~Wordle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ guesstitle;
	private: System::Windows::Forms::TextBox^ guessbox;

	private: System::Windows::Forms::Button^ confirmbtn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ leftGuess;
	private: System::Windows::Forms::Label^ matchedTitle;
	private: System::Windows::Forms::Label^ partialTitle;
	private: System::Windows::Forms::Label^ matched;
	private: System::Windows::Forms::Label^ partial;
	private: System::Windows::Forms::Label^ mainWord;
	private: System::Windows::Forms::Label^ wlen;
	private: System::Windows::Forms::Label^ win;
	private: System::Windows::Forms::Label^ notfTitle;
	private: System::Windows::Forms::Label^ notFound;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Wordle::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->guesstitle = (gcnew System::Windows::Forms::Label());
			this->guessbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->leftGuess = (gcnew System::Windows::Forms::Label());
			this->matchedTitle = (gcnew System::Windows::Forms::Label());
			this->partialTitle = (gcnew System::Windows::Forms::Label());
			this->matched = (gcnew System::Windows::Forms::Label());
			this->partial = (gcnew System::Windows::Forms::Label());
			this->mainWord = (gcnew System::Windows::Forms::Label());
			this->wlen = (gcnew System::Windows::Forms::Label());
			this->win = (gcnew System::Windows::Forms::Label());
			this->notfTitle = (gcnew System::Windows::Forms::Label());
			this->notFound = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->exit->ForeColor = System::Drawing::Color::Cornsilk;
			this->exit->Location = System::Drawing::Point(701, 453);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(100, 40);
			this->exit->TabIndex = 0;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Wordle::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(248, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 98);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WORDLE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// guesstitle
			// 
			this->guesstitle->AutoSize = true;
			this->guesstitle->BackColor = System::Drawing::Color::Transparent;
			this->guesstitle->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guesstitle->ForeColor = System::Drawing::Color::Cornsilk;
			this->guesstitle->Location = System::Drawing::Point(90, 207);
			this->guesstitle->Name = L"guesstitle";
			this->guesstitle->Size = System::Drawing::Size(89, 34);
			this->guesstitle->TabIndex = 2;
			this->guesstitle->Text = L"Guess:";
			// 
			// guessbox
			// 
			this->guessbox->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->guessbox->Location = System::Drawing::Point(185, 210);
			this->guessbox->Name = L"guessbox";
			this->guessbox->Size = System::Drawing::Size(302, 33);
			this->guessbox->TabIndex = 3;
			// 
			// confirmbtn
			// 
			this->confirmbtn->BackColor = System::Drawing::Color::Transparent;
			this->confirmbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->confirmbtn->FlatAppearance->BorderSize = 0;
			this->confirmbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->confirmbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmbtn->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->confirmbtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->confirmbtn->Location = System::Drawing::Point(493, 207);
			this->confirmbtn->Name = L"confirmbtn";
			this->confirmbtn->Size = System::Drawing::Size(136, 40);
			this->confirmbtn->TabIndex = 4;
			this->confirmbtn->Text = L"CONFIRM";
			this->confirmbtn->UseVisualStyleBackColor = false;
			this->confirmbtn->Click += gcnew System::EventHandler(this, &Wordle::confirmbtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cornsilk;
			this->label2->Location = System::Drawing::Point(36, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Word Length :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Cornsilk;
			this->label3->Location = System::Drawing::Point(625, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 34);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Guesses Left";
			// 
			// leftGuess
			// 
			this->leftGuess->AutoSize = true;
			this->leftGuess->BackColor = System::Drawing::Color::Transparent;
			this->leftGuess->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leftGuess->ForeColor = System::Drawing::Color::Cornsilk;
			this->leftGuess->Location = System::Drawing::Point(599, 145);
			this->leftGuess->Name = L"leftGuess";
			this->leftGuess->Size = System::Drawing::Size(30, 34);
			this->leftGuess->TabIndex = 7;
			this->leftGuess->Text = L"6";
			// 
			// matchedTitle
			// 
			this->matchedTitle->AutoSize = true;
			this->matchedTitle->BackColor = System::Drawing::Color::Transparent;
			this->matchedTitle->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->matchedTitle->ForeColor = System::Drawing::Color::Cornsilk;
			this->matchedTitle->Location = System::Drawing::Point(36, 317);
			this->matchedTitle->Name = L"matchedTitle";
			this->matchedTitle->Size = System::Drawing::Size(193, 34);
			this->matchedTitle->TabIndex = 8;
			this->matchedTitle->Text = L"Matched Letters";
			// 
			// partialTitle
			// 
			this->partialTitle->AutoSize = true;
			this->partialTitle->BackColor = System::Drawing::Color::Transparent;
			this->partialTitle->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->partialTitle->ForeColor = System::Drawing::Color::Cornsilk;
			this->partialTitle->Location = System::Drawing::Point(36, 362);
			this->partialTitle->Name = L"partialTitle";
			this->partialTitle->Size = System::Drawing::Size(272, 34);
			this->partialTitle->TabIndex = 9;
			this->partialTitle->Text = L"Partial Matched Letters";
			// 
			// matched
			// 
			this->matched->AutoSize = true;
			this->matched->BackColor = System::Drawing::Color::Transparent;
			this->matched->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->matched->ForeColor = System::Drawing::Color::Cornsilk;
			this->matched->Location = System::Drawing::Point(277, 317);
			this->matched->Name = L"matched";
			this->matched->Size = System::Drawing::Size(0, 34);
			this->matched->TabIndex = 10;
			// 
			// partial
			// 
			this->partial->AutoSize = true;
			this->partial->BackColor = System::Drawing::Color::Transparent;
			this->partial->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->partial->ForeColor = System::Drawing::Color::Cornsilk;
			this->partial->Location = System::Drawing::Point(328, 362);
			this->partial->Name = L"partial";
			this->partial->Size = System::Drawing::Size(0, 34);
			this->partial->TabIndex = 11;
			// 
			// mainWord
			// 
			this->mainWord->AutoSize = true;
			this->mainWord->BackColor = System::Drawing::Color::Transparent;
			this->mainWord->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainWord->ForeColor = System::Drawing::Color::Cornsilk;
			this->mainWord->Location = System::Drawing::Point(378, 453);
			this->mainWord->Name = L"mainWord";
			this->mainWord->Size = System::Drawing::Size(23, 34);
			this->mainWord->TabIndex = 12;
			this->mainWord->Text = L"*";
			// 
			// wlen
			// 
			this->wlen->AutoSize = true;
			this->wlen->BackColor = System::Drawing::Color::Transparent;
			this->wlen->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wlen->ForeColor = System::Drawing::Color::Cornsilk;
			this->wlen->Location = System::Drawing::Point(199, 145);
			this->wlen->Name = L"wlen";
			this->wlen->Size = System::Drawing::Size(0, 34);
			this->wlen->TabIndex = 13;
			// 
			// win
			// 
			this->win->AutoSize = true;
			this->win->BackColor = System::Drawing::Color::Transparent;
			this->win->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->win->ForeColor = System::Drawing::Color::Cornsilk;
			this->win->Location = System::Drawing::Point(301, 257);
			this->win->Name = L"win";
			this->win->Size = System::Drawing::Size(186, 60);
			this->win->TabIndex = 14;
			this->win->Text = L"YOU WIN";
			// 
			// notfTitle
			// 
			this->notfTitle->AutoSize = true;
			this->notfTitle->BackColor = System::Drawing::Color::Transparent;
			this->notfTitle->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->notfTitle->ForeColor = System::Drawing::Color::Cornsilk;
			this->notfTitle->Location = System::Drawing::Point(36, 407);
			this->notfTitle->Name = L"notfTitle";
			this->notfTitle->Size = System::Drawing::Size(124, 34);
			this->notfTitle->TabIndex = 15;
			this->notfTitle->Text = L"Not Found";
			// 
			// notFound
			// 
			this->notFound->AutoSize = true;
			this->notFound->BackColor = System::Drawing::Color::Transparent;
			this->notFound->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->notFound->ForeColor = System::Drawing::Color::Cornsilk;
			this->notFound->Location = System::Drawing::Point(184, 407);
			this->notFound->Name = L"notFound";
			this->notFound->Size = System::Drawing::Size(0, 34);
			this->notFound->TabIndex = 16;
			// 
			// Wordle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(813, 505);
			this->Controls->Add(this->notFound);
			this->Controls->Add(this->notfTitle);
			this->Controls->Add(this->win);
			this->Controls->Add(this->wlen);
			this->Controls->Add(this->mainWord);
			this->Controls->Add(this->partial);
			this->Controls->Add(this->matched);
			this->Controls->Add(this->partialTitle);
			this->Controls->Add(this->matchedTitle);
			this->Controls->Add(this->leftGuess);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->confirmbtn);
			this->Controls->Add(this->guessbox);
			this->Controls->Add(this->guesstitle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Name = L"Wordle";
			this->Text = L"Word Game";
			this->Load += gcnew System::EventHandler(this, &Wordle::Wordle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchMain = false;
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		switchMain = true;
		this->Close();
	}
	public: String^ word;
	private: System::Void Wordle_Load(System::Object^ sender, System::EventArgs^ e) {
		partialW.clear();
		matchedW.clear();
		int count{ 0 };

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
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();
			String^ sqlQuery2 = "SELECT EngWordName FROM Words WHERE WordID=@WordID;";
			SqlCommand command2(sqlQuery2, % sqlc);
			int a = distr(gen);
			command2.Parameters->AddWithValue("@WordID", a);
			SqlDataReader^ reader2 = command2.ExecuteReader();
			reader2->Read();
			word = reader2->GetString(0);
			sqlc.Close();
		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}
		int i = word->Length;
		wlen->Text = i.ToString();
		mainWord->Text = word;
		mainWord->Visible = false;
		win->Visible = false;
	}
	public: int guessAmount = 0;
private: System::Void confirmbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	const int MAXGUESS = 6;
	String^ gs = guessbox->Text;
	while (guessAmount < MAXGUESS) {
		if (gs->Length != word->Length) {
			MessageBox::Show("Please enter another word with same length.", "Wrong Word", MessageBoxButtons::OK);
			break;
		}
		char cStr[50] = { 0 };
		if (gs->Length < sizeof(cStr))
			sprintf(cStr, "%s", gs);
		std::string guess = cStr;
		char cStr2[50] = { 0 };
		if (word->Length < sizeof(cStr2))
			sprintf(cStr2, "%s", word);
		std::string mainword = cStr2;
		for (int i = 0;i < guess.length();i++) {
			guess.at(i) = std::toupper(guess.at(i));
		}
		for (int i = 0;i < mainword.length();i++) {
			mainword.at(i) = std::toupper(mainword.at(i));
		}
		if (guess.compare(mainword) == 0) {
			label2->Visible = false;
			wlen->Visible = false;
			leftGuess->Visible = false;
			label3->Visible = false;
			guesstitle->Visible = false;
			confirmbtn->Visible = false;
			guessbox->Visible = false;
			matchedTitle->Visible = false;
			matched->Visible = false;
			partialTitle->Visible = false;
			partial->Visible = false;
			mainWord->Visible = true;
			win->Visible = true;
			break;
		}
		for (int i = 0;i < guess.length();i++) {
			bool found = false;
			for (int j = 0;j < mainword.length();j++) {
				if (guess.at(i) == mainword.at(j) && i == j) {
					matchedW.push_back(guess.at(i));
					found = true;
				}
				else if (guess.at(i) == mainword.at(j) && i != j) {
					partialW.push_back(guess.at(i));
					found = true;
				}
			}
			if (!found) {
				notFoundW.push_back(guess.at(i));
			}
		}
		std::string tempMatch;
		std::unordered_set<char> seen;
		if (matchedW.size() > 0) {
			for (auto c : matchedW) {
				if (seen.find(c) == seen.end()) {
					tempMatch += c;
					seen.insert(c);
				}
			}
		}
		std::string tempPartial;
		std::unordered_set<char> seen2;
		if (partialW.size() > 0) {
			for (auto c : partialW) {
				if (seen2.find(c) == seen2.end()) {
					tempPartial += c;
					seen2.insert(c);
				}
			}
		}
		std::string tempnotFound;
		std::unordered_set<char> seen3;
		if (notFoundW.size() > 0) {
			for (auto c : notFoundW) {
				if (seen3.find(c) == seen3.end()) {
					tempnotFound += c;
					seen3.insert(c);
				}
			}
		}
		String^ m = gcnew String(tempMatch.c_str());
		String^ p = gcnew String(tempPartial.c_str());
		String^ n = gcnew String(tempnotFound.c_str());
		matched->Text = m;
		partial->Text = p;
		notFound->Text = n;
		guessAmount++;
		int left = MAXGUESS - guessAmount;
		leftGuess->Text = left.ToString();
		if (guessAmount == MAXGUESS) {
			MessageBox::Show("Word was " + word, "Out Of Guesses", MessageBoxButtons::OK);
			this->Close();
		}
		break;

	}
}
};
}
