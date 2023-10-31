#pragma once

#include "Controller.h"
#include "ventanaPrincipal.h"

ArbolPais paises;
ArbolCiudad ciudades;
listaAdmins administradores;
listaAdmins clientes;
ArbolRestaurante rest;
listaRest restaurantes;

bool boolInsertarPais = false;
bool boolModificarPais = false;
bool boolBuscarPais = false;
bool boolInsertarCiudad = false;
bool boolModificarCiudad = false;
bool boolBuscarCiudad = false;
bool boolInsertarCliente = false;
bool boolModificarCliente = false;
bool boolBuscarCliente = false;
bool boolInsertarAdmin = false;
bool boolModificarAdmin = false;
bool boolBuscarAdmin = false;
bool boolInsertarRest = false;
bool boolModificarRest = false;
bool boolBuscarRest = false;
bool boolEliminarPais = false;
bool boolEliminarCiudad = false;
bool boolEliminarCliente = false;
bool boolEliminarRest = false;

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			paises.cargarPais();
			ciudades.cargarCiudades(paises);
			administradores.cargarAdmins();
			clientes.cargarClientes();
			restaurantes.cargarRest(paises, ciudades, rest);
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::TextBox^ idtxt;

	protected:



	private: System::Windows::Forms::CheckBox^ adminCheck;
	private: System::Windows::Forms::CheckBox^ clientCheck;


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
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->idtxt = (gcnew System::Windows::Forms::TextBox());
			this->adminCheck = (gcnew System::Windows::Forms::CheckBox());
			this->clientCheck = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.875F));
			this->label1->Location = System::Drawing::Point(424, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Identificacion";
			// 
			// loginBtn
			// 
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Arial", 13.875F));
			this->loginBtn->Location = System::Drawing::Point(512, 480);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(200, 87);
			this->loginBtn->TabIndex = 2;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginForm::loginBtn_Click);
			// 
			// idtxt
			// 
			this->idtxt->Location = System::Drawing::Point(432, 257);
			this->idtxt->Name = L"idtxt";
			this->idtxt->Size = System::Drawing::Size(358, 35);
			this->idtxt->TabIndex = 3;
			// 
			// adminCheck
			// 
			this->adminCheck->AutoSize = true;
			this->adminCheck->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminCheck->Location = System::Drawing::Point(432, 321);
			this->adminCheck->Name = L"adminCheck";
			this->adminCheck->Size = System::Drawing::Size(192, 31);
			this->adminCheck->TabIndex = 5;
			this->adminCheck->Text = L"Administrador";
			this->adminCheck->UseVisualStyleBackColor = true;
			// 
			// clientCheck
			// 
			this->clientCheck->AutoSize = true;
			this->clientCheck->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientCheck->Location = System::Drawing::Point(432, 392);
			this->clientCheck->Name = L"clientCheck";
			this->clientCheck->Size = System::Drawing::Size(119, 31);
			this->clientCheck->TabIndex = 6;
			this->clientCheck->Text = L"Cliente";
			this->clientCheck->UseVisualStyleBackColor = true;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 820);
			this->Controls->Add(this->clientCheck);
			this->Controls->Add(this->adminCheck);
			this->Controls->Add(this->idtxt);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->idtxt->Text);
	if (adminCheck->Checked) {
		if (administradores.existe(id)) {
			MessageBox::Show("Entra como administrador");
			EDP3::ventanaPrincipal form;
			form.ShowDialog();
		}
		else {
			MessageBox::Show("No se encontro el administrador");
		}
	}
	else if (clientCheck->Checked) {
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
};
}
