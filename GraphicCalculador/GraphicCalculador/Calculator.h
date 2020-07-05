#pragma once

namespace GraphicCalculador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ suma;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;









	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->suma = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// suma
			// 
			this->suma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->suma->Location = System::Drawing::Point(136, 148);
			this->suma->Name = L"suma";
			this->suma->Size = System::Drawing::Size(53, 47);
			this->suma->TabIndex = 0;
			this->suma->Text = L"+";
			this->suma->UseVisualStyleBackColor = true;
			this->suma->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(256, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n/a";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(290, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(210, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 47);
			this->button2->TabIndex = 0;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(285, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 47);
			this->button3->TabIndex = 0;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(359, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 47);
			this->button4->TabIndex = 0;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 259);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(279, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"RESULTADO";
			this->label4->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(210, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"CALCULADORA SIMPLE";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 347);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->suma);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "-";
		int result = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(result);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "*";
		int result = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(result);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "+";
		int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		textBox3 -> Text = System::Convert::ToString(result);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "/";
		int result = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(result);
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
