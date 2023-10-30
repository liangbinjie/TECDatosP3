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
	/// Resumen de FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ countryid;
	private: System::Windows::Forms::TextBox^ cityid;
	private: System::Windows::Forms::TextBox^ restaurantid;
	private: System::Windows::Forms::TextBox^ menuid;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ menuName;


	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->countryid = (gcnew System::Windows::Forms::TextBox());
			this->cityid = (gcnew System::Windows::Forms::TextBox());
			this->restaurantid = (gcnew System::Windows::Forms::TextBox());
			this->menuid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuName = (gcnew System::Windows::Forms::TextBox());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(541, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"country id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(541, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"city id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(541, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"restaurant id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(541, 436);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"menu id";
			// 
			// countryid
			// 
			this->countryid->Location = System::Drawing::Point(545, 133);
			this->countryid->Name = L"countryid";
			this->countryid->Size = System::Drawing::Size(356, 35);
			this->countryid->TabIndex = 4;
			// 
			// cityid
			// 
			this->cityid->Location = System::Drawing::Point(545, 248);
			this->cityid->Name = L"cityid";
			this->cityid->Size = System::Drawing::Size(356, 35);
			this->cityid->TabIndex = 5;
			// 
			// restaurantid
			// 
			this->restaurantid->Location = System::Drawing::Point(545, 367);
			this->restaurantid->Name = L"restaurantid";
			this->restaurantid->Size = System::Drawing::Size(356, 35);
			this->restaurantid->TabIndex = 6;
			// 
			// menuid
			// 
			this->menuid->Location = System::Drawing::Point(545, 477);
			this->menuid->Name = L"menuid";
			this->menuid->Size = System::Drawing::Size(356, 35);
			this->menuid->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(545, 558);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"nombre";
			// 
			// menuName
			// 
			this->menuName->Location = System::Drawing::Point(549, 599);
			this->menuName->Name = L"menuName";
			this->menuName->Size = System::Drawing::Size(352, 35);
			this->menuName->TabIndex = 9;
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(273, 723);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(224, 96);
			this->insertBtn->TabIndex = 10;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormMenu::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(616, 723);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(227, 96);
			this->searchBtn->TabIndex = 11;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormMenu::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(976, 723);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(216, 96);
			this->modifyBtn->TabIndex = 12;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormMenu::modifyBtn_Click);
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 952);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->menuName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->menuid);
			this->Controls->Add(this->restaurantid);
			this->Controls->Add(this->cityid);
			this->Controls->Add(this->countryid);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormMenu";
			this->Text = L"FormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->countryid->Text);
		int idP = Convert::ToInt32(this->cityid->Text);
		int idR = Convert::ToInt32(this->restaurantid->Text);
		int idM = Convert::ToInt32(this->menuid->Text);
		string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);

		/*
		if (menus.existe) {
			MessageBox::Show("Este menu ya existe");
		}
		else {
			menus.insertar();
			MessageBox::Show("Nuevo menu ingresado");
		}
		*/

	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryid->Text);
	int idP = Convert::ToInt32(this->cityid->Text);
	int idR = Convert::ToInt32(this->restaurantid->Text);
	int idM = Convert::ToInt32(this->menuid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);
	/*
	if (menus.existe()) {
		this->menuName->Text = gcnew String(menus.buscar().c_str());
	}
	else {
		MessageBox::Show("Este menu no existe");
	}
	*/

}
private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryid->Text);
	int idP = Convert::ToInt32(this->cityid->Text);
	int idR = Convert::ToInt32(this->restaurantid->Text);
	int idM = Convert::ToInt32(this->menuid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);

	/*
	if (menus.existe()) {
		menus.modificar();
		MessageBox:Show("Nombre de menu modificado");
	}
	else {
		MessageBox::Show("No existe este menu");
	}
	*/
}
};
}
