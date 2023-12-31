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
	/// Resumen de FormClientes
	/// </summary>
	public ref class FormClientes : public System::Windows::Forms::Form
	{
	public:
		FormClientes(void)
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
		~FormClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ clienteid;
	private: System::Windows::Forms::TextBox^ clientename;
	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ deleteBtn;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->clienteid = (gcnew System::Windows::Forms::TextBox());
			this->clientename = (gcnew System::Windows::Forms::TextBox());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(403, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Identificacion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(407, 310);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// clienteid
			// 
			this->clienteid->Location = System::Drawing::Point(411, 231);
			this->clienteid->Name = L"clienteid";
			this->clienteid->Size = System::Drawing::Size(354, 35);
			this->clienteid->TabIndex = 2;
			// 
			// clientename
			// 
			this->clientename->Location = System::Drawing::Point(411, 363);
			this->clientename->Name = L"clientename";
			this->clientename->Size = System::Drawing::Size(354, 35);
			this->clientename->TabIndex = 3;
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(173, 500);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(148, 76);
			this->insertBtn->TabIndex = 4;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormClientes::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(361, 500);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(161, 76);
			this->searchBtn->TabIndex = 5;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormClientes::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(564, 500);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(157, 76);
			this->modifyBtn->TabIndex = 6;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormClientes::modifyBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(768, 500);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(182, 76);
			this->deleteBtn->TabIndex = 7;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormClientes::deleteBtn_Click);
			// 
			// FormClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 690);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->clientename);
			this->Controls->Add(this->clienteid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormClientes";
			this->Load += gcnew System::EventHandler(this, &FormClientes::FormClientes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->clienteid->Text);
		string name = msclr::interop::marshal_as<std::string>(this->clientename->Text);

		if (clientes.existe(id)) {
			MessageBox::Show("Este cliente ya existe");
		}
		else {
			clientes.insertar(id, name);
			MessageBox::Show("Nuevo cliente insertado");
		}
	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->clienteid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->clientename->Text);

	if (clientes.existe(id)) {
		this->clientename->Text = gcnew String(clientes.buscar(id).c_str());
	}
	else {
		MessageBox::Show("Este cliente no existe");
	}
}
private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->clienteid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->clientename->Text);

	if (clientes.existe(id)) {
		clientes.modificar(id, name);
		MessageBox::Show("Nombre de cliente modificado");
	}
	else {
		MessageBox::Show("Este cliente no existe");
	}
}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->clienteid->Text);

	if (clientes.existe(id)) {
		clientes.eliminar(id);
		MessageBox::Show("Cliente eliminado del sistema");
	}
	else {
		MessageBox::Show("Este cliente no existe");
	}
}
private: System::Void FormClientes_Load(System::Object^ sender, System::EventArgs^ e) {
	searchBtn->Enabled = false;
	insertBtn->Enabled = false;
	modifyBtn->Enabled = false;
	deleteBtn->Enabled = false;

	if (boolBuscarCliente == true) {
		searchBtn->Enabled = true;
	}
	if (boolInsertarCliente == true) {
		insertBtn->Enabled = true;
	}
	if (boolModificarCliente == true) {
		modifyBtn->Enabled = true;
	}
	if (boolEliminarCliente == true) {
		deleteBtn->Enabled = true;
	}
}
};
}
