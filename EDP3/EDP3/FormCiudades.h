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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(537, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Country ID";
			// 
			// countryid
			// 
			this->countryid->Location = System::Drawing::Point(541, 275);
			this->countryid->Name = L"countryid";
			this->countryid->Size = System::Drawing::Size(373, 35);
			this->countryid->TabIndex = 1;
			// 
			// cityid
			// 
			this->cityid->Location = System::Drawing::Point(541, 396);
			this->cityid->Name = L"cityid";
			this->cityid->Size = System::Drawing::Size(373, 35);
			this->cityid->TabIndex = 2;
			// 
			// cityname
			// 
			this->cityname->Location = System::Drawing::Point(541, 545);
			this->cityname->Name = L"cityname";
			this->cityname->Size = System::Drawing::Size(373, 35);
			this->cityname->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(541, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"City ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(541, 498);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"City name";
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(187, 690);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(280, 82);
			this->insertBtn->TabIndex = 6;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormCiudades::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(577, 690);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(299, 82);
			this->searchBtn->TabIndex = 7;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormCiudades::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(1002, 690);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(268, 82);
			this->modifyBtn->TabIndex = 8;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			// 
			// FormCiudades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1421, 955);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cityname);
			this->Controls->Add(this->cityid);
			this->Controls->Add(this->countryid);
			this->Controls->Add(this->label1);
			this->Name = L"FormCiudades";
			this->Text = L"FormCiudades";
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
};
}
