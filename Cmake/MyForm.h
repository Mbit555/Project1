#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Число 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Число 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ответ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(84, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(164, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "" && textBox2->Text == "") //Проверяем введены ли числа
			 {
				 //ShowMessage("Числа не введены!"); // Если нет ты выводим сообщение
			 }
			 else //Если введены то
			 {
				 float a; // Переменная для числа a
				 float b; // Переменная для числа b
				 float result; // Переменная для результата
				 a = Convert::ToDouble(textBox1->Text); // Берем из первого эдита строку и переводим ее в число
				 b = Convert::ToDouble(textBox2->Text); // Берем из первого эдита строку и переводим ее в число
				 result = a + b; // Складываем два числа и помещаем в переменную для результата
				 textBox3->Text = result.ToString(); // Выводим значение переменной результат
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "" && textBox2->Text == "") //Проверяем введены ли числа
			 {
				 //ShowMessage("Числа не введены!"); // Если нет ты выводим сообщение
			 }
			 else //Если введены то
			 {
				 float a; // Переменная для числа a
				 float b; // Переменная для числа b
				 float result; // Переменная для результата
				 a = Convert::ToDouble(textBox1->Text); // Берем из первого эдита строку и переводим ее в число
				 b = Convert::ToDouble(textBox2->Text); // Берем из первого эдита строку и переводим ее в число
				 result = a - b; // Вычетаем два числа и помещаем в переменную для результата
				 textBox3->Text = result.ToString(); // Выводим значение переменной результат
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "" && textBox2->Text == "") //Проверяем введены ли числа
			 {
				 //ShowMessage("Числа не введены!"); // Если нет ты выводим сообщение
			 }
			 else //Если введены то
			 {
				 float a; // Переменная для числа a
				 float b; // Переменная для числа b
				 float result; // Переменная для результата
				 a = Convert::ToDouble(textBox1->Text); // Берем из первого эдита строку и переводим ее в число
				 b = Convert::ToDouble(textBox2->Text); // Берем из первого эдита строку и переводим ее в число
				 result = a * b; // Умножаем два числа и помещаем в переменную для результата
				 textBox3->Text = result.ToString(); // Выводим значение переменной результат
			 }
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "" && textBox2->Text == "") //Проверяем введены ли числа
			 {
				 //ShowMessage("Числа не введены!"); // Если нет ты выводим сообщение
			 }
			 else //Если введены то
			 {
				 float a; // Переменная для числа a
				 float b; // Переменная для числа b
				 float result; // Переменная для результата
				 a = Convert::ToDouble(textBox1->Text); // Берем из первого эдита строку и переводим ее в число
				 b = Convert::ToDouble(textBox2->Text); // Берем из первого эдита строку и переводим ее в число
				 result = a / b; // Делим два числа и помещаем в переменную для результата
				 textBox3->Text = result.ToString(); // Выводим значение переменной результат
			 }
}
};
}
