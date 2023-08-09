#pragma once
#include "Gubr.h"
#include <msclr\marshal_cppstd.h>
#include <array>
#include <iostream>
#include <vector>
namespace GubrWindow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;



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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::ListBox^ listBox2;


	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(50, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"In House";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(20, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Consolidated";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(77, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"7078";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(56, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Imports";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"6";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 24);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"10";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(116, 24);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"20";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(124, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 24);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"30";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(7, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Remove Stores";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(124, 201);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(116, 24);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(20, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 19);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Remove DC\'s";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(124, 231);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(116, 24);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(11, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(302, 36);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Write Gubr Script";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(11, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 36);
			this->button2->TabIndex = 13;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(165, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 36);
			this->button3->TabIndex = 14;
			this->button3->Text = L"QUIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightBlue;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button8->Location = System::Drawing::Point(264, 200);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 23);
			this->button8->TabIndex = 19;
			this->button8->Text = L"GO";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightBlue;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button9->Location = System::Drawing::Point(264, 232);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"GO";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(302, 36);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Load 0271KEY";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textBox7->Location = System::Drawing::Point(12, 54);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(303, 21);
			this->textBox7->TabIndex = 23;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button5->Location = System::Drawing::Point(11, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(302, 36);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Open Gubr Script";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(247, 81);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(55, 21);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"6092";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(247, 101);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 21);
			this->checkBox2->TabIndex = 28;
			this->checkBox2->Text = L"6022";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(247, 121);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(55, 21);
			this->checkBox3->TabIndex = 29;
			this->checkBox3->Text = L"6938";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(247, 141);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(55, 21);
			this->checkBox4->TabIndex = 30;
			this->checkBox4->Text = L"6561";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(247, 161);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(55, 21);
			this->checkBox5->TabIndex = 31;
			this->checkBox5->Text = L"7078";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 19;
			this->listBox2->Location = System::Drawing::Point(11, 396);
			this->listBox2->MultiColumn = true;
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(303, 270);
			this->listBox2->TabIndex = 32;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(328, 701);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Name = L"MyForm";
			this->Text = L"GUBR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//save file button
		int inHouse = Int32::Parse(textBox1->Text);
		int conSolidated = Int32::Parse(textBox2->Text);
		int sevenEight = Int32::Parse(textBox3->Text);
		int otherImports = Int32::Parse(textBox4->Text);
		int storeNumber = Int32::Parse(textBox5->Text);
		int distroNumber = Int32::Parse(textBox6->Text);

		SaveDataToFile();
		MessageBox::Show("Script Written");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //The reset button
		String^ filePath;
		string filePathStr;

		textBox1->Text = L"6";
		textBox2->Text = L"10";
		textBox3->Text = L"20";
		textBox4->Text = L"30";
		textBox5->Text = L"0";
		textBox6->Text = L"0";

		checkBox1->Checked = true;
		checkBox2->Checked = true;
		checkBox3->Checked = true;
		checkBox4->Checked = true;
		checkBox5->Checked = true;

		// Create an instance of the OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		// Set properties of the OpenFileDialog
		openFileDialog1->Title = "Open File";  // Dialog title
		openFileDialog1->InitialDirectory = "C:\\";  // Initial directory to open

		// Show the OpenFileDialog and handle the result
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Get the selected file path
			filePath = openFileDialog1->FileName;

			// Convert System::String^ to std::string for easier usage (optional)
			filePathStr = msclr::interop::marshal_as<std::string>(filePath);
		}

		textBox7->Text = filePath;
		int inHouse = Int32::Parse(textBox1->Text);
		int conSolidated = Int32::Parse(textBox2->Text);
		int sevenEight = Int32::Parse(textBox3->Text);
		int otherImports = Int32::Parse(textBox4->Text);
	
		DateTime now = DateTime::Now;
		DateTime inHouseDate = now.AddDays(-inHouse);
		DateTime conSolidatedDate = now.AddDays(-conSolidated);
		DateTime sevenEightDate = now.AddDays(-sevenEight);
		DateTime otherImportDate = now.AddDays(-otherImports);

		listBox2->Items->Clear();

		listBox2->Items->Add("6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
		listBox2->Items->Add("6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		listBox2->Items->Add("6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		listBox2->Items->Add("6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		listBox2->Items->Add("7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
		listBox2->Items->Add("Others - " + otherImportDate.ToString("MM/dd/yyyy"));

		MessageBox::Show("Settings reset\nYou Still Need To Reload From File");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Quit Button
		Application::Exit();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //Remove Distro Button
		int distroNumber = Int32::Parse(textBox6->Text);
		RemoveDistro(distroNumber);
		MessageBox::Show(distroNumber + " removed");

		//steps below just insure Message Box remains accurate
		if (distroNumber == 6092) {
			listBox2->Items->RemoveAt(0);
			listBox2->Items->Insert(0, "6092 - Not Loaded");
		}
		else if (distroNumber == 6022) {
			listBox2->Items->RemoveAt(1);
			listBox2->Items->Insert(1, "6022 - Not Loaded");
		}
		else if (distroNumber == 6938) {
			listBox2->Items->RemoveAt(2);
			listBox2->Items->Insert(2, "6938 - Not Loaded");
		}
		else if (distroNumber == 6561) {
			listBox2->Items->RemoveAt(3);
			listBox2->Items->Insert(3, "6561 - Not Loaded");
		}
		else if (distroNumber == 7078) {
			listBox2->Items->RemoveAt(4);
			listBox2->Items->Insert(4, "6561 - Not Loaded");
		}
		else {
			listBox2->Items->Add(distroNumber + " - Not Loaded");
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { //Remove Store button
		int storeNumber = Int32::Parse(textBox5->Text);
		RemoveStore(storeNumber);
		MessageBox::Show(storeNumber + " removed");
		listBox2->Items->Add("store " + storeNumber + "- Not Loaded");
	}
		   		
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {  //Load Button
	vector<int> remDC;
	remDC.clear();
	String^ filePath;
	string filePathStr;

	// Create an instance of the OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	// Set properties of the OpenFileDialog
	openFileDialog1->Title = "Open File";  // Dialog title
	//openFileDialog->Filter = "Text Files (*.)|*.txt|All Files (*.*)|*.*";  // Filter for file types
	openFileDialog1->InitialDirectory = "C:\\";  // Initial directory to open

	// Show the OpenFileDialog and handle the result
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Get the selected file path
		filePath = openFileDialog1->FileName;

		// Convert System::String^ to std::string for easier usage (optional)
		filePathStr = msclr::interop::marshal_as<std::string>(filePath);
	}

	textBox7->Text = filePath;

	int inHouse = Int32::Parse(textBox1->Text);
	int conSolidated = Int32::Parse(textBox2->Text);
	int sevenEight = Int32::Parse(textBox3->Text);
	int otherImports = Int32::Parse(textBox4->Text);
	int numNotLoaded = 0;
	int dontLoadDCOne = 0;

	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	DateTime otherImportDate = now.AddDays(-otherImports);

	if (checkBox1->Checked == false) {
		numNotLoaded = numNotLoaded + 1;
		remDC.push_back(6092);
	}
	if (checkBox2->Checked == false) {
		numNotLoaded = numNotLoaded + 1;
		remDC.push_back(6022);
	}
	if (checkBox3->Checked == false) {
		numNotLoaded = numNotLoaded + 1;
		remDC.push_back(6938);
	}
	if (checkBox4->Checked == false) {
		numNotLoaded = numNotLoaded + 1;
		remDC.push_back(6561);
	}
	if (checkBox5->Checked == false) {
		numNotLoaded = numNotLoaded + 1;
		remDC.push_back(7078);
	}
	if (numNotLoaded == 0) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports);
	}
	else if (numNotLoaded == 1) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports, remDC[0]);
	}
	else if (numNotLoaded == 2) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports, remDC[0],remDC[1]);
	}
	else if (numNotLoaded == 3) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports, remDC[0], remDC[1], remDC[2]);
	}
	else if (numNotLoaded == 4) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports, remDC[0], remDC[1], remDC[2], remDC[3]);
	}
	else if (numNotLoaded == 5) {
		LoadGubr(filePathStr, inHouse, conSolidated, sevenEight, otherImports, remDC[0], remDC[1], remDC[2], remDC[3], remDC[4]);
	}
	
	if (checkBox1->Checked == true) {
		listBox2->Items->RemoveAt(0);
		listBox2->Items->Insert(0, "6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	}
	if (checkBox2->Checked == true) {
		listBox2->Items->RemoveAt(1);
		listBox2->Items->Insert(1, "6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	if (checkBox3->Checked == true) {
		listBox2->Items->RemoveAt(2);
		listBox2->Items->Insert(2, "6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	if (checkBox4->Checked == true) {
		listBox2->Items->RemoveAt(3);
		listBox2->Items->Insert(3, "6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	if (checkBox5->Checked == true) {
		listBox2->Items->RemoveAt(4);
		listBox2->Items->Insert(4, "7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { // Open Button

	Process::Start("notepad.exe","ScriptInputGUBR - Void Keyer.txt");
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	int inHouse = Int32::Parse(textBox1->Text);
	int conSolidated = Int32::Parse(textBox2->Text);
	int sevenEight = Int32::Parse(textBox3->Text);
	int otherImports = Int32::Parse(textBox4->Text);
	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	DateTime otherImportDate = now.AddDays(-otherImports);

	listBox2->Items->Add("6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	listBox2->Items->Add("6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox2->Items->Add("6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox2->Items->Add("6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox2->Items->Add("7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	listBox2->Items->Add("Others - " + otherImportDate.ToString("MM/dd/yyyy"));

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//checkbox for 6092
	int inHouse = Int32::Parse(textBox1->Text);
	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	if (checkBox1->Checked == true) {
		if (sizeVector() > 0) {
			MessageBox::Show("Click Load 0271Key to Load 6092");
		}
		else {
			listBox2->Items->RemoveAt(0);
			listBox2->Items->Insert(0, "6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
		}
	}
	if (checkBox1->Checked == false) {
		if (sizeVector() > 0) {
			RemoveDistro(6092);
			MessageBox::Show("6092 removed");
		}
		listBox2->Items->RemoveAt(0);
		listBox2->Items->Insert(0, "6092 - Not Loaded");
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//check box for 6022
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	if (checkBox2->Checked == true) {
		if (sizeVector() > 0) {
			MessageBox::Show("Click Load 0271Key to Load 6022");
		}
		else {
			listBox2->Items->RemoveAt(1);
			listBox2->Items->Insert(1, "6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		}
	}
	if (checkBox2->Checked == false) {
		if (sizeVector() > 0) {
			RemoveDistro(6022);
			MessageBox::Show("6022 removed");
		}
		listBox2->Items->RemoveAt(1);
		listBox2->Items->Insert(1, "6022 - Not Loaded");
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//checkbox for 6938
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	if (checkBox3->Checked == true) {
		if (sizeVector() > 0) {
			MessageBox::Show("Click Load 0271Key to Load 6938");
		}
		else {
			listBox2->Items->RemoveAt(2);
			listBox2->Items->Insert(2, "6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		}
	}
	if (checkBox3->Checked == false) {
		if (sizeVector() > 0) {
			RemoveDistro(6938);
			MessageBox::Show("6938 removed");
		}
		listBox2->Items->RemoveAt(2);
		listBox2->Items->Insert(2, "6938 - Not Loaded");
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//checkbox for 6561
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	if (checkBox4->Checked == true) {
		if (sizeVector() > 0) {
			MessageBox::Show("Click Load 0271Key to Load 6561");
		}
		else {
			listBox2->Items->RemoveAt(3);
			listBox2->Items->Insert(3, "6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
		}
	}
	if (checkBox4->Checked == false) {
		if (sizeVector() > 0) {
			RemoveDistro(6561);
			MessageBox::Show("6561 removed");
		}
		listBox2->Items->RemoveAt(3);
		listBox2->Items->Insert(3, "6561 - Not Loaded");
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//checkbox for 7078
	int sevenEight = Int32::Parse(textBox3->Text);
	DateTime now = DateTime::Now;
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	if (checkBox5->Checked == true) {
		if (sizeVector() > 0) {
			MessageBox::Show("Click Load 0271Key to Load 7078");
		}
		else {
			listBox2->Items->RemoveAt(4);
			listBox2->Items->Insert(4, "7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
		}
	}
	if (checkBox5->Checked == false) {
		if (sizeVector() > 0) {
			RemoveDistro(7078);
			MessageBox::Show("7078 removed");
		}
		listBox2->Items->RemoveAt(4);
		listBox2->Items->Insert(4, "7078 - Not Loaded");
	}
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
};
}
