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
	private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ restauramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem4;






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
			this->consultabusquedasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->adminBtn = (gcnew System::Windows::Forms::Button());
			this->clienteBtn = (gcnew System::Windows::Forms::Button());
			this->productBtn = (gcnew System::Windows::Forms::Button());
			this->menuBtn = (gcnew System::Windows::Forms::Button());
			this->restBtn = (gcnew System::Windows::Forms::Button());
			this->cityBtn = (gcnew System::Windows::Forms::Button());
			this->countryBtn = (gcnew System::Windows::Forms::Button());
			this->Cliente = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->Cliente->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->menuStrip2);
			this->tabPage1->Location = System::Drawing::Point(4, 42);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1414, 52);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dashboard";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturacionToolStripMenuItem, this->acercaDeToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(2, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1410, 33);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insercionToolStripMenuItem,
					this->consultabusquedasToolStripMenuItem, this->modificacionToolStripMenuItem, this->eliminacionToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(148, 29);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::mantenimientoToolStripMenuItem_Click);
			// 
			// insercionToolStripMenuItem
			// 
			this->insercionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisesToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->restauranteToolStripMenuItem, this->menuToolStripMenuItem, this->productoToolStripMenuItem,
					this->clienteToolStripMenuItem, this->adminToolStripMenuItem
			});
			this->insercionToolStripMenuItem->Name = L"insercionToolStripMenuItem";
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(285, 34);
			this->insercionToolStripMenuItem->Text = L"Insercion";
			this->insercionToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::insercionToolStripMenuItem_Click);
			// 
			// paisesToolStripMenuItem
			// 
			this->paisesToolStripMenuItem->Name = L"paisesToolStripMenuItem";
			this->paisesToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->paisesToolStripMenuItem->Text = L"Paises";
			this->paisesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisesToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			this->restauranteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::restauranteToolStripMenuItem_Click);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::menuToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::productoToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->adminToolStripMenuItem->Text = L"Admin";
			this->adminToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::adminToolStripMenuItem_Click);
			// 
			// consultabusquedasToolStripMenuItem
			// 
			this->consultabusquedasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem,
					this->ciudadToolStripMenuItem2, this->restauranteToolStripMenuItem2, this->menuToolStripMenuItem2, this->clienteToolStripMenuItem2,
					this->clienteToolStripMenuItem3, this->adminToolStripMenuItem2
			});
			this->consultabusquedasToolStripMenuItem->Name = L"consultabusquedasToolStripMenuItem";
			this->consultabusquedasToolStripMenuItem->Size = System::Drawing::Size(285, 34);
			this->consultabusquedasToolStripMenuItem->Text = L"Consulta (busquedas)";
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem2
			// 
			this->ciudadToolStripMenuItem2->Name = L"ciudadToolStripMenuItem2";
			this->ciudadToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->ciudadToolStripMenuItem2->Text = L"Ciudad";
			this->ciudadToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::ciudadToolStripMenuItem2_Click);
			// 
			// restauranteToolStripMenuItem2
			// 
			this->restauranteToolStripMenuItem2->Name = L"restauranteToolStripMenuItem2";
			this->restauranteToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->restauranteToolStripMenuItem2->Text = L"Restaurante";
			this->restauranteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::restauranteToolStripMenuItem2_Click);
			// 
			// menuToolStripMenuItem2
			// 
			this->menuToolStripMenuItem2->Name = L"menuToolStripMenuItem2";
			this->menuToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->menuToolStripMenuItem2->Text = L"Menu";
			this->menuToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::menuToolStripMenuItem2_Click);
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->clienteToolStripMenuItem2->Text = L"Producto";
			this->clienteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem2_Click);
			// 
			// clienteToolStripMenuItem3
			// 
			this->clienteToolStripMenuItem3->Name = L"clienteToolStripMenuItem3";
			this->clienteToolStripMenuItem3->Size = System::Drawing::Size(206, 34);
			this->clienteToolStripMenuItem3->Text = L"Cliente";
			this->clienteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem3_Click);
			// 
			// adminToolStripMenuItem2
			// 
			this->adminToolStripMenuItem2->Name = L"adminToolStripMenuItem2";
			this->adminToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->adminToolStripMenuItem2->Text = L"Admin";
			this->adminToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::adminToolStripMenuItem2_Click);
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paisToolStripMenuItem1,
					this->ciudadToolStripMenuItem1, this->restauranteToolStripMenuItem1, this->menuToolStripMenuItem1, this->productoToolStripMenuItem1,
					this->clienteToolStripMenuItem1, this->adminToolStripMenuItem1
			});
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(285, 34);
			this->modificacionToolStripMenuItem->Text = L"Modificacion";
			// 
			// paisToolStripMenuItem1
			// 
			this->paisToolStripMenuItem1->Name = L"paisToolStripMenuItem1";
			this->paisToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->paisToolStripMenuItem1->Text = L"Pais";
			this->paisToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisToolStripMenuItem1_Click);
			// 
			// ciudadToolStripMenuItem1
			// 
			this->ciudadToolStripMenuItem1->Name = L"ciudadToolStripMenuItem1";
			this->ciudadToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->ciudadToolStripMenuItem1->Text = L"Ciudad";
			this->ciudadToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::ciudadToolStripMenuItem1_Click);
			// 
			// restauranteToolStripMenuItem1
			// 
			this->restauranteToolStripMenuItem1->Name = L"restauranteToolStripMenuItem1";
			this->restauranteToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->restauranteToolStripMenuItem1->Text = L"Restaurante";
			this->restauranteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::restauranteToolStripMenuItem1_Click);
			// 
			// menuToolStripMenuItem1
			// 
			this->menuToolStripMenuItem1->Name = L"menuToolStripMenuItem1";
			this->menuToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->menuToolStripMenuItem1->Text = L"Menu";
			this->menuToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::menuToolStripMenuItem1_Click);
			// 
			// productoToolStripMenuItem1
			// 
			this->productoToolStripMenuItem1->Name = L"productoToolStripMenuItem1";
			this->productoToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->productoToolStripMenuItem1->Text = L"Producto";
			this->productoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::productoToolStripMenuItem1_Click);
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			this->clienteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem1_Click);
			// 
			// adminToolStripMenuItem1
			// 
			this->adminToolStripMenuItem1->Name = L"adminToolStripMenuItem1";
			this->adminToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->adminToolStripMenuItem1->Text = L"Admin";
			this->adminToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::adminToolStripMenuItem1_Click);
			// 
			// eliminacionToolStripMenuItem
			// 
			this->eliminacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->paisToolStripMenuItem2,
					this->ciudadToolStripMenuItem3, this->restauramToolStripMenuItem, this->menuToolStripMenuItem3, this->productoToolStripMenuItem2,
					this->clienteToolStripMenuItem4
			});
			this->eliminacionToolStripMenuItem->Name = L"eliminacionToolStripMenuItem";
			this->eliminacionToolStripMenuItem->Size = System::Drawing::Size(285, 34);
			this->eliminacionToolStripMenuItem->Text = L"Eliminacion";
			// 
			// paisToolStripMenuItem2
			// 
			this->paisToolStripMenuItem2->Name = L"paisToolStripMenuItem2";
			this->paisToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->paisToolStripMenuItem2->Text = L"Pais";
			this->paisToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisToolStripMenuItem2_Click);
			// 
			// ciudadToolStripMenuItem3
			// 
			this->ciudadToolStripMenuItem3->Name = L"ciudadToolStripMenuItem3";
			this->ciudadToolStripMenuItem3->Size = System::Drawing::Size(206, 34);
			this->ciudadToolStripMenuItem3->Text = L"Ciudad";
			this->ciudadToolStripMenuItem3->Click += gcnew System::EventHandler(this, &ventanaPrincipal::ciudadToolStripMenuItem3_Click);
			// 
			// restauramToolStripMenuItem
			// 
			this->restauramToolStripMenuItem->Name = L"restauramToolStripMenuItem";
			this->restauramToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->restauramToolStripMenuItem->Text = L"Restaurante";
			this->restauramToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::restauramToolStripMenuItem_Click);
			// 
			// menuToolStripMenuItem3
			// 
			this->menuToolStripMenuItem3->Name = L"menuToolStripMenuItem3";
			this->menuToolStripMenuItem3->Size = System::Drawing::Size(206, 34);
			this->menuToolStripMenuItem3->Text = L"Menu";
			this->menuToolStripMenuItem3->Click += gcnew System::EventHandler(this, &ventanaPrincipal::menuToolStripMenuItem3_Click);
			// 
			// productoToolStripMenuItem2
			// 
			this->productoToolStripMenuItem2->Name = L"productoToolStripMenuItem2";
			this->productoToolStripMenuItem2->Size = System::Drawing::Size(206, 34);
			this->productoToolStripMenuItem2->Text = L"Producto";
			this->productoToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ventanaPrincipal::productoToolStripMenuItem2_Click);
			// 
			// clienteToolStripMenuItem4
			// 
			this->clienteToolStripMenuItem4->Name = L"clienteToolStripMenuItem4";
			this->clienteToolStripMenuItem4->Size = System::Drawing::Size(206, 34);
			this->clienteToolStripMenuItem4->Text = L"Cliente";
			this->clienteToolStripMenuItem4->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteToolStripMenuItem4_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reportesSolicitudesToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reportesSolicitudesToolStripMenuItem
			// 
			this->reportesSolicitudesToolStripMenuItem->Name = L"reportesSolicitudesToolStripMenuItem";
			this->reportesSolicitudesToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->reportesSolicitudesToolStripMenuItem->Text = L"Reportes solicitudes";
			// 
			// facturacionToolStripMenuItem
			// 
			this->facturacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->descuentosToolStripMenuItem,
					this->facturacionToolStripMenuItem1
			});
			this->facturacionToolStripMenuItem->Name = L"facturacionToolStripMenuItem";
			this->facturacionToolStripMenuItem->Size = System::Drawing::Size(117, 29);
			this->facturacionToolStripMenuItem->Text = L"Facturacion";
			// 
			// descuentosToolStripMenuItem
			// 
			this->descuentosToolStripMenuItem->Name = L"descuentosToolStripMenuItem";
			this->descuentosToolStripMenuItem->Size = System::Drawing::Size(206, 34);
			this->descuentosToolStripMenuItem->Text = L"Descuentos";
			// 
			// facturacionToolStripMenuItem1
			// 
			this->facturacionToolStripMenuItem1->Name = L"facturacionToolStripMenuItem1";
			this->facturacionToolStripMenuItem1->Size = System::Drawing::Size(206, 34);
			this->facturacionToolStripMenuItem1->Text = L"Facturacion";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->informacionDeLaEmpresaToolStripMenuItem,
					this->desarrolladoPorToolStripMenuItem, this->nicoleParraToolStripMenuItem, this->binjieLiangToolStripMenuItem
			});
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(105, 29);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// informacionDeLaEmpresaToolStripMenuItem
			// 
			this->informacionDeLaEmpresaToolStripMenuItem->Name = L"informacionDeLaEmpresaToolStripMenuItem";
			this->informacionDeLaEmpresaToolStripMenuItem->Size = System::Drawing::Size(326, 34);
			this->informacionDeLaEmpresaToolStripMenuItem->Text = L"Informacion de la empresa";
			// 
			// desarrolladoPorToolStripMenuItem
			// 
			this->desarrolladoPorToolStripMenuItem->Name = L"desarrolladoPorToolStripMenuItem";
			this->desarrolladoPorToolStripMenuItem->Size = System::Drawing::Size(326, 34);
			this->desarrolladoPorToolStripMenuItem->Text = L"Desarrollado por";
			// 
			// nicoleParraToolStripMenuItem
			// 
			this->nicoleParraToolStripMenuItem->Name = L"nicoleParraToolStripMenuItem";
			this->nicoleParraToolStripMenuItem->Size = System::Drawing::Size(326, 34);
			this->nicoleParraToolStripMenuItem->Text = L"Nicole Parra";
			// 
			// binjieLiangToolStripMenuItem
			// 
			this->binjieLiangToolStripMenuItem->Name = L"binjieLiangToolStripMenuItem";
			this->binjieLiangToolStripMenuItem->Size = System::Drawing::Size(326, 34);
			this->binjieLiangToolStripMenuItem->Text = L"Binjie Liang";
			// 
			// adminBtn
			// 
			this->adminBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminBtn.BackgroundImage")));
			this->adminBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->adminBtn->Location = System::Drawing::Point(982, 476);
			this->adminBtn->Margin = System::Windows::Forms::Padding(2);
			this->adminBtn->Name = L"adminBtn";
			this->adminBtn->Size = System::Drawing::Size(268, 276);
			this->adminBtn->TabIndex = 9;
			this->adminBtn->UseVisualStyleBackColor = true;
			this->adminBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::adminBtn_Click);
			// 
			// clienteBtn
			// 
			this->clienteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clienteBtn.BackgroundImage")));
			this->clienteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->clienteBtn->Location = System::Drawing::Point(612, 476);
			this->clienteBtn->Margin = System::Windows::Forms::Padding(2);
			this->clienteBtn->Name = L"clienteBtn";
			this->clienteBtn->Size = System::Drawing::Size(279, 276);
			this->clienteBtn->TabIndex = 8;
			this->clienteBtn->UseVisualStyleBackColor = true;
			this->clienteBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::clienteBtn_Click);
			// 
			// productBtn
			// 
			this->productBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"productBtn.BackgroundImage")));
			this->productBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->productBtn->Location = System::Drawing::Point(223, 476);
			this->productBtn->Margin = System::Windows::Forms::Padding(2);
			this->productBtn->Name = L"productBtn";
			this->productBtn->Size = System::Drawing::Size(300, 276);
			this->productBtn->TabIndex = 7;
			this->productBtn->UseVisualStyleBackColor = true;
			this->productBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::productBtn_Click);
			// 
			// menuBtn
			// 
			this->menuBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuBtn.BackgroundImage")));
			this->menuBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->menuBtn->Location = System::Drawing::Point(1122, 145);
			this->menuBtn->Margin = System::Windows::Forms::Padding(2);
			this->menuBtn->Name = L"menuBtn";
			this->menuBtn->Size = System::Drawing::Size(273, 270);
			this->menuBtn->TabIndex = 6;
			this->menuBtn->UseVisualStyleBackColor = true;
			this->menuBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::menuBtn_Click);
			// 
			// restBtn
			// 
			this->restBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"restBtn.BackgroundImage")));
			this->restBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->restBtn->Location = System::Drawing::Point(782, 139);
			this->restBtn->Margin = System::Windows::Forms::Padding(2);
			this->restBtn->Name = L"restBtn";
			this->restBtn->Size = System::Drawing::Size(268, 270);
			this->restBtn->TabIndex = 5;
			this->restBtn->UseVisualStyleBackColor = true;
			this->restBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::restBtn_Click);
			// 
			// cityBtn
			// 
			this->cityBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cityBtn.BackgroundImage")));
			this->cityBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->cityBtn->Location = System::Drawing::Point(416, 139);
			this->cityBtn->Margin = System::Windows::Forms::Padding(2);
			this->cityBtn->Name = L"cityBtn";
			this->cityBtn->Size = System::Drawing::Size(286, 270);
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
			this->countryBtn->Location = System::Drawing::Point(29, 139);
			this->countryBtn->Margin = System::Windows::Forms::Padding(2);
			this->countryBtn->Name = L"countryBtn";
			this->countryBtn->Size = System::Drawing::Size(300, 270);
			this->countryBtn->TabIndex = 0;
			this->countryBtn->UseVisualStyleBackColor = true;
			this->countryBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// Cliente
			// 
			this->Cliente->Controls->Add(this->tabPage1);
			this->Cliente->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cliente->Location = System::Drawing::Point(9, 11);
			this->Cliente->Margin = System::Windows::Forms::Padding(2);
			this->Cliente->Name = L"Cliente";
			this->Cliente->SelectedIndex = 0;
			this->Cliente->Size = System::Drawing::Size(1422, 98);
			this->Cliente->TabIndex = 2;
			// 
			// ventanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 875);
			this->Controls->Add(this->adminBtn);
			this->Controls->Add(this->Cliente);
			this->Controls->Add(this->clienteBtn);
			this->Controls->Add(this->cityBtn);
			this->Controls->Add(this->productBtn);
			this->Controls->Add(this->countryBtn);
			this->Controls->Add(this->menuBtn);
			this->Controls->Add(this->restBtn);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(1442, 853);
			this->Name = L"ventanaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
		boolEliminarPais = true;
		pais.ShowDialog();
		boolBuscarPais = false;
		boolModificarPais = false;
		boolInsertarPais = false;
		boolEliminarPais = false;
	}
	private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void paisesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolInsertarPais = true;
	pais.ShowDialog();
	boolInsertarPais = false;
}
private: System::Void paisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolBuscarPais = true;
	pais.ShowDialog();
	boolBuscarPais = false;
}
private: System::Void paisToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	boolModificarPais = true;
	EDP3::InsertPais pais;
	//boolModificarPais = true;
	pais.ShowDialog();
	boolModificarPais = false;
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	boolInsertarCiudad = true;
	ciudad.ShowDialog();
	boolInsertarCiudad = false;
}
private: System::Void cityBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	boolBuscarCiudad = true;
	boolModificarCiudad = true;
	boolInsertarCiudad = true;
	boolEliminarCiudad = true;
	ciudad.ShowDialog();
	boolBuscarCiudad = false;
	boolModificarCiudad = false;
	boolInsertarCiudad = false;
	boolEliminarCiudad = false;
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
	boolInsertarCliente = true;
	cliente.ShowDialog();
}
private: System::Void ciudadToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	boolModificarCiudad = true;
	ciudad.ShowDialog();
	boolModificarCiudad = false;
}
private: System::Void clienteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormClientes cliente;
	boolModificarCliente = true;
	cliente.ShowDialog();
}
private: System::Void adminToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormAdmin admin;
	boolModificarAdmin = true;
	admin.ShowDialog();
}
private: System::Void ciudadToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	boolBuscarCiudad = true;
	ciudad.ShowDialog();
	boolBuscarCiudad = false;
}
private: System::Void clienteToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormClientes cliente;
	boolBuscarCliente = true;
	cliente.ShowDialog();
}
private: System::Void adminToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormAdmin admin;
	boolBuscarAdmin = true;
	admin.ShowDialog();
}
private: System::Void paisToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolEliminarPais = true;
	pais.ShowDialog();
	boolEliminarPais = false;
}
private: System::Void ciudadToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormCiudades ciudad;
	boolEliminarCiudad = true;
	ciudad.ShowDialog();
	boolEliminarCiudad = false;
}
private: System::Void clienteToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormClientes cliente;
	boolEliminarCliente = true;
	cliente.ShowDialog();
}
private: System::Void adminToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormAdmin admin;
	boolInsertarAdmin = true;
	admin.ShowDialog();
}
private: System::Void restauranteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolInsertarRest = true;
	restaurante.ShowDialog();
	boolInsertarRest = false;

}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void restBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolBuscarRest = true;
	boolModificarRest = true;
	boolInsertarRest = true;
	boolEliminarRest = true;
	restaurante.ShowDialog();
	boolBuscarRest = false;
	boolModificarRest = false;
	boolInsertarRest = false;
	boolEliminarRest = false;

}
private: System::Void menuBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormMenu formMenu;
	boolBuscarMenu = true;
	boolModificarMenu = true;
	boolInsertarMenu = true;
	boolEliminarMenu = true;
	formMenu.ShowDialog();
	boolBuscarMenu = false;
	boolModificarMenu = false;
	boolInsertarMenu = false;
	boolEliminarMenu = false;

}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//boolBuscarMenu = true;
	boolInsertarMenu = true;
	//boolModificarMenu = true;
	//boolEliminarMenu = true;
	EDP3::FormMenu menu;
	menu.ShowDialog();
	boolInsertarMenu = false;
	//menu.ShowDialog();
}
private: System::Void menuToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormMenu menu;
	boolModificarMenu = true;
	menu.ShowDialog();
	boolModificarMenu = false;

}
private: System::Void restauranteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolBuscarRest = true;
	restaurante.ShowDialog();
	boolBuscarRest = false;

}
private: System::Void menuToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormMenu menu;
	boolBuscarMenu = true;
	menu.ShowDialog();
	boolBuscarMenu = false;

}
private: System::Void menuToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormMenu menu;
	boolEliminarMenu = true;
	menu.ShowDialog();
	boolEliminarMenu = false;
}
private: System::Void restauranteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolModificarRest = true;
	restaurante.ShowDialog();
	boolModificarRest = false;
}
private: System::Void productBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto form;
	boolBuscarProducto = true;
	boolModificarProducto = true;
	boolInsertarProducto = true;
	boolEliminarProducto = true;
	form.ShowDialog();
	boolBuscarProducto = false;
	boolModificarProducto = false;
	boolInsertarProducto = false;
	boolEliminarProducto = false;

}
private: System::Void restauramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormRestaurante restaurante;
	boolEliminarRest = true;
	restaurante.ShowDialog();
	boolEliminarRest = false;

}
private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto producto;
	boolInsertarProducto = true;
	producto.ShowDialog();
	boolInsertarProducto = false;
}
private: System::Void clienteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto producto;
	boolBuscarProducto = true;
	producto.ShowDialog();
	boolBuscarProducto = false;
}
private: System::Void productoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto producto;
	boolModificarProducto = true;
	producto.ShowDialog();
	boolModificarProducto = false;

}
private: System::Void productoToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::FormProducto producto;
	boolEliminarProducto = true;
	producto.ShowDialog();
	boolEliminarProducto = false;

}
};
}
