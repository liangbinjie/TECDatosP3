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
	/// Summary for FormRepoProduCant
	/// </summary>
	public ref class FormRepoProduCant : public System::Windows::Forms::Form
	{
	public:
		FormRepoProduCant(void)
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
		~FormRepoProduCant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ searchBtn;
	protected:
	private: System::Windows::Forms::TextBox^ productid;
	private: System::Windows::Forms::TextBox^ menuid;
	private: System::Windows::Forms::TextBox^ restid;
	private: System::Windows::Forms::TextBox^ ciudadid;
	private: System::Windows::Forms::TextBox^ paisid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->searchBtn = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(374, 507);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(118, 53);
			this->searchBtn->TabIndex = 35;
			this->searchBtn->Text = L"Generar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormRepoProduCant::searchBtn_Click);
			// 
			// productid
			// 
			this->productid->Location = System::Drawing::Point(306, 450);
			this->productid->Margin = System::Windows::Forms::Padding(2);
			this->productid->Name = L"productid";
			this->productid->Size = System::Drawing::Size(295, 26);
			this->productid->TabIndex = 34;
			// 
			// menuid
			// 
			this->menuid->Location = System::Drawing::Point(306, 346);
			this->menuid->Margin = System::Windows::Forms::Padding(2);
			this->menuid->Name = L"menuid";
			this->menuid->Size = System::Drawing::Size(295, 26);
			this->menuid->TabIndex = 33;
			// 
			// restid
			// 
			this->restid->Location = System::Drawing::Point(306, 245);
			this->restid->Margin = System::Windows::Forms::Padding(2);
			this->restid->Name = L"restid";
			this->restid->Size = System::Drawing::Size(295, 26);
			this->restid->TabIndex = 32;
			// 
			// ciudadid
			// 
			this->ciudadid->Location = System::Drawing::Point(306, 164);
			this->ciudadid->Margin = System::Windows::Forms::Padding(2);
			this->ciudadid->Name = L"ciudadid";
			this->ciudadid->Size = System::Drawing::Size(295, 26);
			this->ciudadid->TabIndex = 31;
			// 
			// paisid
			// 
			this->paisid->Location = System::Drawing::Point(306, 64);
			this->paisid->Margin = System::Windows::Forms::Padding(2);
			this->paisid->Name = L"paisid";
			this->paisid->Size = System::Drawing::Size(295, 26);
			this->paisid->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(303, 408);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 20);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Product ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 310);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Menu ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 211);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Restaurant ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(303, 118);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 26;
			this->label2->Text = L"City ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(303, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Country ID";
			// 
			// FormRepoProduCant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 585);
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
			this->Name = L"FormRepoProduCant";
			this->Text = L"FormRepoProduCant";
			this->Load += gcnew System::EventHandler(this, &FormRepoProduCant::FormRepoProduCant_Load);
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
			productos.reporteProductoCantidad(idP, idC, idR, idM, paises, ciudades, restaurantes, menu);
			MessageBox::Show("Reporte generado");
		}
		else {
			MessageBox::Show("Este producto no existe");

		}

	}
private: System::Void FormRepoProduCant_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
