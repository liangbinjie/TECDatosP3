#pragma once

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormRestaurante
	/// </summary>
	public ref class FormRestaurante : public System::Windows::Forms::Form
	{
	public:
		FormRestaurante(void)
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
		~FormRestaurante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ deleteBtn;
	protected:
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cityname;
	private: System::Windows::Forms::TextBox^ cityid;
	private: System::Windows::Forms::TextBox^ countryid;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cityname = (gcnew System::Windows::Forms::TextBox());
			this->cityid = (gcnew System::Windows::Forms::TextBox());
			this->countryid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(774, 453);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(194, 68);
			this->deleteBtn->TabIndex = 19;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(544, 453);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(201, 68);
			this->modifyBtn->TabIndex = 18;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(291, 453);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(224, 68);
			this->searchBtn->TabIndex = 17;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(52, 453);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(210, 68);
			this->insertBtn->TabIndex = 16;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(419, 345);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Restaurant name";
			this->label3->Click += gcnew System::EventHandler(this, &FormRestaurante::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(418, 169);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"City ID";
			// 
			// cityname
			// 
			this->cityname->Location = System::Drawing::Point(419, 384);
			this->cityname->Margin = System::Windows::Forms::Padding(2);
			this->cityname->Name = L"cityname";
			this->cityname->Size = System::Drawing::Size(281, 26);
			this->cityname->TabIndex = 13;
			// 
			// cityid
			// 
			this->cityid->Location = System::Drawing::Point(418, 205);
			this->cityid->Margin = System::Windows::Forms::Padding(2);
			this->cityid->Name = L"cityid";
			this->cityid->Size = System::Drawing::Size(281, 26);
			this->cityid->TabIndex = 12;
			// 
			// countryid
			// 
			this->countryid->Location = System::Drawing::Point(418, 104);
			this->countryid->Margin = System::Windows::Forms::Padding(2);
			this->countryid->Name = L"countryid";
			this->countryid->Size = System::Drawing::Size(281, 26);
			this->countryid->TabIndex = 11;
			this->countryid->TextChanged += gcnew System::EventHandler(this, &FormRestaurante::countryid_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(415, 63);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Country ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(418, 260);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Restaurant ID";
			this->label4->Click += gcnew System::EventHandler(this, &FormRestaurante::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(418, 299);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 26);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormRestaurante::textBox1_TextChanged);
			// 
			// FormRestaurante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 637);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cityname);
			this->Controls->Add(this->cityid);
			this->Controls->Add(this->countryid);
			this->Controls->Add(this->label1);
			this->Name = L"FormRestaurante";
			this->Text = L"FormRestaurante";
			this->Load += gcnew System::EventHandler(this, &FormRestaurante::FormRestaurante_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void countryid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FormRestaurante_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
