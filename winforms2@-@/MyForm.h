#pragma once


namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Hello_user;
	private: System::Windows::Forms::TextBox^ text_input;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Button^ button2;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Hello_user = (gcnew System::Windows::Forms::Label());
			this->text_input = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(46, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 89);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Êíîïêà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			// 
			// Hello_user
			// 
			this->Hello_user->AutoSize = true;
			this->Hello_user->Location = System::Drawing::Point(109, 42);
			this->Hello_user->Name = L"Hello_user";
			this->Hello_user->Size = System::Drawing::Size(101, 13);
			this->Hello_user->TabIndex = 1;
			this->Hello_user->Text = L"Ììì... Íèêîãî íåò";
			this->Hello_user->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// text_input
			// 
			this->text_input->ForeColor = System::Drawing::SystemColors::InfoText;
			this->text_input->Location = System::Drawing::Point(13, 91);
			this->text_input->Name = L"text_input";
			this->text_input->Size = System::Drawing::Size(283, 20);
			this->text_input->TabIndex = 2;
			this->text_input->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->text_input->MouseEnter += gcnew System::EventHandler(this, &MyForm::text_input_MouseEnter);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->monthCalendar1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->monthCalendar1->Location = System::Drawing::Point(308, 18);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->monthCalendar1->TabIndex = 3;
			this->monthCalendar1->TodayDate = System::DateTime(2024, 2, 5, 0, 0, 0, 0);
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(484, 18);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(277, 23);
			this->progressBar1->TabIndex = 4;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 0;
			this->trackBar1->Location = System::Drawing::Point(484, 66);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(277, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(484, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(277, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Íàæìè íà ìåíÿ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->text_input);
			this->Controls->Add(this->Hello_user);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		if (text_input->Text == "")
		{
			Hello_user->Text = "Ââåäèòå òåêñò";
		}
		else
		{
			Hello_user->Text = text_input->Text;
		}

		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	
	}
private: System::Void text_input_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (text_input->Text == "")
	{
		Hello_user->Text = "ÄÀÂÀÉ ÍÀÏÈØÈ ×ÒÎ ÍÈÁÓÄÜ!!!";
	}

}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (text_input->Text == "")
	{
		Hello_user->Text = "Ììì... Íàæèìàé íà êíîïî÷êó";
	}
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = trackBar1->Value;
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	//progressBar1->PerformStep();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
};
}
