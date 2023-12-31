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
	/// Resumen de FormCiudades
	/// </summary>
	public ref class FormCiudades : public System::Windows::Forms::Form
	{
	public:
		FormCiudades(void)
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
		~FormCiudades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ countryid;
	private: System::Windows::Forms::TextBox^ cityid;
	private: System::Windows::Forms::TextBox^ cityname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ deleteBtn;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->countryid = (gcnew System::Windows::Forms::TextBox());
			this->cityid = (gcnew System::Windows::Forms::TextBox());
			this->cityname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(403, 188);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Country ID";
			// 
			// countryid
			// 
			this->countryid->Location = System::Drawing::Point(406, 229);
			this->countryid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->countryid->Name = L"countryid";
			this->countryid->Size = System::Drawing::Size(281, 26);
			this->countryid->TabIndex = 1;
			// 
			// cityid
			// 
			this->cityid->Location = System::Drawing::Point(406, 330);
			this->cityid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cityid->Name = L"cityid";
			this->cityid->Size = System::Drawing::Size(281, 26);
			this->cityid->TabIndex = 2;
			// 
			// cityname
			// 
			this->cityname->Location = System::Drawing::Point(406, 454);
			this->cityname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cityname->Name = L"cityname";
			this->cityname->Size = System::Drawing::Size(281, 26);
			this->cityname->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(406, 294);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"City ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(406, 415);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"City name";
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(40, 578);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(210, 68);
			this->insertBtn->TabIndex = 6;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormCiudades::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(279, 578);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(224, 68);
			this->searchBtn->TabIndex = 7;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormCiudades::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(532, 578);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(201, 68);
			this->modifyBtn->TabIndex = 8;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormCiudades::modifyBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(762, 578);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(194, 68);
			this->deleteBtn->TabIndex = 9;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormCiudades::deleteBtn_Click);
			// 
			// FormCiudades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 796);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"FormCiudades";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormCiudades";
			this->Load += gcnew System::EventHandler(this, &FormCiudades::FormCiudades_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->countryid->Text);
		int idC = Convert::ToInt32(this->cityid->Text);
		string name = msclr::interop::marshal_as<std::string>(this->cityname->Text);

		if (ciudades.existeCiudad(idC, idP)) {
			MessageBox::Show("Esta ciudad ya existe en el sistema");
		}
		else {
			if (paises.existePais(idP)) {
				ciudades.insertar(idC, idP, name, paises);
				MessageBox::Show("Nueva ciudad ingresada");
			}
			else {
				MessageBox::Show("Este pais no existe");
			}
		}

	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryid->Text);
	int idC = Convert::ToInt32(this->cityid->Text);
	if (ciudades.existeCiudad(idC, idP)) {
		this->cityname->Text = gcnew String(ciudades.buscarCiudad(idC, idP).c_str());
	}
	else {
		MessageBox::Show("No se encontro la ciudad");
	}
}
private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryid->Text);
	int idC = Convert::ToInt32(this->cityid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->cityname->Text);
	if (ciudades.existeCiudad(idC, idP)) {
		ciudades.modificar(idC, name, idP, paises);
		MessageBox::Show("Nombre de ciudad modificada");
	}
	else {
		MessageBox::Show("Esta ciudad no existe");
	}
}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryid->Text);
	int idC = Convert::ToInt32(this->cityid->Text);

	if (ciudades.existeCiudad(idC, idP)) {
		ciudades.eliminar(idC, idP);
		MessageBox::Show("Ciudad eliminada");
	}
	else {
		MessageBox::Show("Esta ciudad no existe");
	}
}
private: System::Void FormCiudades_Load(System::Object^ sender, System::EventArgs^ e) {
	searchBtn->Enabled = false;
	insertBtn->Enabled = false;
	modifyBtn->Enabled = false;
	deleteBtn->Enabled = false;

	if (boolBuscarCiudad == true) {
		searchBtn->Enabled = true;
	}
	if (boolInsertarCiudad == true) {
		insertBtn->Enabled = true;
	}
	if (boolModificarCiudad == true) {
		modifyBtn->Enabled = true;
	}
	if (boolEliminarCiudad == true) {
		deleteBtn->Enabled = true;
	}


}
};
}
