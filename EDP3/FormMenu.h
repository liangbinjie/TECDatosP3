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
	/// Summary for FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ restID;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ menuName;

	private: System::Windows::Forms::TextBox^ cityID;
	private: System::Windows::Forms::TextBox^ countryID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ menuID;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->restID = (gcnew System::Windows::Forms::TextBox());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuName = (gcnew System::Windows::Forms::TextBox());
			this->cityID = (gcnew System::Windows::Forms::TextBox());
			this->countryID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(568, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 24);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Restaurant ID";
			// 
			// restID
			// 
			this->restID->Location = System::Drawing::Point(568, 311);
			this->restID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->restID->Name = L"restID";
			this->restID->Size = System::Drawing::Size(373, 35);
			this->restID->TabIndex = 32;
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(1064, 636);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(259, 82);
			this->deleteBtn->TabIndex = 31;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &FormMenu::deleteBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(757, 636);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(268, 82);
			this->modifyBtn->TabIndex = 30;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			this->modifyBtn->Click += gcnew System::EventHandler(this, &FormMenu::modifyBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(437, 636);
			this->searchBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(299, 82);
			this->searchBtn->TabIndex = 29;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormMenu::searchBtn_Click);
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(101, 636);
			this->insertBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(280, 82);
			this->insertBtn->TabIndex = 28;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormMenu::insertBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(569, 506);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 24);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Menu name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(568, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 26;
			this->label2->Text = L"City ID";
			// 
			// menuName
			// 
			this->menuName->Location = System::Drawing::Point(569, 553);
			this->menuName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuName->Name = L"menuName";
			this->menuName->Size = System::Drawing::Size(373, 35);
			this->menuName->TabIndex = 25;
			// 
			// cityID
			// 
			this->cityID->Location = System::Drawing::Point(568, 198);
			this->cityID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cityID->Name = L"cityID";
			this->cityID->Size = System::Drawing::Size(373, 35);
			this->cityID->TabIndex = 24;
			// 
			// countryID
			// 
			this->countryID->Location = System::Drawing::Point(568, 77);
			this->countryID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->countryID->Name = L"countryID";
			this->countryID->Size = System::Drawing::Size(373, 35);
			this->countryID->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(564, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Country ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(568, 391);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 24);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Menu ID";
			this->label5->Click += gcnew System::EventHandler(this, &FormMenu::label5_Click);
			// 
			// menuID
			// 
			this->menuID->Location = System::Drawing::Point(568, 438);
			this->menuID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuID->Name = L"menuID";
			this->menuID->Size = System::Drawing::Size(373, 35);
			this->menuID->TabIndex = 34;
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1445, 792);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->menuID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->restID);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuName);
			this->Controls->Add(this->cityID);
			this->Controls->Add(this->countryID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormMenu";
			this->Text = L"FormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->countryID->Text);
		int idC = Convert::ToInt32(this->cityID->Text);
		int idR = Convert::ToInt32(this->restID->Text);
		int idM = Convert::ToInt32(this->menuID->Text);
		menu.mostrar();
		
		if (menu.existe(idM, idP, idC, idR)) {
			this->menuName->Text = gcnew String(menu.buscar(idM, idP, idC, idR).c_str());
		}
		else {
			MessageBox::Show("No existe este menu");
		}
	}
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->countryID->Text);
		int idC = Convert::ToInt32(this->cityID->Text);
		int idR = Convert::ToInt32(this->restID->Text);
		int idM = Convert::ToInt32(this->menuID->Text);
		string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);

		if (menu.existe(idM, idP, idC, idR)) {
			MessageBox::Show("Este menu ya existe");
		}
		else {
			menu.insertar(idM, idP, idC, idR, name, paises, ciudades, rest);
			MessageBox::Show("Nuevo menu insertado");
		}
	}
	private: System::Void modifyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->countryID->Text);
		int idC = Convert::ToInt32(this->cityID->Text);
		int idR = Convert::ToInt32(this->restID->Text);
		int idM = Convert::ToInt32(this->menuID->Text);
		string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);

		if (menu.existe(idM, idP, idC, idR)) {
			menu.modificar(idM, idP, idC, idR, name);
			MessageBox::Show("Menu actualizado");
		}
		else {
			MessageBox::Show("Este menu no existe");
		}
	}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->countryID->Text);
	int idC = Convert::ToInt32(this->cityID->Text);
	int idR = Convert::ToInt32(this->restID->Text);
	int idM = Convert::ToInt32(this->menuID->Text);
	string name = msclr::interop::marshal_as<std::string>(this->menuName->Text);

	if (menu.existe(idM, idP, idC, idR)) {
		menu.eliminar(idM, idP, idC, idR);
		MessageBox::Show("Menu eliminado");
	}
	else {
		MessageBox::Show("Este menu no existe");
	}
}
};
}
