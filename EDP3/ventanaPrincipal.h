#pragma once

#include "FormPaises.h"
#include "FormCiudades.h"
#include "FormClientes.h"
#include "FormAdmin.h"
#include "Paises.h"
#include "Admins.h"
#include "Controller.h"

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ventanaPrincipal
	/// </summary>
	public ref class ventanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		//ArbolPais paises;
		//listaAdmins* ladmins = new listaAdmins();
		//arbolAdmins* admins = new arbolAdmins(5);
		ventanaPrincipal()
		{
			InitializeComponent();


		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ventanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ countryBtn;



	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insercionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultabusquedasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesSolicitudesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descuentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturacionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informacionDeLaEmpresaToolStripMenuItem;

	private: System::Windows::Forms::TabControl^ Cliente;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem1;
	private: System::Windows::Forms::Button^ cityBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem2;
	private: System::Windows::Forms::Button^ menuBtn;
	private: System::Windows::Forms::Button^ restBtn;

	private: System::Windows::Forms::Button^ adminBtn;

	private: System::Windows::Forms::Button^ clienteBtn;
	private: System::Windows::Forms::Button^ productBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ desarrolladoPorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nicoleParraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ binjieLiangToolStripMenuItem;




	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ventanaPrincipal::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->adminBtn = (gcnew System::Windows::Forms::Button());
			this->clienteBtn = (gcnew System::Windows::Forms::Button());
			this->productBtn = (gcnew System::Windows::Forms::Button());
			this->menuBtn = (gcnew System::Windows::Forms::Button());
			this->restBtn = (gcnew System::Windows::Forms::Button());
			this->cityBtn = (gcnew System::Windows::Forms::Button());
			this->countryBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insercionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultabusquedasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesSolicitudesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturacionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacionDeLaEmpresaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->desarrolladoPorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nicoleParraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binjieLiangToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Cliente = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->Cliente->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->adminBtn);
			this->tabPage1->Controls->Add(this->clienteBtn);
			this->tabPage1->Controls->Add(this->productBtn);
			this->tabPage1->Controls->Add(this->menuBtn);
			this->tabPage1->Controls->Add(this->restBtn);
			this->tabPage1->Controls->Add(this->cityBtn);
			this->tabPage1->Controls->Add(this->countryBtn);
			this->tabPage1->Controls->Add(this->menuStrip2);
			this->tabPage1->Location = System::Drawing::Point(8, 57);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1899, 1002);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dashboard";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// adminBtn
			// 
			this->adminBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminBtn.BackgroundImage")));
			this->adminBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->adminBtn->Location = System::Drawing::Point(1004, 505);
			this->adminBtn->Name = L"adminBtn";
			this->adminBtn->Size = System::Drawing::Size(358, 331);
			this->adminBtn->TabIndex = 9;
			this->adminBtn->UseVisualStyleBackColor = true;
			this->adminBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::adminBtn_Click);
			// 
			// clienteBtn
			// 
			this->clienteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clienteBtn.BackgroundImage")));
			this->clienteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->clienteBtn->Location = System::Drawing::Point(575, 505);
			this->clienteBtn->Name = L"clienteBtn";
			this->clienteBtn->Size = System::Drawing::Size(372, 331);
			this->clienteBtn->TabIndex = 8;
			this->clienteBtn->UseVisualStyleBackColor = true;
			this->clienteBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteBtn_Click);
			// 
			// productBtn
			// 
			this->productBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"productBtn.BackgroundImage")));
			this->productBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->productBtn->Location = System::Drawing::Point(122, 505);
			this->productBtn->Name = L"productBtn";
			this->productBtn->Size = System::Drawing::Size(400, 331);
			this->productBtn->TabIndex = 7;
			this->productBtn->UseVisualStyleBackColor = true;
			// 
			// menuBtn
			// 
			this->menuBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuBtn.BackgroundImage")));
			this->menuBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->menuBtn->Location = System::Drawing::Point(1415, 126);
			this->menuBtn->Name = L"menuBtn";
			this->menuBtn->Size = System::Drawing::Size(364, 324);
			this->menuBtn->TabIndex = 6;
			this->menuBtn->UseVisualStyleBackColor = true;
			// 
			// restBtn
			// 
			this->restBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restBtn.BackgroundImage")));
			this->restBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->restBtn->Location = System::Drawing::Point(1004, 126);
			this->restBtn->Name = L"restBtn";
			this->restBtn->Size = System::Drawing::Size(358, 324);
			this->restBtn->TabIndex = 5;
			this->restBtn->UseVisualStyleBackColor = true;
			// 
			// cityBtn
			// 
			this->cityBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cityBtn.BackgroundImage")));
			this->cityBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->cityBtn->Location = System::Drawing::Point(575, 126);
			this->cityBtn->Name = L"cityBtn";
			this->cityBtn->Size = System::Drawing::Size(381, 324);
			this->cityBtn->TabIndex = 4;
			this->cityBtn->UseVisualStyleBackColor = true;
			this->cityBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::cityBtn_Click);
			// 
			// countryBtn
			// 
			this->countryBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"countryBtn.BackgroundImage")));
			this->countryBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->countryBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->countryBtn->Location = System::Drawing::Point(122, 126);
			this->countryBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->countryBtn->Name = L"countryBtn";
			this->countryBtn->Size = System::Drawing::Size(400, 324);
			this->countryBtn->TabIndex = 0;
			this->countryBtn->UseVisualStyleBackColor = true;
			this->countryBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturacionToolStripMenuItem, this->acercaDeToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(3, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(1893, 40);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insercionToolStripMenuItem,
					this->modificacionToolStripMenuItem, this->consultabusquedasToolStripMenuItem, this->eliminacionToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(199, 36);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// insercionToolStripMenuItem
			// 
			this->insercionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisesToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->restauranteToolStripMenuItem, this->menuToolStripMenuItem, this->productoToolStripMenuItem,
					this->clienteToolStripMenuItem, this->adminToolStripMenuItem
			});
			this->insercionToolStripMenuItem->Name = L"insercionToolStripMenuItem";
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->insercionToolStripMenuItem->Text = L"Insercion";
			this->insercionToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::insercionToolStripMenuItem_Click);
			// 
			// paisesToolStripMenuItem
			// 
			this->paisesToolStripMenuItem->Name = L"paisesToolStripMenuItem";
			this->paisesToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->paisesToolStripMenuItem->Text = L"Paises";
			this->paisesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisesToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->productoToolStripMenuItem->Text = L"Producto";
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->adminToolStripMenuItem->Text = L"Admin";
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem1,
					this->ciudadToolStripMenuItem1, this->restauranteToolStripMenuItem1, this->menuToolStripMenuItem1, this->productoToolStripMenuItem1,
					this->clienteToolStripMenuItem1, this->adminToolStripMenuItem1
			});
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->modificacionToolStripMenuItem->Text = L"Modificacion";
			// 
			// paisToolStripMenuItem1
			// 
			this->paisToolStripMenuItem1->Name = L"paisToolStripMenuItem1";
			this->paisToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->paisToolStripMenuItem1->Text = L"Pais";
			this->paisToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisToolStripMenuItem1_Click);
			// 
			// ciudadToolStripMenuItem1
			// 
			this->ciudadToolStripMenuItem1->Name = L"ciudadToolStripMenuItem1";
			this->ciudadToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->ciudadToolStripMenuItem1->Text = L"Ciudad";
			// 
			// restauranteToolStripMenuItem1
			// 
			this->restauranteToolStripMenuItem1->Name = L"restauranteToolStripMenuItem1";
			this->restauranteToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->restauranteToolStripMenuItem1->Text = L"Restaurante";
			// 
			// menuToolStripMenuItem1
			// 
			this->menuToolStripMenuItem1->Name = L"menuToolStripMenuItem1";
			this->menuToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->menuToolStripMenuItem1->Text = L"Menu";
			// 
			// productoToolStripMenuItem1
			// 
			this->productoToolStripMenuItem1->Name = L"productoToolStripMenuItem1";
			this->productoToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->productoToolStripMenuItem1->Text = L"Producto";
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			// 
			// adminToolStripMenuItem1
			// 
			this->adminToolStripMenuItem1->Name = L"adminToolStripMenuItem1";
			this->adminToolStripMenuItem1->Size = System::Drawing::Size(272, 44);
			this->adminToolStripMenuItem1->Text = L"Admin";
			// 
			// consultabusquedasToolStripMenuItem
			// 
			this->consultabusquedasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem,
					this->ciudadToolStripMenuItem2, this->restauranteToolStripMenuItem2, this->menuToolStripMenuItem2, this->clienteToolStripMenuItem2,
					this->clienteToolStripMenuItem3, this->adminToolStripMenuItem2
			});
			this->consultabusquedasToolStripMenuItem->Name = L"consultabusquedasToolStripMenuItem";
			this->consultabusquedasToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->consultabusquedasToolStripMenuItem->Text = L"Consulta (busquedas)";
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(272, 44);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem2
			// 
			this->ciudadToolStripMenuItem2->Name = L"ciudadToolStripMenuItem2";
			this->ciudadToolStripMenuItem2->Size = System::Drawing::Size(272, 44);
			this->ciudadToolStripMenuItem2->Text = L"Ciudad";
			// 
			// restauranteToolStripMenuItem2
			// 
			this->restauranteToolStripMenuItem2->Name = L"restauranteToolStripMenuItem2";
			this->restauranteToolStripMenuItem2->Size = System::Drawing::Size(272, 44);
			this->restauranteToolStripMenuItem2->Text = L"Restaurante";
			// 
			// menuToolStripMenuItem2
			// 
			this->menuToolStripMenuItem2->Name = L"menuToolStripMenuItem2";
			this->menuToolStripMenuItem2->Size = System::Drawing::Size(272, 44);
			this->menuToolStripMenuItem2->Text = L"Menu";
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(272, 44);
			this->clienteToolStripMenuItem2->Text = L"Producto";
			// 
			// clienteToolStripMenuItem3
			// 
			this->clienteToolStripMenuItem3->Name = L"clienteToolStripMenuItem3";
			this->clienteToolStripMenuItem3->Size = System::Drawing::Size(272, 44);
			this->clienteToolStripMenuItem3->Text = L"Cliente";
			// 
			// adminToolStripMenuItem2
			// 
			this->adminToolStripMenuItem2->Name = L"adminToolStripMenuItem2";
			this->adminToolStripMenuItem2->Size = System::Drawing::Size(272, 44);
			this->adminToolStripMenuItem2->Text = L"Admin";
			// 
			// eliminacionToolStripMenuItem
			// 
			this->eliminacionToolStripMenuItem->Name = L"eliminacionToolStripMenuItem";
			this->eliminacionToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->eliminacionToolStripMenuItem->Text = L"Eliminacion";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesSolicitudesToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(127, 36);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reportesSolicitudesToolStripMenuItem
			// 
			this->reportesSolicitudesToolStripMenuItem->Name = L"reportesSolicitudesToolStripMenuItem";
			this->reportesSolicitudesToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->reportesSolicitudesToolStripMenuItem->Text = L"Reportes solicitudes";
			// 
			// facturacionToolStripMenuItem
			// 
			this->facturacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descuentosToolStripMenuItem,
					this->facturacionToolStripMenuItem1
			});
			this->facturacionToolStripMenuItem->Name = L"facturacionToolStripMenuItem";
			this->facturacionToolStripMenuItem->Size = System::Drawing::Size(155, 36);
			this->facturacionToolStripMenuItem->Text = L"Facturacion";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(271, 44);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// facturacionToolStripMenuItem1
			// 
			this->facturacionToolStripMenuItem1->Name = L"facturacionToolStripMenuItem1";
			this->facturacionToolStripMenuItem1->Size = System::Drawing::Size(271, 44);
			this->facturacionToolStripMenuItem1->Text = L"Facturacion";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->informacionDeLaEmpresaToolStripMenuItem,
					this->desarrolladoPorToolStripMenuItem, this->nicoleParraToolStripMenuItem, this->binjieLiangToolStripMenuItem
			});
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(138, 36);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// informacionDeLaEmpresaToolStripMenuItem
			// 
			this->informacionDeLaEmpresaToolStripMenuItem->Name = L"informacionDeLaEmpresaToolStripMenuItem";
			this->informacionDeLaEmpresaToolStripMenuItem->Size = System::Drawing::Size(432, 44);
			this->informacionDeLaEmpresaToolStripMenuItem->Text = L"Informacion de la empresa";
			// 
			// desarrolladoPorToolStripMenuItem
			// 
			this->desarrolladoPorToolStripMenuItem->Name = L"desarrolladoPorToolStripMenuItem";
			this->desarrolladoPorToolStripMenuItem->Size = System::Drawing::Size(432, 44);
			this->desarrolladoPorToolStripMenuItem->Text = L"Desarrollado por";
			// 
			// nicoleParraToolStripMenuItem
			// 
			this->nicoleParraToolStripMenuItem->Name = L"nicoleParraToolStripMenuItem";
			this->nicoleParraToolStripMenuItem->Size = System::Drawing::Size(432, 44);
			this->nicoleParraToolStripMenuItem->Text = L"Nicole Parra";
			// 
			// binjieLiangToolStripMenuItem
			// 
			this->binjieLiangToolStripMenuItem->Name = L"binjieLiangToolStripMenuItem";
			this->binjieLiangToolStripMenuItem->Size = System::Drawing::Size(432, 44);
			this->binjieLiangToolStripMenuItem->Text = L"Binjie Liang";
			// 
			// Cliente
			// 
			this->Cliente->Controls->Add(this->tabPage1);
			this->Cliente->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cliente->Location = System::Drawing::Point(3, 1);
			this->Cliente->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cliente->Name = L"Cliente";
			this->Cliente->SelectedIndex = 0;
			this->Cliente->Size = System::Drawing::Size(1915, 1067);
			this->Cliente->TabIndex = 2;
			// 
			// ventanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1050);
			this->Controls->Add(this->Cliente);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ventanaPrincipal";
			this->Text = L"ventanaPrincipal";
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->Cliente->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		EDP3::InsertPais pais;
		boolBuscarPais = true;
		boolModificarPais = true;
		boolInsertarPais = true;
		pais.ShowDialog();
	}
	private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void paisesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolInsertarPais = true;
	pais.ShowDialog();
}
private: System::Void paisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolBuscarPais = true;
	pais.ShowDialog();
}
private: System::Void paisToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolModificarPais = true;
	pais.ShowDialog();
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	ciudad.ShowDialog();
}
private: System::Void cityBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	ciudad.ShowDialog();
}
private: System::Void clienteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormClientes cliente;
	cliente.ShowDialog();
}
private: System::Void adminBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormAdmin admin;
	admin.ShowDialog();
}
private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormClientes cliente;
	cliente.ShowDialog();
}
};
}
