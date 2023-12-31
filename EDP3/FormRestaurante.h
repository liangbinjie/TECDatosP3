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
	private: System::Windows::Forms::TextBox^ restName;
	private: System::Windows::Forms::TextBox^ cityID;


	private: System::Windows::Forms::TextBox^ countryID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ restID;


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
			this->restName = (gcnew System::Windows::Forms::TextBox());
			this->cityID = (gcnew System::Windows::Forms::TextBox());
			this->countryID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->restID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(1032, 544);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(259, 82);
			this->deleteBtn->TabIndex = 19;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormRestaurante::deleteBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(725, 544);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(268, 82);
			this->modifyBtn->TabIndex = 18;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormRestaurante::modifyBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(405, 544);
			this->searchBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(299, 82);
			this->searchBtn->TabIndex = 17;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormRestaurante::searchBtn_Click);
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(69, 544);
			this->insertBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(280, 82);
			this->insertBtn->TabIndex = 16;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormRestaurante::insertBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(559, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Restaurant name";
			this->label3->Click += gcnew System::EventHandler(this, &FormRestaurante::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(557, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"City ID";
			// 
			// restName
			// 
			this->restName->Location = System::Drawing::Point(559, 461);
			this->restName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->restName->Name = L"restName";
			this->restName->Size = System::Drawing::Size(373, 35);
			this->restName->TabIndex = 13;
			this->restName->TextChanged += gcnew System::EventHandler(this, &FormRestaurante::cityname_TextChanged);
			// 
			// cityID
			// 
			this->cityID->Location = System::Drawing::Point(557, 246);
			this->cityID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cityID->Name = L"cityID";
			this->cityID->Size = System::Drawing::Size(373, 35);
			this->cityID->TabIndex = 12;
			// 
			// countryID
			// 
			this->countryID->Location = System::Drawing::Point(557, 125);
			this->countryID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->countryID->Name = L"countryID";
			this->countryID->Size = System::Drawing::Size(373, 35);
			this->countryID->TabIndex = 11;
			this->countryID->TextChanged += gcnew System::EventHandler(this, &FormRestaurante::countryid_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(553, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Country ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(557, 312);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 24);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Restaurant ID";
			this->label4->Click += gcnew System::EventHandler(this, &FormRestaurante::label4_Click);
			// 
			// restID
			// 
			this->restID->Location = System::Drawing::Point(557, 359);
			this->restID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->restID->Name = L"restID";
			this->restID->Size = System::Drawing::Size(373, 35);
			this->restID->TabIndex = 20;
			this->restID->TextChanged += gcnew System::EventHandler(this, &FormRestaurante::textBox1_TextChanged);
			// 
			// FormRestaurante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1403, 764);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->restID);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->restName);
			this->Controls->Add(this->cityID);
			this->Controls->Add(this->countryID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	searchBtn->Enabled = false;
	insertBtn->Enabled = false;
	modifyBtn->Enabled = false;
	deleteBtn->Enabled = false;

	if (boolBuscarRest == true) {
		searchBtn->Enabled = true;
	}
	if (boolInsertarRest == true) {
		insertBtn->Enabled = true;
	}
	if (boolModificarRest == true) {
		modifyBtn->Enabled = true;
	}
	if (boolEliminarRest == true) {
		deleteBtn->Enabled = true;
	}

}
private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idPais = Convert::ToInt32(this->countryID->Text);
	int idCiudad = Convert::ToInt32(this->cityID->Text);
	int idRest = Convert::ToInt32(this->restID->Text);
	string name = msclr::interop::marshal_as<std::string>(this->restName->Text);

	if (boolInsertarRest == true) {
		//rest.existe(idRest, idPais, idCiudad)
		
		if (restaurantes.existePP(idRest,idPais,idCiudad)) {
			MessageBox::Show("Ya existe este restaurante");
		}
		else {
			restaurantes.insertar(idPais, idCiudad, idRest, name, paises, ciudades, rest);
			MessageBox::Show("Nuevo restaurante insertado");
		}
	}
	boolInsertarRest = false;




}
private: System::Void cityname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idPais = Convert::ToInt32(this->countryID->Text);
	int idCiudad = Convert::ToInt32(this->cityID->Text);
	int idRest = Convert::ToInt32(this->restID->Text);
	
	if (boolBuscarRest == true) {
		cout << "buscando" << endl;
		if (restaurantes.existePP(idRest, idPais, idCiudad)) {
			this->restName->Text = gcnew String(restaurantes.buscar(idRest, idPais, idCiudad).c_str());
		}
		else {
			cout << "No existe el rest" << endl;
			MessageBox::Show("No se encontro el restaurante");
		}
	}
	boolBuscarPais = false;
}

private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idPais = Convert::ToInt32(this->countryID->Text);
	int idCiudad = Convert::ToInt32(this->cityID->Text);
	int idRest = Convert::ToInt32(this->restID->Text);
	string name = msclr::interop::marshal_as<std::string>(this->restName->Text);

	if (boolModificarRest == true) {
		if (rest.existe(idRest, idPais, idCiudad)) {
			//int id, int idPais, int idCiudad, string nuevoNombre
			restaurantes.modificar(idRest, idPais, idCiudad, name);
			MessageBox::Show("Nombre de restaurante modificado");
		}
		else {
			MessageBox::Show("No existe este restaurante");
		}
	}
	boolModificarRest = false;


}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idPais = Convert::ToInt32(this->countryID->Text);
	int idCiudad = Convert::ToInt32(this->cityID->Text);
	int idRest = Convert::ToInt32(this->restID->Text);

	if (boolEliminarRest) {
		if (restaurantes.existePP(idRest, idPais, idCiudad)) {
			restaurantes.eliminar(idRest, idPais, idCiudad);
			MessageBox::Show("Restaurante Eliminado");
		}
		else {
			MessageBox::Show("Este restaurante no existe");
		}
	}
}
};
}
