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
	/// addWord için özet
	/// </summary>
	public ref class addWord : public System::Windows::Forms::Form
	{
	public:
		addWord(void)
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
		~addWord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ engTitle;
	private: System::Windows::Forms::Label^ turTitle;
	private: System::Windows::Forms::Label^ expTitle;
	private: System::Windows::Forms::TextBox^ engW;
	private: System::Windows::Forms::TextBox^ turW;
	private: System::Windows::Forms::TextBox^ expW;
	private: System::Windows::Forms::Button^ addW;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addWord::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->engTitle = (gcnew System::Windows::Forms::Label());
			this->turTitle = (gcnew System::Windows::Forms::Label());
			this->expTitle = (gcnew System::Windows::Forms::Label());
			this->engW = (gcnew System::Windows::Forms::TextBox());
			this->turW = (gcnew System::Windows::Forms::TextBox());
			this->expW = (gcnew System::Windows::Forms::TextBox());
			this->addW = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label1->Location = System::Drawing::Point(333, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Word";
			// 
			// engTitle
			// 
			this->engTitle->AutoSize = true;
			this->engTitle->BackColor = System::Drawing::Color::Transparent;
			this->engTitle->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->engTitle->ForeColor = System::Drawing::SystemColors::GrayText;
			this->engTitle->Location = System::Drawing::Point(64, 156);
			this->engTitle->Name = L"engTitle";
			this->engTitle->Size = System::Drawing::Size(182, 36);
			this->engTitle->TabIndex = 1;
			this->engTitle->Text = L"English Word :";
			// 
			// turTitle
			// 
			this->turTitle->AutoSize = true;
			this->turTitle->BackColor = System::Drawing::Color::Transparent;
			this->turTitle->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->turTitle->ForeColor = System::Drawing::SystemColors::GrayText;
			this->turTitle->Location = System::Drawing::Point(64, 231);
			this->turTitle->Name = L"turTitle";
			this->turTitle->Size = System::Drawing::Size(184, 36);
			this->turTitle->TabIndex = 2;
			this->turTitle->Text = L"Turkish Word :";
			// 
			// expTitle
			// 
			this->expTitle->AutoSize = true;
			this->expTitle->BackColor = System::Drawing::Color::Transparent;
			this->expTitle->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->expTitle->ForeColor = System::Drawing::SystemColors::GrayText;
			this->expTitle->Location = System::Drawing::Point(64, 336);
			this->expTitle->Name = L"expTitle";
			this->expTitle->Size = System::Drawing::Size(125, 36);
			this->expTitle->TabIndex = 3;
			this->expTitle->Text = L"Example :";
			// 
			// engW
			// 
			this->engW->BackColor = System::Drawing::Color::Cornsilk;
			this->engW->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->engW->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->engW->Location = System::Drawing::Point(252, 159);
			this->engW->Name = L"engW";
			this->engW->Size = System::Drawing::Size(305, 33);
			this->engW->TabIndex = 4;
			// 
			// turW
			// 
			this->turW->BackColor = System::Drawing::Color::Cornsilk;
			this->turW->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->turW->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->turW->Location = System::Drawing::Point(252, 231);
			this->turW->Name = L"turW";
			this->turW->Size = System::Drawing::Size(305, 33);
			this->turW->TabIndex = 5;
			// 
			// expW
			// 
			this->expW->BackColor = System::Drawing::Color::Cornsilk;
			this->expW->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->expW->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->expW->Location = System::Drawing::Point(195, 339);
			this->expW->Name = L"expW";
			this->expW->Size = System::Drawing::Size(724, 33);
			this->expW->TabIndex = 6;
			// 
			// addW
			// 
			this->addW->BackColor = System::Drawing::Color::Transparent;
			this->addW->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addW->FlatAppearance->BorderSize = 0;
			this->addW->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->addW->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addW->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->addW->ForeColor = System::Drawing::Color::Cornsilk;
			this->addW->Location = System::Drawing::Point(343, 410);
			this->addW->Name = L"addW";
			this->addW->Size = System::Drawing::Size(292, 44);
			this->addW->TabIndex = 7;
			this->addW->Text = L"Add Word";
			this->addW->UseVisualStyleBackColor = false;
			this->addW->Click += gcnew System::EventHandler(this, &addWord::addW_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->ForeColor = System::Drawing::Color::Cornsilk;
			this->button1->Location = System::Drawing::Point(828, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addWord::button1_Click);
			// 
			// addWord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(931, 497);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->addW);
			this->Controls->Add(this->expW);
			this->Controls->Add(this->turW);
			this->Controls->Add(this->engW);
			this->Controls->Add(this->expTitle);
			this->Controls->Add(this->turTitle);
			this->Controls->Add(this->engTitle);
			this->Controls->Add(this->label1);
			this->Name = L"addWord";
			this->Text = L"addWord";
			this->Load += gcnew System::EventHandler(this, &addWord::addWord_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int count{ 0 };
	private: System::Void addWord_Load(System::Object^ sender, System::EventArgs^ e) {
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

	}
	public: bool switchMain = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	switchMain = true;
	this->Close();
}
private: System::Void addW_Click(System::Object^ sender, System::EventArgs^ e) {
	bool sw = true;
	
	while (sw) {
		if (engW->Text == "" || turW->Text == "" || expW->Text == "") {
			MessageBox::Show("Empty Data. Please fill all the blanks.", "ADD WORD ERROR", MessageBoxButtons::OK);
			break;
		}
		String^ en = engW->Text;
		String^ tr = turW->Text;
		String^ ex = expW->Text;
		int id = count + 1;
		try {
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc(cstring);
			sqlc.Open();

			String^ sqlQuery = "INSERT INTO Words " + "(WordID, EngWordName, TurWordName, Learned, Repeated) VALUES " + "(@WordID, @EngWordName, @TurWordName,0,0);";
			SqlCommand command(sqlQuery, % sqlc);
			command.Parameters->AddWithValue("@WordID", id);
			command.Parameters->AddWithValue("@EngWordName", en);
			command.Parameters->AddWithValue("@TurWordName", tr);
			command.ExecuteNonQuery();
			sqlc.Close();
		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}
		try {
			String^ cstring = "Data Source=localhost;Initial Catalog=WORDGAME;Integrated Security=True;TrustServerCertificate=True";
			SqlConnection sqlc2(cstring);
			sqlc2.Open();

			String^ sqlQuery2 = "INSERT INTO wordExamples " + "(exampleID, Examples) VALUES " + "(@exampleID, @Examples);";
			SqlCommand command2(sqlQuery2, % sqlc2);
			command2.Parameters->AddWithValue("@exampleID", id);
			command2.Parameters->AddWithValue("@Examples", ex);
			command2.ExecuteNonQuery();
			sw = false;
			sqlc2.Close();
		}
		catch (Exception^ exception) {
			MessageBox::Show("Failed to connect database.", "Database Error", MessageBoxButtons::OK);
		}

	}
	if (!sw) {
		MessageBox::Show("Word Added", "ADD WORD SUCCESS", MessageBoxButtons::OK);
		this->Close();
	}
}
};
}
