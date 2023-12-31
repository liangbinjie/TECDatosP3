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
#include "Productos.h"
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <fstream>

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
	private: System::Windows::Forms::Button^ buyBtn;
	protected:


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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ idpais;
	private: System::Windows::Forms::TextBox^ idciudad;
	private: System::Windows::Forms::TextBox^ idrest;
	private: System::Windows::Forms::TextBox^ idmenu;
	private: System::Windows::Forms::TextBox^ idproduct;
	private: System::Windows::Forms::TextBox^ productlist;






	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ searchBtn;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ cant;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ driveCheck;
	private: System::Windows::Forms::CheckBox^ eatCheck;
	private: System::Windows::Forms::CheckBox^ efectivoCheck;
	private: System::Windows::Forms::CheckBox^ cardCheck;
	private: System::Windows::Forms::Button^ payBtn;
	private: System::Windows::Forms::Button^ priceBtn;
	private: System::Windows::Forms::Button^ doneBtn;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ listaCompra;
	private: System::Windows::Forms::Label^ label11;



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
			this->buyBtn = (gcnew System::Windows::Forms::Button());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->idpais = (gcnew System::Windows::Forms::TextBox());
			this->idciudad = (gcnew System::Windows::Forms::TextBox());
			this->idrest = (gcnew System::Windows::Forms::TextBox());
			this->idmenu = (gcnew System::Windows::Forms::TextBox());
			this->idproduct = (gcnew System::Windows::Forms::TextBox());
			this->productlist = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->doneBtn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listaCompra = (gcnew System::Windows::Forms::TextBox());
			this->priceBtn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->driveCheck = (gcnew System::Windows::Forms::CheckBox());
			this->eatCheck = (gcnew System::Windows::Forms::CheckBox());
			this->efectivoCheck = (gcnew System::Windows::Forms::CheckBox());
			this->cardCheck = (gcnew System::Windows::Forms::CheckBox());
			this->payBtn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cant = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buyBtn
			// 
			this->buyBtn->Location = System::Drawing::Point(486, 843);
			this->buyBtn->Margin = System::Windows::Forms::Padding(2);
			this->buyBtn->Name = L"buyBtn";
			this->buyBtn->Size = System::Drawing::Size(217, 78);
			this->buyBtn->TabIndex = 1;
			this->buyBtn->Text = L"Agregar al carrito";
			this->buyBtn->UseVisualStyleBackColor = true;
			this->buyBtn->Click += gcnew System::EventHandler(this, &ViewCliente::buyBtn_Click);
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1634, 40);
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
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(137, 36);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::consultasToolStripMenuItem_Click);
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			this->restauranteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::restauranteToolStripMenuItem_Click);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::menuToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::productoToolStripMenuItem_Click);
			// 
			// comprasToolStripMenuItem
			// 
			this->comprasToolStripMenuItem->Name = L"comprasToolStripMenuItem";
			this->comprasToolStripMenuItem->Size = System::Drawing::Size(128, 36);
			this->comprasToolStripMenuItem->Text = L"Compras";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(138, 36);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// contactosToolStripMenuItem
			// 
			this->contactosToolStripMenuItem->Name = L"contactosToolStripMenuItem";
			this->contactosToolStripMenuItem->Size = System::Drawing::Size(140, 36);
			this->contactosToolStripMenuItem->Text = L"Contactos";
			this->contactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ViewCliente::contactosToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 162);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id pais";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 275);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id Ciudad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(98, 394);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Id Rest";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(98, 506);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Id Menu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(98, 843);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Id producto";
			// 
			// idpais
			// 
			this->idpais->Location = System::Drawing::Point(103, 197);
			this->idpais->Margin = System::Windows::Forms::Padding(2);
			this->idpais->Name = L"idpais";
			this->idpais->Size = System::Drawing::Size(141, 35);
			this->idpais->TabIndex = 8;
			// 
			// idciudad
			// 
			this->idciudad->Location = System::Drawing::Point(103, 302);
			this->idciudad->Margin = System::Windows::Forms::Padding(2);
			this->idciudad->Name = L"idciudad";
			this->idciudad->Size = System::Drawing::Size(141, 35);
			this->idciudad->TabIndex = 9;
			// 
			// idrest
			// 
			this->idrest->Location = System::Drawing::Point(103, 430);
			this->idrest->Margin = System::Windows::Forms::Padding(2);
			this->idrest->Name = L"idrest";
			this->idrest->Size = System::Drawing::Size(141, 35);
			this->idrest->TabIndex = 11;
			// 
			// idmenu
			// 
			this->idmenu->Location = System::Drawing::Point(103, 543);
			this->idmenu->Margin = System::Windows::Forms::Padding(2);
			this->idmenu->Name = L"idmenu";
			this->idmenu->Size = System::Drawing::Size(141, 35);
			this->idmenu->TabIndex = 12;
			// 
			// idproduct
			// 
			this->idproduct->Location = System::Drawing::Point(103, 879);
			this->idproduct->Margin = System::Windows::Forms::Padding(2);
			this->idproduct->Name = L"idproduct";
			this->idproduct->Size = System::Drawing::Size(141, 35);
			this->idproduct->TabIndex = 13;
			// 
			// productlist
			// 
			this->productlist->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productlist->Location = System::Drawing::Point(337, 239);
			this->productlist->Margin = System::Windows::Forms::Padding(2);
			this->productlist->Multiline = true;
			this->productlist->Name = L"productlist";
			this->productlist->ReadOnly = true;
			this->productlist->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->productlist->Size = System::Drawing::Size(366, 339);
			this->productlist->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(337, 197);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Lista productos";
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(259, 635);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(202, 67);
			this->searchBtn->TabIndex = 16;
			this->searchBtn->Text = L"Ver productos";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &ViewCliente::searchBtn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->doneBtn);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->listaCompra);
			this->panel1->Controls->Add(this->priceBtn);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->driveCheck);
			this->panel1->Controls->Add(this->eatCheck);
			this->panel1->Controls->Add(this->efectivoCheck);
			this->panel1->Controls->Add(this->cardCheck);
			this->panel1->Controls->Add(this->payBtn);
			this->panel1->Location = System::Drawing::Point(769, 43);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(866, 982);
			this->panel1->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(37, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 24);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Carrito de compra";
			// 
			// doneBtn
			// 
			this->doneBtn->Location = System::Drawing::Point(321, 387);
			this->doneBtn->Name = L"doneBtn";
			this->doneBtn->Size = System::Drawing::Size(205, 69);
			this->doneBtn->TabIndex = 10;
			this->doneBtn->Text = L"Carrito listo";
			this->doneBtn->UseVisualStyleBackColor = true;
			this->doneBtn->Click += gcnew System::EventHandler(this, &ViewCliente::doneBtn_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 479);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(850, 24);
			this->label10->TabIndex = 9;
			this->label10->Text = L"______________________________________________________________________";
			// 
			// listaCompra
			// 
			this->listaCompra->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaCompra->Location = System::Drawing::Point(26, 75);
			this->listaCompra->Multiline = true;
			this->listaCompra->Name = L"listaCompra";
			this->listaCompra->ReadOnly = true;
			this->listaCompra->Size = System::Drawing::Size(814, 286);
			this->listaCompra->TabIndex = 8;
			// 
			// priceBtn
			// 
			this->priceBtn->Location = System::Drawing::Point(249, 859);
			this->priceBtn->Name = L"priceBtn";
			this->priceBtn->Size = System::Drawing::Size(150, 77);
			this->priceBtn->TabIndex = 7;
			this->priceBtn->Text = L"Ver precio";
			this->priceBtn->UseVisualStyleBackColor = true;
			this->priceBtn->Click += gcnew System::EventHandler(this, &ViewCliente::priceBtn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 795);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(850, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"______________________________________________________________________";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 632);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(850, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"______________________________________________________________________";
			// 
			// driveCheck
			// 
			this->driveCheck->AutoSize = true;
			this->driveCheck->Location = System::Drawing::Point(121, 596);
			this->driveCheck->Name = L"driveCheck";
			this->driveCheck->Size = System::Drawing::Size(162, 28);
			this->driveCheck->TabIndex = 4;
			this->driveCheck->Text = L"Drive Thru";
			this->driveCheck->UseVisualStyleBackColor = true;
			// 
			// eatCheck
			// 
			this->eatCheck->AutoSize = true;
			this->eatCheck->Location = System::Drawing::Point(121, 539);
			this->eatCheck->Name = L"eatCheck";
			this->eatCheck->Size = System::Drawing::Size(162, 28);
			this->eatCheck->TabIndex = 3;
			this->eatCheck->Text = L"Comer aqui";
			this->eatCheck->UseVisualStyleBackColor = true;
			// 
			// efectivoCheck
			// 
			this->efectivoCheck->AutoSize = true;
			this->efectivoCheck->Location = System::Drawing::Point(121, 755);
			this->efectivoCheck->Name = L"efectivoCheck";
			this->efectivoCheck->Size = System::Drawing::Size(138, 28);
			this->efectivoCheck->TabIndex = 2;
			this->efectivoCheck->Text = L"Efectivo";
			this->efectivoCheck->UseVisualStyleBackColor = true;
			// 
			// cardCheck
			// 
			this->cardCheck->AutoSize = true;
			this->cardCheck->Location = System::Drawing::Point(121, 706);
			this->cardCheck->Name = L"cardCheck";
			this->cardCheck->Size = System::Drawing::Size(126, 28);
			this->cardCheck->TabIndex = 1;
			this->cardCheck->Text = L"Tarjeta";
			this->cardCheck->UseVisualStyleBackColor = true;
			// 
			// payBtn
			// 
			this->payBtn->Location = System::Drawing::Point(479, 859);
			this->payBtn->Name = L"payBtn";
			this->payBtn->Size = System::Drawing::Size(154, 77);
			this->payBtn->TabIndex = 0;
			this->payBtn->Text = L"Pagar";
			this->payBtn->UseVisualStyleBackColor = true;
			this->payBtn->Click += gcnew System::EventHandler(this, &ViewCliente::payBtn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(315, 843);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 24);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Cantidad";
			// 
			// cant
			// 
			this->cant->Location = System::Drawing::Point(319, 879);
			this->cant->Name = L"cant";
			this->cant->Size = System::Drawing::Size(100, 35);
			this->cant->TabIndex = 19;
			// 
			// ViewCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1634, 1024);
			this->Controls->Add(this->cant);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->productlist);
			this->Controls->Add(this->idproduct);
			this->Controls->Add(this->idmenu);
			this->Controls->Add(this->idrest);
			this->Controls->Add(this->idciudad);
			this->Controls->Add(this->idpais);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buyBtn);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ViewCliente";
			this->Text = L"ViewCliente";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->idpais->Text);
	int idC = Convert::ToInt32(this->idciudad->Text);
	int idR = Convert::ToInt32(this->idrest->Text);
	int idM = Convert::ToInt32(this->idmenu->Text);

	if (menu.existe(idM, idP, idC, idR)) {
		this->idpais->Enabled = false;
		this->idciudad->Enabled = false;
		this->idrest->Enabled = false;
	
		this->productlist->Text = gcnew String(productos.verProductos(idP, idC, idR, idM).c_str());
	}
	else {
		MessageBox::Show("Este Menu no existe");
	}

}
private: System::Void buyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->idpais->Text);
	int idC = Convert::ToInt32(this->idciudad->Text);
	int idR = Convert::ToInt32(this->idrest->Text);
	int idM = Convert::ToInt32(this->idmenu->Text);
	int id = Convert::ToInt32(this->idproduct->Text);

	
	if (productos.existeProducto(idP, idC, idR, idM, id)) {
		int cantidad = Convert::ToInt32(this->cant->Text);
		NodoProducto* aux = productos.buscarProducto(idP, idC, idR, idM, id);
		int precio = cantidad * aux->precio;
		this->listaCompra->Text += cant->Text;
		this->listaCompra->Text += "x";
		this->listaCompra->Text += gcnew String(aux->nombre.c_str());
		this->listaCompra->Text += "=";
		this->listaCompra->Text += precio;
		this->listaCompra->Text += "\r\n";
		productos.aumentarCompra(idP, idC, idR, idM, id, paises, ciudades, restaurantes, menu);
	}
	else {
		MessageBox::Show("Este producto no existe");
	}

}
private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto form;
	boolBuscarProducto = true;
	form.ShowDialog();
	boolBuscarProducto = false;
}

double total(const std::string& input) {
	std::istringstream iss(input);
	std::string line;
	double totalSum = 0;

	// Parse the string line by line
	while (std::getline(iss, line)) {
		size_t pos = line.find('=');
		if (pos != std::string::npos) {
			std::string numberString = line.substr(pos + 1);
			int number;
			std::istringstream(numberString) >> number;
			totalSum += number;
		}
	}

	return totalSum;
}

private: System::Void doneBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->idpais->Text);
	int idC = Convert::ToInt32(this->idciudad->Text);
	int idR = Convert::ToInt32(this->idrest->Text);
	int idM = Convert::ToInt32(this->idmenu->Text);
	string compra = msclr::interop::marshal_as<std::string>(this->listaCompra->Text);
	double subtotal = total(compra);
	string factura_id = to_string(cedulaCliente) + to_string(compras.cont());
	compras.agregar(factura_id, idP, idC, idR, idM, compra, cedulaCliente, subtotal);
	//facturas.reporteMasAlto();
	//facturas.reporteMenosAlto();
	this->doneBtn->Enabled = false;
	this->buyBtn->Enabled = false;
	
	
}
private: System::Void priceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	string compra = msclr::interop::marshal_as<std::string>(this->listaCompra->Text);
	double subtotal = total(compra);
	if (driveCheck->Checked) {
		subtotal *= 0.97;
	}

	if (cardCheck->Checked) {
		subtotal *= 0.97;
	}
	else if (efectivoCheck->Checked) {
		subtotal *= 0.99;
	}

	MessageBox::Show(subtotal.ToString());
}
private: System::Void payBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	string factura_id = to_string(cedulaCliente) + to_string(compras.cont()-1);
	string compra = msclr::interop::marshal_as<std::string>(this->listaCompra->Text);
	double subtotal = total(compra);
	ofstream archivo("facturas/" +factura_id + ".txt");
	archivo << "Cliente: " << cedulaCliente << endl;
	if (driveCheck->Checked) {
		subtotal *= 0.97;
		archivo << "Para llevar" << endl;
	}
	else {
		archivo << "Para comer aqui" << endl;
	}

	if (cardCheck->Checked) {
		subtotal *= 0.97;
		archivo << "Pago con tarjeta" << endl;
	}
	else if (efectivoCheck->Checked) {
		subtotal *= 0.99;
		archivo << "Pago con efectivo" << endl;
	}
	archivo << compra << endl;
	archivo << "Total: " << subtotal;
	archivo.close();
	facturas.agregar(factura_id, cedulaCliente, compra, subtotal);
	MessageBox::Show("Factura Generada");
	this->Close();

}
};
}
