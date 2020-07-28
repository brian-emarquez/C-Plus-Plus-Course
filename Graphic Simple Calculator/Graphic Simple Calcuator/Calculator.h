#pragma once

namespace GraphicSimpleCalcuator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:
	private: System::Windows::Forms::Button^ btnSpace;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnClearEntry;
	private: System::Windows::Forms::Button^ btnPlus;






	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnSuma;


	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnResta;


	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnMultiplicacion;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnEquals;


	private: System::Windows::Forms::Button^ btnDivision;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnResta = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacion = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(26, 36);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(275, 45);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnSpace->Location = System::Drawing::Point(30, 100);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(57, 55);
			this->btnSpace->TabIndex = 1;
			this->btnSpace->Text = L"";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &Calculator::btnSpace_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(101, 100);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(57, 55);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Calculator::btnClear_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearEntry->Location = System::Drawing::Point(173, 100);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(57, 55);
			this->btnClearEntry->TabIndex = 1;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = true;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &Calculator::btnClearEntry_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(242, 100);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(57, 55);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"±";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Calculator::btnPlus_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(30, 161);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(57, 55);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(101, 161);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(57, 55);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(173, 161);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(57, 55);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnSuma
			// 
			this->btnSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSuma->Location = System::Drawing::Point(242, 161);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(57, 55);
			this->btnSuma->TabIndex = 1;
			this->btnSuma->Text = L"+";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(30, 222);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(57, 55);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(101, 222);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(57, 55);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(173, 222);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(57, 55);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnResta
			// 
			this->btnResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResta->Location = System::Drawing::Point(242, 222);
			this->btnResta->Name = L"btnResta";
			this->btnResta->Size = System::Drawing::Size(57, 55);
			this->btnResta->TabIndex = 1;
			this->btnResta->Text = L"-";
			this->btnResta->UseVisualStyleBackColor = true;
			this->btnResta->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(30, 283);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(57, 55);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(101, 283);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(57, 55);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(173, 283);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(57, 55);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnMultiplicacion
			// 
			this->btnMultiplicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplicacion->Location = System::Drawing::Point(242, 283);
			this->btnMultiplicacion->Name = L"btnMultiplicacion";
			this->btnMultiplicacion->Size = System::Drawing::Size(57, 55);
			this->btnMultiplicacion->TabIndex = 1;
			this->btnMultiplicacion->Text = L"*";
			this->btnMultiplicacion->UseVisualStyleBackColor = true;
			this->btnMultiplicacion->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(30, 344);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(57, 55);
			this->button17->TabIndex = 1;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(101, 344);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(57, 55);
			this->btnDecimal->TabIndex = 1;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &Calculator::btnDecimal_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(173, 344);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(57, 55);
			this->btnEquals->TabIndex = 1;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Calculator::btnEquals_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivision->Location = System::Drawing::Point(242, 344);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(57, 55);
			this->btnDivision->TabIndex = 1;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(331, 423);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnMultiplicacion);
			this->Controls->Add(this->btnResta);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->txtDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firsDigit, secondDigit, result;
		String^ operators;

	private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		
		Button^ Numbers = safe_cast<Button^>(sender);
		
		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;
		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firsDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	operators = NumbersOp->Text;

}
	
	

private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains ("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text);
	if (operators == "+")
	{
		result = firsDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firsDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firsDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firsDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}

private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}

}
private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1,1);
	}
	if (txtDisplay->Text=="")
	{
		txtDisplay->Text = "0";
	}
}
};
}
