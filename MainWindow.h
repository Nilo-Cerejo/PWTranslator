#pragma once

#include "TranslateInterface.h"
#include <thread>

namespace PWTranslator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: add co?constructor
			//
		}

	protected:
		/// <summary>
		/// Release all used resources?
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: TranslateInterface* translator;
	internal: System::Windows::Forms::Label^ label7;

	internal:





	private:
	protected:

	private:
		/// <summary>
		/// Mandatory variable? designer.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required?methods?to support?the constructor?cannot be changed?
		/// the contents of this?method?help?code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(759, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Review...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(404, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Path to the interface folder, that needs to be translated";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(386, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Path to the interface folder, where to get the translation from";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(404, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(349, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Review...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(760, 73);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 20);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Review...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(404, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(349, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label5->Location = System::Drawing::Point(12, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Folder for saving interface";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(206, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(346, 33);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Translate interface";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(15, 160);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(823, 33);
			this->progressBar1->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 18);
			this->label7->TabIndex = 21;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 211);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MainWindow";
			this->Text = L"PW Translator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox1->Text = fileName;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox2->Text = fileName;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = folderBrowserDialog1->SelectedPath;
			textBox5->Text = fileName;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->translator = new TranslateInterface(this->textBox1->Text, this->textBox2->Text, this->textBox5->Text);
		vector<wstring> files = this->translator->getAllFiles();
		wstring progress = L"Translated XML files. Progress: 0/" + to_wstring(files.size());
		this->label7->Text = gcnew String(progress.c_str());
		this->progressBar1->Maximum = files.size();
		for (int index = 0; index < files.size(); index++)
		{
			//progress = files[index];
			this->translator->translateFile(files[index]);
			progress = L"Translated XML files. Progress: " + to_wstring(index) + L"/" + to_wstring(files.size());
			this->label7->Text = gcnew String(progress.c_str());
			this->label7->Update();
			this->progressBar1->Increment(1);
		}
		progress = L"Translated XML files. Progress: " + to_wstring(files.size()) + L"/" + to_wstring(files.size()) + L"  Completed!";
		/*this->label7->Text = gcnew String(progress.c_str()); 
		this->progressBar1->Increment(1);

		this->progressBar1->Value = 0;
		files = this->translator->getAllFilesSTF();
		progress = L"Translated STF files. Progress: 0/" + to_wstring(files.size());
		this->label7->Text = gcnew String(progress.c_str());
		this->progressBar1->Maximum = files.size();
		for (int index = 0; index < files.size(); index++)
		{
			this->translator->translateFileSTF(files[index]);
			progress = L"Translated STF files. Progress: " + to_wstring(index) + L"/" + to_wstring(files.size());
			this->label7->Text = gcnew String(progress.c_str());
			this->label7->Update();
			this->progressBar1->Increment(1);
		}
		progress = L"Translated STF files. Progress: " + to_wstring(files.size()) + L"/" + to_wstring(files.size()) + L"  Completed!";
		this->label7->Text = gcnew String(progress.c_str());
		this->progressBar1->Increment(1);*/
	}
	};
}
