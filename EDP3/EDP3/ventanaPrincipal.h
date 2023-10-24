#pragma once

#include "Paises.h"

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
		ArbolPais* paises;
		ventanaPrincipal(void)
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ Cliente;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::TextBox^ username;

	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::Label^ userLbl;
	private: System::Windows::Forms::Button^ loginBtn;
	protected:

	protected:


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cliente = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->userLbl = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Cliente->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1196, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(278, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"presiona";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventanaPrincipal::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(938, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"world";
			// 
			// Cliente
			// 
			this->Cliente->Controls->Add(this->tabPage1);
			this->Cliente->Controls->Add(this->tabPage2);
			this->Cliente->Controls->Add(this->tabPage3);
			this->Cliente->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cliente->Location = System::Drawing::Point(2, 1);
			this->Cliente->Name = L"Cliente";
			this->Cliente->SelectedIndex = 0;
			this->Cliente->Size = System::Drawing::Size(1914, 1067);
			this->Cliente->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(8, 57);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1898, 1002);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cliente";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->password);
			this->tabPage2->Controls->Add(this->username);
			this->tabPage2->Controls->Add(this->passLbl);
			this->tabPage2->Controls->Add(this->userLbl);
			this->tabPage2->Controls->Add(this->loginBtn);
			this->tabPage2->Location = System::Drawing::Point(8, 57);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1898, 1002);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Login";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(1178, 495);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(467, 50);
			this->password->TabIndex = 4;
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(1178, 323);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(467, 50);
			this->username->TabIndex = 3;
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Location = System::Drawing::Point(1170, 430);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(149, 43);
			this->passLbl->TabIndex = 2;
			this->passLbl->Text = L"password";
			// 
			// userLbl
			// 
			this->userLbl->AutoSize = true;
			this->userLbl->Location = System::Drawing::Point(1170, 261);
			this->userLbl->Name = L"userLbl";
			this->userLbl->Size = System::Drawing::Size(119, 43);
			this->userLbl->TabIndex = 1;
			this->userLbl->Text = L"usuario";
			// 
			// loginBtn
			// 
			this->loginBtn->Location = System::Drawing::Point(1279, 636);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(248, 92);
			this->loginBtn->TabIndex = 0;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(8, 57);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1898, 1002);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Admin";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// ventanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1920, 1080);
			this->Controls->Add(this->Cliente);
			this->Name = L"ventanaPrincipal";
			this->Text = L"ventanaPrincipal";
			this->Cliente->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Successful");
		string hola = paises->hola();
		this->label1->Text = gcnew String(hola.c_str());
	}
	};
}
