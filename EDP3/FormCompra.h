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
	/// Resumen de FormCompra
	/// </summary>
	public ref class FormCompra : public System::Windows::Forms::Form
	{
	public:
		FormCompra(void)
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
		~FormCompra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ idFactura;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::TextBox^ info;

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
			this->idFactura = (gcnew System::Windows::Forms::TextBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Factura";
			// 
			// idFactura
			// 
			this->idFactura->Location = System::Drawing::Point(48, 98);
			this->idFactura->Name = L"idFactura";
			this->idFactura->Size = System::Drawing::Size(337, 35);
			this->idFactura->TabIndex = 1;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(483, 57);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(213, 84);
			this->searchBtn->TabIndex = 2;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormCompra::searchBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(775, 57);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(241, 84);
			this->deleteBtn->TabIndex = 3;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormCompra::deleteBtn_Click);
			// 
			// info
			// 
			this->info->Location = System::Drawing::Point(48, 209);
			this->info->Multiline = true;
			this->info->Name = L"info";
			this->info->ReadOnly = true;
			this->info->Size = System::Drawing::Size(968, 489);
			this->info->TabIndex = 4;
			// 
			// FormCompra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1077, 773);
			this->Controls->Add(this->info);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->idFactura);
			this->Controls->Add(this->label1);
			this->Name = L"FormCompra";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormCompra";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		string id = msclr::interop::marshal_as<std::string>(this->idFactura->Text);
		if (compras.existe(id)) {
			this->info->Text = gcnew String(compras.buscar(id).c_str());
		}
		else {
			MessageBox::Show("Esta compra no existe");
		}
	}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	string id = msclr::interop::marshal_as<std::string>(this->idFactura->Text);
	if (compras.existe(id)) {
		compras.eliminar(id);
		MessageBox::Show("Eliminado");
	}
	else {
		MessageBox::Show("Esta compra no existe");
	}
}
};
}
