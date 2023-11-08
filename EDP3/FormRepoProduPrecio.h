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
	/// Summary for FormRepoProduPrecio
	/// </summary>
	public ref class FormRepoProduPrecio : public System::Windows::Forms::Form
	{
	public:
		FormRepoProduPrecio(void)
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
		~FormRepoProduPrecio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ productid;
	protected:
	private: System::Windows::Forms::TextBox^ menuid;
	private: System::Windows::Forms::TextBox^ restid;
	private: System::Windows::Forms::TextBox^ ciudadid;
	private: System::Windows::Forms::TextBox^ paisid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ searchBtn;

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
			this->productid = (gcnew System::Windows::Forms::TextBox());
			this->menuid = (gcnew System::Windows::Forms::TextBox());
			this->restid = (gcnew System::Windows::Forms::TextBox());
			this->ciudadid = (gcnew System::Windows::Forms::TextBox());
			this->paisid = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// productid
			// 
			this->productid->Location = System::Drawing::Point(361, 444);
			this->productid->Margin = System::Windows::Forms::Padding(2);
			this->productid->Name = L"productid";
			this->productid->Size = System::Drawing::Size(295, 26);
			this->productid->TabIndex = 23;
			// 
			// menuid
			// 
			this->menuid->Location = System::Drawing::Point(361, 340);
			this->menuid->Margin = System::Windows::Forms::Padding(2);
			this->menuid->Name = L"menuid";
			this->menuid->Size = System::Drawing::Size(295, 26);
			this->menuid->TabIndex = 22;
			// 
			// restid
			// 
			this->restid->Location = System::Drawing::Point(361, 239);
			this->restid->Margin = System::Windows::Forms::Padding(2);
			this->restid->Name = L"restid";
			this->restid->Size = System::Drawing::Size(295, 26);
			this->restid->TabIndex = 21;
			// 
			// ciudadid
			// 
			this->ciudadid->Location = System::Drawing::Point(361, 158);
			this->ciudadid->Margin = System::Windows::Forms::Padding(2);
			this->ciudadid->Name = L"ciudadid";
			this->ciudadid->Size = System::Drawing::Size(295, 26);
			this->ciudadid->TabIndex = 20;
			// 
			// paisid
			// 
			this->paisid->Location = System::Drawing::Point(361, 58);
			this->paisid->Margin = System::Windows::Forms::Padding(2);
			this->paisid->Name = L"paisid";
			this->paisid->Size = System::Drawing::Size(295, 26);
			this->paisid->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(358, 402);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Product ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(358, 304);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Menu ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(358, 205);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Restaurant ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(358, 112);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"City ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Country ID";
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(429, 501);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(118, 53);
			this->searchBtn->TabIndex = 24;
			this->searchBtn->Text = L"Generar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormRepoProduPrecio::searchBtn_Click);
			// 
			// FormRepoProduPrecio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 614);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->productid);
			this->Controls->Add(this->menuid);
			this->Controls->Add(this->restid);
			this->Controls->Add(this->ciudadid);
			this->Controls->Add(this->paisid);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormRepoProduPrecio";
			this->Text = L"FormRepoProduPrecio";
			this->Load += gcnew System::EventHandler(this, &FormRepoProduPrecio::FormRepoProduPrecio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->paisid->Text);
		int idC = Convert::ToInt32(this->ciudadid->Text);
		int idR = Convert::ToInt32(this->restid->Text);
		int idM = Convert::ToInt32(this->menuid->Text);
		int id = Convert::ToInt32(this->productid->Text);


		if (productos.existeProducto(idP, idC, idR, idM, id)) {
			//NodoProducto* aux = productos.buscarProducto(idP, idC, idR, idM, id);
			productos.reporteProductoPrecio(idP, idC, idR, idM, paises, ciudades, restaurantes, menu);
		}
		else {
			MessageBox::Show("Este producto no existe");

		}
	
	}
private: System::Void FormRepoProduPrecio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
