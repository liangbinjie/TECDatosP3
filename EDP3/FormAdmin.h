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
	/// Resumen de FormAdmin
	/// </summary>
	public ref class FormAdmin : public System::Windows::Forms::Form
	{
	public:
		FormAdmin(void)
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
		~FormAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ insertBtn;
	protected:
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ adminid;
	private: System::Windows::Forms::TextBox^ adminname;
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
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->adminid = (gcnew System::Windows::Forms::TextBox());
			this->adminname = (gcnew System::Windows::Forms::TextBox());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(150, 476);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(148, 73);
			this->insertBtn->TabIndex = 0;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormAdmin::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(316, 476);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(145, 72);
			this->searchBtn->TabIndex = 1;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormAdmin::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(478, 476);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(136, 72);
			this->modifyBtn->TabIndex = 2;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormAdmin::modifyBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(314, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Identificacion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre";
			// 
			// adminid
			// 
			this->adminid->Location = System::Drawing::Point(318, 199);
			this->adminid->Name = L"adminid";
			this->adminid->Size = System::Drawing::Size(311, 35);
			this->adminid->TabIndex = 5;
			// 
			// adminname
			// 
			this->adminname->Location = System::Drawing::Point(318, 370);
			this->adminname->Name = L"adminname";
			this->adminname->Size = System::Drawing::Size(311, 35);
			this->adminname->TabIndex = 6;
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(643, 476);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(152, 72);
			this->deleteBtn->TabIndex = 7;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormAdmin::deleteBtn_Click);
			// 
			// FormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 675);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->adminname);
			this->Controls->Add(this->adminid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Name = L"FormAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->adminid->Text);
		string name = msclr::interop::marshal_as<std::string>(this->adminname->Text);

		if (administradores.existe(id)) {
			MessageBox::Show("Este administrador ya existe");
		}
		else {
			administradores.insertar(id, name);
			MessageBox::Show("Nuevo administrador insertado");
		}
	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->adminid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->adminname->Text);

	if (administradores.existe(id)) {
		this->adminname->Text = gcnew String(administradores.buscar(id).c_str());
	}
	else {
		MessageBox::Show("Este administrador no existe");
	}
}
private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->adminid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->adminname->Text);

	if (administradores.existe(id)) {
		administradores.modificar(id, name);
		MessageBox::Show("Nombre de admininstrador modificado");
	}
	else {
		MessageBox::Show("Este administrador no existe");
	}
}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->adminid->Text);
	if (administradores.existe(id)) {
		administradores.eliminar(id);
		MessageBox::Show("Admininstrador eliminado");
	}
	else {
		MessageBox::Show("Este administrador no existe");
	}
}
};
}
