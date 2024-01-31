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
			this->button1->Text = L"Кнопка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			// 
			// Hello_user
			// //
			this->Hello_user->AutoSize = true;
			this->Hello_user->Location = System::Drawing::Point(109, 42);
			this->Hello_user->Name = L"Hello_user";
			this->Hello_user->Size = System::Drawing::Size(101, 13);
			this->Hello_user->TabIndex = 1;
			this->Hello_user->Text = L"Ммм... Никого нет";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(308, 261);
			this->Controls->Add(this->text_input);
			this->Controls->Add(this->Hello_user);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		if (text_input->Text == "")
		{
			Hello_user->Text = "Введите текст";
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
		Hello_user->Text = "ДАВАЙ НАПИШИ ЧТО НИБУДЬ!!!";
	}

}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (text_input->Text == "")
	{
		Hello_user->Text = "Ммм... Нажимай на кнопочку";
	}
}
};
}
