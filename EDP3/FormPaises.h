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
	public: System::Windows::Forms::Button^ insertBtn;
	protected:

	protected:

	private: System::Windows::Forms::Label^ countrylbl;
	private: System::Windows::Forms::TextBox^ countryID;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ countryName;
	public: System::Windows::Forms::Button^ searchBtn;
	private:
	public: System::Windows::Forms::Button^ modifyBtn;
	public: System::Windows::Forms::Button^ deleteBtn;





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
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// insertBtn
			// 
			this->insertBtn->Enabled = false;
			this->insertBtn->Location = System::Drawing::Point(115, 486);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(152, 71);
			this->insertBtn->TabIndex = 0;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &InsertPais::button1_Click);
			// 
			// countrylbl
			// 
			this->countrylbl->AutoSize = true;
			this->countrylbl->Location = System::Drawing::Point(364, 231);
			this->countrylbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->countrylbl->Name = L"countrylbl";
			this->countrylbl->Size = System::Drawing::Size(85, 20);
			this->countrylbl->TabIndex = 1;
			this->countrylbl->Text = L"Country ID";
			// 
			// countryID
			// 
			this->countryID->Location = System::Drawing::Point(368, 261);
			this->countryID->Margin = System::Windows::Forms::Padding(2);
			this->countryID->Name = L"countryID";
			this->countryID->Size = System::Drawing::Size(304, 26);
			this->countryID->TabIndex = 2;
			this->countryID->TextChanged += gcnew System::EventHandler(this, &InsertPais::countryID_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(364, 331);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Country Name";
			// 
			// countryName
			// 
			this->countryName->Location = System::Drawing::Point(368, 364);
			this->countryName->Margin = System::Windows::Forms::Padding(2);
			this->countryName->Name = L"countryName";
			this->countryName->Size = System::Drawing::Size(304, 26);
			this->countryName->TabIndex = 4;
			// 
			// searchBtn
			// 
			this->searchBtn->Enabled = false;
			this->searchBtn->Location = System::Drawing::Point(302, 486);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(178, 71);
			this->searchBtn->TabIndex = 5;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &InsertPais::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(513, 489);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(140, 68);
			this->modifyBtn->TabIndex = 6;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &InsertPais::modifyBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(708, 489);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(161, 68);
			this->deleteBtn->TabIndex = 7;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &InsertPais::deleteBtn_Click);
			// 
			// InsertPais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 752);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->countryName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->countryID);
			this->Controls->Add(this->countrylbl);
			this->Controls->Add(this->insertBtn);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InsertPais";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Formulario Paises";
			this->Load += gcnew System::EventHandler(this, &InsertPais::InsertPais_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//if (esCliente = true) {

		//}

	private: System::Void FormPaises_Load(System::Object^ sender, System::EventArgs^ e) {
		// Deshabilitar el botón al iniciar la página
		searchBtn->Visible = false;
		insertBtn->Visible= false;
		cout << "ddddddddddddddddddddddddddddddddddddddddddddddddd" << endl;
		if (boolBuscarPais == true) {
			searchBtn->Visible = true;
		}
		if (boolInsertarPais == true) {
			insertBtn->Visible = true;
		}
	}

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
		if (boolBuscarPais == true) {
			cout << "ddddddddddddddddddddddddddddd" << endl;
			int id = Convert::ToInt32(this->countryID->Text);
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
private: System::Void countryID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->countryID->Text);
	if (boolEliminarPais == true) {
		if (paises.existePais(id)) {
			paises.eliminar(id);
			MessageBox::Show("Se elimino el pais del sistema");
		}
		else {
			MessageBox::Show("Este pais no existe");
		}
	}
	boolEliminarPais = false;
}
private: System::Void InsertPais_Load(System::Object^ sender, System::EventArgs^ e) {
	searchBtn->Enabled = false;
	insertBtn->Enabled= false;
	modifyBtn->Enabled = false;
	deleteBtn->Enabled = false;

	if (boolBuscarPais == true) {
		searchBtn->Enabled = true;
	}
	if (boolInsertarPais == true) {
		insertBtn->Enabled = true;
	}
	if (boolModificarPais == true) {
		modifyBtn->Enabled = true;
	}
	if (boolEliminarPais == true) {
		deleteBtn->Enabled = true;
	}
}
};
}
