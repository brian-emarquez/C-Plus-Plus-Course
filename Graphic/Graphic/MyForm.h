#pragma once
#include <time.h>
#include <stdlib.h>

namespace Graphic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cerrar;
	protected:

	private: System::Windows::Forms::Button^ generar;
	private: System::Windows::Forms::Button^ reiniciar;
	private: System::Windows::Forms::PictureBox^ imagen;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->cerrar = (gcnew System::Windows::Forms::Button());
			this->generar = (gcnew System::Windows::Forms::Button());
			this->reiniciar = (gcnew System::Windows::Forms::Button());
			this->imagen = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imagen))->BeginInit();
			this->SuspendLayout();
			// 
			// cerrar
			// 
			this->cerrar->Location = System::Drawing::Point(399, 95);
			this->cerrar->Name = L"cerrar";
			this->cerrar->Size = System::Drawing::Size(75, 23);
			this->cerrar->TabIndex = 0;
			this->cerrar->Text = L"Cerrar";
			this->cerrar->UseVisualStyleBackColor = true;
			this->cerrar->Click += gcnew System::EventHandler(this, &MyForm::cerrar_click);
			// 
			// generar
			// 
			this->generar->Location = System::Drawing::Point(149, 95);
			this->generar->Name = L"generar";
			this->generar->Size = System::Drawing::Size(75, 23);
			this->generar->TabIndex = 1;
			this->generar->Text = L"Generar";
			this->generar->UseVisualStyleBackColor = true;
			this->generar->Click += gcnew System::EventHandler(this, &MyForm::generar_click);
			// 
			// reiniciar
			// 
			this->reiniciar->Location = System::Drawing::Point(272, 95);
			this->reiniciar->Name = L"reiniciar";
			this->reiniciar->Size = System::Drawing::Size(75, 23);
			this->reiniciar->TabIndex = 2;
			this->reiniciar->Text = L"Reiniciar";
			this->reiniciar->UseVisualStyleBackColor = true;
			this->reiniciar->Click += gcnew System::EventHandler(this, &MyForm::reiniciar_click);
			// 
			// imagen
			// 
			this->imagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imagen.Image")));
			this->imagen->Location = System::Drawing::Point(25, 28);
			this->imagen->Name = L"imagen";
			this->imagen->Size = System::Drawing::Size(100, 99);
			this->imagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imagen->TabIndex = 3;
			this->imagen->TabStop = false;
			this->imagen->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(145, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(191, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(244, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(293, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"4";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(343, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"5";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(397, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(451, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"7";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(131, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(367, 77);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Numeros";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 172);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->imagen);
			this->Controls->Add(this->reiniciar);
			this->Controls->Add(this->generar);
			this->Controls->Add(this->cerrar);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Numeros Random";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imagen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void cerrar_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void generar_click(System::Object^ sender, System::EventArgs^ e) {

		int num[7] = { 0 };

		// seed
		srand((int)time(0));

		// Randomize the array values.
		for (int i = 0; i < 7; i++)
			num[i] = (rand() % 99) + 1;

		// set the label text with random number
		this->label1->Text = Convert::ToString(num[0]);
		this->label2->Text = Convert::ToString(num[1]);
		this->label3->Text = Convert::ToString(num[2]);
		this->label4->Text = Convert::ToString(num[3]);
		this->label5->Text = Convert::ToString(num[4]);
		this->label6->Text = Convert::ToString(num[5]);
		this->label7->Text = Convert::ToString(num[6]);

		// change the button states.
		this->generar->Enabled = false;
		this->reiniciar->Enabled = true;
	}
	private: System::Void reiniciar_click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->label2->Text = "0";
		this->label3->Text = "0";
		this->label4->Text = "0";
		this->label5->Text = "0";
		this->label6->Text = "0";
		this->label7->Text = "0";

		// set button state
		this->generar->Enabled = true;
		this->reiniciar->Enabled = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
