#pragma once

#include "FormPaises.h"
#include "FormCiudades.h"
#include "FormClientes.h"
#include "FormAdmin.h"
#include "Paises.h"
#include "Admins.h"
#include "Controller.h"
#include "FormRestaurante.h"
#include "FormMenu.h"
#include "Menu.h"
#include "FormProducto.h"


namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ViewCliente
	/// </summary>
	public ref class ViewCliente : public System::Windows::Forms::Form
	{
	public:
		ViewCliente(void)
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
		~ViewCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ comprasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 188);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 161);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(747, 200);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 161);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Comprar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->consultasToolStripMenuItem,
					this->comprasToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1226, 33);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->paisToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->restauranteToolStripMenuItem, this->menuToolStripMenuItem, this->productoToolStripMenuItem
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(105, 29);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::consultasToolStripMenuItem_Click);
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			this->restauranteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::restauranteToolStripMenuItem_Click);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::menuToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->productoToolStripMenuItem->Text = L"Producto";
			// 
			// comprasToolStripMenuItem
			// 
			this->comprasToolStripMenuItem->Name = L"comprasToolStripMenuItem";
			this->comprasToolStripMenuItem->Size = System::Drawing::Size(100, 29);
			this->comprasToolStripMenuItem->Text = L"Compras";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(105, 29);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// contactosToolStripMenuItem
			// 
			this->contactosToolStripMenuItem->Name = L"contactosToolStripMenuItem";
			this->contactosToolStripMenuItem->Size = System::Drawing::Size(108, 29);
			this->contactosToolStripMenuItem->Text = L"Contactos";
			this->contactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::contactosToolStripMenuItem_Click);
			// 
			// ViewCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 853);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ViewCliente";
			this->Text = L"ViewCliente";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void contactosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void paisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolBuscarPais = true;
	pais.ShowDialog();
	boolBuscarPais = false;
}
private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	boolBuscarCiudad = true;
	EDP3::FormCiudades ciudad;
	ciudad.ShowDialog();
	boolBuscarCiudad = false;
}
private: System::Void restauranteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolBuscarRest = true;
	restaurante.ShowDialog();
	boolBuscarRest = false;
	
}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormMenu menu;
	boolBuscarMenu = true;
	menu.ShowDialog();
	boolBuscarMenu = false;

}
};
}
