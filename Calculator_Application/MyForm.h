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

	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_clear;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->textBox1->Location = System::Drawing::Point(1, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(664, 50);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(252, 393);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(99, 67);
			this->button0->TabIndex = 1;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(357, 324);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 67);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(252, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 67);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(147, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_plus
			// 
			this->button_plus->Location = System::Drawing::Point(554, 393);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(99, 67);
			this->button_plus->TabIndex = 5;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_minus
			// 
			this->button_minus->Location = System::Drawing::Point(554, 320);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(99, 67);
			this->button_minus->TabIndex = 6;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_equal
			// 
			this->button_equal->Location = System::Drawing::Point(554, 127);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(99, 67);
			this->button_equal->TabIndex = 7;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(12, 127);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(99, 67);
			this->button_clear->TabIndex = 8;
			this->button_clear->Text = L"C";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 463);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!current_element)
			first_element_value += button0->Text;
		else second_element_value += button0->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!current_element)
			first_element_value += button1->Text;
		else second_element_value += button1->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!current_element)
			first_element_value += button2->Text;
		else second_element_value += button2->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!current_element)
			first_element_value += button3->Text;
		else second_element_value += button3->Text;

		if (!any_key_pressed)
			any_key_pressed = true;
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
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
		int first_element = Int32::Parse(first_element_value);
		int second_element = Int32::Parse(second_element_value);
		int result = 0;

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
		operation = '0';	/// resetam operatia

		if (result < 0)
			first_element_sign = '-';
		else first_element_sign = '+';

		textBox1->Text = result.ToString();
		if (result < 0)
			result *= -1;

		first_element_value = result.ToString();
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
};
}

/**

	info:
	
	-> first buttons working good (even negative and positive buttons)

**/
