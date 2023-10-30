#pragma once

#include "Controller.h"
#include <msclr\marshal_cppstd.h>

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InsertPais
	/// </summary>
	public ref class InsertPais : public System::Windows::Forms::Form
	{
	public:
		InsertPais(void)
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
		~InsertPais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ insertBtn;
	protected:

	private: System::Windows::Forms::Label^ countrylbl;
	private: System::Windows::Forms::TextBox^ countryID;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ countryName;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;


	protected:

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
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->countrylbl = (gcnew System::Windows::Forms::Label());
			this->countryID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->countryName = (gcnew System::Windows::Forms::TextBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(153, 583);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(202, 85);
			this->insertBtn->TabIndex = 0;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &InsertPais::button1_Click);
			// 
			// countrylbl
			// 
			this->countrylbl->AutoSize = true;
			this->countrylbl->Location = System::Drawing::Point(486, 277);
			this->countrylbl->Name = L"countrylbl";
			this->countrylbl->Size = System::Drawing::Size(130, 24);
			this->countrylbl->TabIndex = 1;
			this->countrylbl->Text = L"Country ID";
			// 
			// countryID
			// 
			this->countryID->Location = System::Drawing::Point(490, 313);
			this->countryID->Name = L"countryID";
			this->countryID->Size = System::Drawing::Size(404, 35);
			this->countryID->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(486, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Country Name";
			// 
			// countryName
			// 
			this->countryName->Location = System::Drawing::Point(490, 437);
			this->countryName->Name = L"countryName";
			this->countryName->Size = System::Drawing::Size(404, 35);
			this->countryName->TabIndex = 4;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(564, 587);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(238, 85);
			this->searchBtn->TabIndex = 5;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &InsertPais::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(965, 589);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(187, 81);
			this->modifyBtn->TabIndex = 6;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &InsertPais::modifyBtn_Click);
			// 
			// InsertPais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1355, 902);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->countryName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->countryID);
			this->Controls->Add(this->countrylbl);
			this->Controls->Add(this->insertBtn);
			this->Name = L"InsertPais";
			this->Text = L"Formulario Paises";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->countryID->Text);
		string name = msclr::interop::marshal_as<std::string>(this->countryName->Text);
		
		if (boolInsertarPais == true) {
			if (paises.existePais(id)) {
				MessageBox::Show("Ya existe este pais");
			}
			else {
				paises.insertar(id, name);
				MessageBox::Show("Nuevo pais insertado");
			}
		}
		boolInsertarPais = false;
		
		
	}
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->countryID->Text);
		if (boolBuscarPais == true) {
			if (paises.existePais(id)) {
				this->countryName->Text = gcnew String(paises.buscar(id).c_str());
			}
			else {
				MessageBox::Show("No se encontro el pais");
			}
		}
		boolBuscarPais = false;
	}
private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->countryID->Text);
	string name = msclr::interop::marshal_as<std::string>(this->countryName->Text);

	if (boolModificarPais == true) {
		if (paises.existePais(id)) {
			paises.modificar(id, name);
			MessageBox::Show("Nombre de pais modificado");
		}
		else {
			MessageBox::Show("No existe este pais");
		}
	}
	boolModificarPais = false;
}
};
}
