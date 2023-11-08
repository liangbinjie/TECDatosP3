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
	/// Summary for FormRepoCiudad
	/// </summary>
	public ref class FormRepoCiudad : public System::Windows::Forms::Form
	{
	public:
		FormRepoCiudad(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormRepoCiudad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ countryID;
	protected:
	private: System::Windows::Forms::Label^ countrylbl;
	public: System::Windows::Forms::Button^ insertBtn;
	private:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->countryID = (gcnew System::Windows::Forms::TextBox());
			this->countrylbl = (gcnew System::Windows::Forms::Label());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// countryID
			// 
			this->countryID->Location = System::Drawing::Point(248, 145);
			this->countryID->Margin = System::Windows::Forms::Padding(2);
			this->countryID->Name = L"countryID";
			this->countryID->Size = System::Drawing::Size(304, 26);
			this->countryID->TabIndex = 4;
			// 
			// countrylbl
			// 
			this->countrylbl->AutoSize = true;
			this->countrylbl->Location = System::Drawing::Point(244, 105);
			this->countrylbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->countrylbl->Name = L"countrylbl";
			this->countrylbl->Size = System::Drawing::Size(85, 20);
			this->countrylbl->TabIndex = 3;
			this->countrylbl->Text = L"Country ID";
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(305, 240);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(152, 71);
			this->insertBtn->TabIndex = 5;
			this->insertBtn->Text = L"Generar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormRepoCiudad::insertBtn_Click);
			// 
			// FormRepoCiudad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 450);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->countryID);
			this->Controls->Add(this->countrylbl);
			this->Name = L"FormRepoCiudad";
			this->Text = L"FormRepoCiudad";
			this->Load += gcnew System::EventHandler(this, &FormRepoCiudad::FormRepoCiudad_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	



	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->countryID->Text);
		//ciudades.reporteCiudad(id, paises,  ciudades);

		if (paises.existePais(id)) {
			ciudades.reporteCiudad(id, paises, ciudades);
			MessageBox::Show("Reporte guardado");
		}
		else {
			MessageBox::Show("Este pais no existe");
		}
	
	}
	private: System::Void FormRepoCiudad_Load(System::Object^ sender, System::EventArgs^ e) {
		
		}
	
	};
}
