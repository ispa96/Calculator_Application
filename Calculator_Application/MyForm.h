#pragma once

#include <iostream>

namespace CalculatorApplication {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;

	private:
		bool any_key_pressed = false, current_element = false;	/// false for first_element, true, for second_element
		String^ first_element_value = "";
		String^ second_element_value = "";
		char first_element_sign = '0', second_element_sign = '0';
		char operation = '0';
		int button_equal_pressed = 0;	/// de cate ori am apsat egal

	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_multiplication;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_multiplication = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox1->Location = System::Drawing::Point(1, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(566, 50);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::MediumPurple;
			this->button0->ForeColor = System::Drawing::Color::White;
			this->button0->Location = System::Drawing::Point(239, 466);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(99, 67);
			this->button0->TabIndex = 1;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			this->button0->MouseEnter += gcnew System::EventHandler(this, &MyForm::button0_MouseEnter);
			this->button0->MouseLeave += gcnew System::EventHandler(this, &MyForm::button0_MouseLeave);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(344, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 67);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button3_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button3_MouseLeave);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(239, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 67);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(134, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::MediumPurple;
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(468, 466);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(99, 67);
			this->button_plus->TabIndex = 5;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			this->button_plus->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_plus_MouseEnter);
			this->button_plus->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_plus_MouseLeave);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::MediumPurple;
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(468, 393);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(99, 67);
			this->button_minus->TabIndex = 6;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			this->button_minus->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_minus_MouseEnter);
			this->button_minus->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_minus_MouseLeave);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::MediumPurple;
			this->button_equal->ForeColor = System::Drawing::Color::White;
			this->button_equal->Location = System::Drawing::Point(468, 174);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(99, 67);
			this->button_equal->TabIndex = 7;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			this->button_equal->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_equal_MouseEnter);
			this->button_equal->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_equal_MouseLeave);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::Color::MediumPurple;
			this->button_clear->ForeColor = System::Drawing::Color::White;
			this->button_clear->Location = System::Drawing::Point(1, 174);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(99, 67);
			this->button_clear->TabIndex = 8;
			this->button_clear->Text = L"C";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			this->button_clear->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_clear_MouseEnter);
			this->button_clear->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_clear_MouseLeave);
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->BackColor = System::Drawing::Color::Transparent;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Wide Latin", 25.25F));
			this->label_title->ForeColor = System::Drawing::Color::MediumPurple;
			this->label_title->Location = System::Drawing::Point(48, 59);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(474, 42);
			this->label_title->TabIndex = 9;
			this->label_title->Text = L"CALCULATOR";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::MediumPurple;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(518, -1);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(49, 23);
			this->button_exit->TabIndex = 10;
			this->button_exit->Text = L"EXIT";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			this->button_exit->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_exit_MouseEnter);
			this->button_exit->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_exit_MouseLeave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(134, 320);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 67);
			this->button4->TabIndex = 11;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm::button4_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button4_MouseLeave);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumPurple;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(239, 320);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 67);
			this->button5->TabIndex = 12;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &MyForm::button5_MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &MyForm::button5_MouseLeave);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumPurple;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(344, 320);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 67);
			this->button6->TabIndex = 13;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &MyForm::button6_MouseEnter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &MyForm::button6_MouseLeave);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MediumPurple;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(134, 247);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 67);
			this->button7->TabIndex = 14;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->button7->MouseEnter += gcnew System::EventHandler(this, &MyForm::button7_MouseEnter);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &MyForm::button7_MouseLeave);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumPurple;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(239, 247);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 67);
			this->button8->TabIndex = 15;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			this->button8->MouseEnter += gcnew System::EventHandler(this, &MyForm::button8_MouseEnter);
			this->button8->MouseLeave += gcnew System::EventHandler(this, &MyForm::button8_MouseLeave);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::MediumPurple;
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(344, 247);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 67);
			this->button9->TabIndex = 16;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			this->button9->MouseEnter += gcnew System::EventHandler(this, &MyForm::button9_MouseEnter);
			this->button9->MouseLeave += gcnew System::EventHandler(this, &MyForm::button9_MouseLeave);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::MediumPurple;
			this->button_divide->ForeColor = System::Drawing::Color::White;
			this->button_divide->Location = System::Drawing::Point(1, 393);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(99, 67);
			this->button_divide->TabIndex = 17;
			this->button_divide->Text = L"÷";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			this->button_divide->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_divide_MouseEnter);
			this->button_divide->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_divide_MouseLeave);
			// 
			// button_multiplication
			// 
			this->button_multiplication->BackColor = System::Drawing::Color::MediumPurple;
			this->button_multiplication->ForeColor = System::Drawing::Color::White;
			this->button_multiplication->Location = System::Drawing::Point(1, 466);
			this->button_multiplication->Name = L"button_multiplication";
			this->button_multiplication->Size = System::Drawing::Size(99, 67);
			this->button_multiplication->TabIndex = 18;
			this->button_multiplication->Text = L"x";
			this->button_multiplication->UseVisualStyleBackColor = false;
			this->button_multiplication->Click += gcnew System::EventHandler(this, &MyForm::button_multiplication_Click);
			this->button_multiplication->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_multiplication_MouseEnter);
			this->button_multiplication->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_multiplication_MouseLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(568, 568);
			this->Controls->Add(this->button_multiplication);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	///	-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	/// DE AICI IN JOS SUNT FUNCTII PENTRU CLICK PE BUTON
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button0->Text;
		else second_element_value += button0->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button1->Text;
		else second_element_value += button1->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button2->Text;
		else second_element_value += button2->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button3->Text;
		else second_element_value += button3->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button4->Text;
		else second_element_value += button4->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button5->Text;
		else second_element_value += button5->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button6->Text;
		else second_element_value += button6->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button7->Text;
		else second_element_value += button7->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button8->Text;
		else second_element_value += button8->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button_equal_pressed) {	/// daca am apasat egal
			if (operation == '0') {	/// trebuie sa alegem doar operatie
				MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
				return;
			}
		}

		if (!current_element)
			first_element_value += button9->Text;
		else second_element_value += button9->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_element_sign != '0' && first_element_value == "") {
			MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
			return;
		}

		if (second_element_sign != '0' || second_element_value != "") {
			MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
			return;
		}

		if (!any_key_pressed)	/// daca e prima tasta apasta
			first_element_sign = '+';	/// semnul primului element
		else {
			if (operation == '0')
				operation = '+', current_element = true;
			else {
				second_element_sign = '+';
			}
		}

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first_element_sign != '0' && first_element_value == "") {
			MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
			return;
		}

		if (second_element_sign != '0' || second_element_value != "") {
			MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
			return;
		}

		if (!any_key_pressed)	/// idem button_plus
			first_element_sign = '-';
		else {
			if (operation == '0')
				operation = '-', current_element = true;
			else {
				second_element_sign = '-';
			}
		}

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		button_equal_pressed++;

		/// daca apas egal si al doilea element nu este setat, trebuie sa dea o eroase
		if (second_element_value == "") {
			MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
			return;	/// iese din functie
		}

		double first_element = Double::Parse(first_element_value);
		double second_element = Double::Parse(second_element_value);
		double result = 0;

		first_element_value = "";	/// resetam stringul ce tine primul element
		second_element_value = "";	/// idem pentru al doilea

		if (first_element_sign == '-')
			first_element *= -1;
		first_element_sign = '0';	/// resetam semnul pentru primul element

		if (second_element_sign == '-')
			second_element *= -1;
		second_element_sign = '0';	/// resetam semnul pentru al doilea element

		if (operation == '+')
			result = first_element + second_element;
		else if (operation == '-')
			result = first_element - second_element;
		else if (operation == '*')
			result = first_element * second_element;
		else if (operation == '/')
			result = first_element / second_element;

		operation = '0';	/// resetam operatia

		if (result < 0)
			first_element_sign = '-';
		else first_element_sign = '+';

		result = Math::Round(result, 3);
		textBox1->Text = result.ToString("G");

		if (result < 0)
			result *= -1;

		first_element_value = result.ToString("F3");
	}
	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		any_key_pressed = false;
		current_element = false;

		first_element_value = "";
		second_element_value = "";

		first_element_sign = '0';
		second_element_sign = '0';
		operation = '0';

		textBox1->Text = "";
	}
	private: System::Void button_multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		/// daca este prima tasta apasata trebuie sa apara o fereastra care zice ca elementul nu poate fi selectat
		if (any_key_pressed) {	/// daca am ales deja semnul pentru primul element
			if (operation == '0') {	/// daca operatia nu a fost aleasa
				operation = '*';	/// setam operatia
				current_element = true;
				return;	/// iesim din functie
			}
		}

		/// daca nu a fost aleasa corect, afisam un mesaj
		MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		/// daca este prima tasta apasata trebuie sa apara o fereastra care zice ca elementul nu poate fi selectat
		if (any_key_pressed) {	/// daca am ales deja semnul pentru primul element
			if (operation == '0') {	/// daca operatia inca nu a fost aleasa
				operation = '/';	/// setam operatia 
				current_element = true;
				return;	/// iesim din functie
			}
		}

		/// daca nu a fost aleasa corect, afisam un mesaj
		MessageBox::Show("You cannot chose this button!", "An ERROR has occurred!", MessageBoxButtons::OK, MessageBoxIcon::Question);
	}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Close();
	}

	///	-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	/// DE AICI IN JOS SUNT FUNCTII PENTRU HOVER PE BUTON
	private: System::Void button_clear_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_clear->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_clear_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_clear->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button0_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button0->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button0_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button0->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = System::Drawing::Color::MediumPurple;
	}

	private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button3->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button3->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button4->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button4->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button5->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button5->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button6->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button6->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button7->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button7->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button8->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button8->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button9_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button9->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button9_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button9->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_divide_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_divide->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_divide_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_divide->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_multiplication_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_multiplication->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_multiplication_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_multiplication->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_plus_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_plus->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_plus_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_plus->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_minus_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_minus->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_minus_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_minus->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_equal_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_equal->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_equal_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_equal->BackColor = System::Drawing::Color::MediumPurple;
	}
	private: System::Void button_exit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_exit->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button_exit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_exit->BackColor = System::Drawing::Color::MediumPurple;
	}

	///	-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	/// 
};
}

/**

	info:
	
	-> trebuie sa rezolv ca dupa egal, sa nu pot apasa cifre, ci doar operatii

**/
