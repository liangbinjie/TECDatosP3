#pragma once

#include "InsertPais.h"
#include "Paises.h"
#include "Admins.h"
#include "Controller.h"

ArbolPais paises;
ArbolCiudad ciudades;
listaAdmins administradores;
listaAdmins clientes;

bool boolInsertarPais = false;

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
			paises.cargarPais();
			ciudades.cargarCiudades(paises);
			administradores.cargarAdmins();
			clientes.cargarClientes();
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
	private: System::Windows::Forms::TabPage^ tabPage2;
	protected:
	private: System::Windows::Forms::CheckBox^ clienteCheck;
	private: System::Windows::Forms::CheckBox^ adminCheck;
	private: System::Windows::Forms::TextBox^ idEntry;
	private: System::Windows::Forms::Label^ userLbl;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
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
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ Cliente;


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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->clienteCheck = (gcnew System::Windows::Forms::CheckBox());
			this->adminCheck = (gcnew System::Windows::Forms::CheckBox());
			this->idEntry = (gcnew System::Windows::Forms::TextBox());
			this->userLbl = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insercionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultabusquedasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesSolicitudesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturacionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacionDeLaEmpresaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Cliente = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->Cliente->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->clienteCheck);
			this->tabPage2->Controls->Add(this->adminCheck);
			this->tabPage2->Controls->Add(this->idEntry);
			this->tabPage2->Controls->Add(this->userLbl);
			this->tabPage2->Controls->Add(this->loginBtn);
			this->tabPage2->Location = System::Drawing::Point(8, 57);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1899, 1002);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Login";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// clienteCheck
			// 
			this->clienteCheck->AutoSize = true;
			this->clienteCheck->Location = System::Drawing::Point(1282, 476);
			this->clienteCheck->Name = L"clienteCheck";
			this->clienteCheck->Size = System::Drawing::Size(146, 47);
			this->clienteCheck->TabIndex = 6;
			this->clienteCheck->Text = L"Cliente";
			this->clienteCheck->UseVisualStyleBackColor = true;
			// 
			// adminCheck
			// 
			this->adminCheck->AutoSize = true;
			this->adminCheck->Location = System::Drawing::Point(1282, 405);
			this->adminCheck->Name = L"adminCheck";
			this->adminCheck->Size = System::Drawing::Size(238, 47);
			this->adminCheck->TabIndex = 5;
			this->adminCheck->Text = L"Administrador";
			this->adminCheck->UseVisualStyleBackColor = true;
			// 
			// idEntry
			// 
			this->idEntry->Location = System::Drawing::Point(1179, 323);
			this->idEntry->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->idEntry->Name = L"idEntry";
			this->idEntry->Size = System::Drawing::Size(467, 50);
			this->idEntry->TabIndex = 3;
			// 
			// userLbl
			// 
			this->userLbl->AutoSize = true;
			this->userLbl->Location = System::Drawing::Point(1171, 262);
			this->userLbl->Name = L"userLbl";
			this->userLbl->Size = System::Drawing::Size(196, 43);
			this->userLbl->TabIndex = 1;
			this->userLbl->Text = L"Identificacion";
			// 
			// loginBtn
			// 
			this->loginBtn->Location = System::Drawing::Point(1262, 567);
			this->loginBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(248, 92);
			this->loginBtn->TabIndex = 0;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &ventanaPrincipal::loginBtn_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Controls->Add(this->menuStrip2);
			this->tabPage1->Location = System::Drawing::Point(8, 57);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1899, 1002);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dashborad";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(645, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"world";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1000, 278);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"presiona";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(3, 44);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1893, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->facturacionToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(3, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(1893, 42);
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
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(199, 38);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// insercionToolStripMenuItem
			// 
			this->insercionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->paisesToolStripMenuItem,
					this->ciudadToolStripMenuItem
			});
			this->insercionToolStripMenuItem->Name = L"insercionToolStripMenuItem";
			this->insercionToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->insercionToolStripMenuItem->Text = L"Insercion";
			this->insercionToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::insercionToolStripMenuItem_Click);
			// 
			// paisesToolStripMenuItem
			// 
			this->paisesToolStripMenuItem->Name = L"paisesToolStripMenuItem";
			this->paisesToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->paisesToolStripMenuItem->Text = L"Paises";
			this->paisesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ventanaPrincipal::paisesToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			// 
			// modificacionToolStripMenuItem
			// 
			this->modificacionToolStripMenuItem->Name = L"modificacionToolStripMenuItem";
			this->modificacionToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->modificacionToolStripMenuItem->Text = L"Modificacion";
			// 
			// consultabusquedasToolStripMenuItem
			// 
			this->consultabusquedasToolStripMenuItem->Name = L"consultabusquedasToolStripMenuItem";
			this->consultabusquedasToolStripMenuItem->Size = System::Drawing::Size(376, 44);
			this->consultabusquedasToolStripMenuItem->Text = L"Consulta (busquedas)";
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
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(127, 38);
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
			this->facturacionToolStripMenuItem->Size = System::Drawing::Size(155, 38);
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
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacionDeLaEmpresaToolStripMenuItem });
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(138, 38);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// informacionDeLaEmpresaToolStripMenuItem
			// 
			this->informacionDeLaEmpresaToolStripMenuItem->Name = L"informacionDeLaEmpresaToolStripMenuItem";
			this->informacionDeLaEmpresaToolStripMenuItem->Size = System::Drawing::Size(432, 44);
			this->informacionDeLaEmpresaToolStripMenuItem->Text = L"Informacion de la empresa";
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(130, 38);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			// 
			// Cliente
			// 
			this->Cliente->Controls->Add(this->tabPage2);
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
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ventanaPrincipal";
			this->Text = L"ventanaPrincipal";
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->Cliente->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string hola = paises.hola();
		this->label1->Text = gcnew String(hola.c_str());
	}
	private: System::Void insercionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->idEntry->Text);
		if (adminCheck->Checked) {
			if (administradores.existe(id)) {
				MessageBox::Show("Entra como administrador");
			}
			else {
				MessageBox::Show("No se encontro el administrador");
			}
		}
		else if (clienteCheck->Checked) {
			if (clientes.existe(id)) {
				MessageBox::Show("Entra como cliente");
			}
			else {
				MessageBox::Show("No se encontro el cliente");
			}
		}
		else {
			MessageBox::Show("Seleccione una opcion de ingreso");
		}
	}
private: System::Void paisesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EDP3::InsertPais pais;
	boolInsertarPais = true;
	pais.ShowDialog();
}
};
}
