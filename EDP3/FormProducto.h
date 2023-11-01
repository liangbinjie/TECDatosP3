#pragma once
#include "Controller.h"
#include "Productos.h"
#include <msclr\marshal_cppstd.h>

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormProducto
	/// </summary>
	public ref class FormProducto : public System::Windows::Forms::Form
	{
	public:
		FormProducto(void)
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
		~FormProducto()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ paisid;
	private: System::Windows::Forms::TextBox^ ciudadid;
	private: System::Windows::Forms::TextBox^ restid;
	private: System::Windows::Forms::TextBox^ menuid;
	private: System::Windows::Forms::TextBox^ productid;
	private: System::Windows::Forms::TextBox^ productname;
	private: System::Windows::Forms::TextBox^ price;
	private: System::Windows::Forms::TextBox^ kcal;
	private: System::Windows::Forms::TextBox^ qnty;










	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ modifyBtn;
	private: System::Windows::Forms::Button^ deleteBtn;





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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->paisid = (gcnew System::Windows::Forms::TextBox());
			this->ciudadid = (gcnew System::Windows::Forms::TextBox());
			this->restid = (gcnew System::Windows::Forms::TextBox());
			this->menuid = (gcnew System::Windows::Forms::TextBox());
			this->productid = (gcnew System::Windows::Forms::TextBox());
			this->productname = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->kcal = (gcnew System::Windows::Forms::TextBox());
			this->qnty = (gcnew System::Windows::Forms::TextBox());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 77);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Country ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 171);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"City ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 264);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Restaurant ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 363);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Menu ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 461);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Product ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(514, 77);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Product Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(514, 171);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Price";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(514, 264);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Calories";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(514, 363);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Quantity";
			// 
			// paisid
			// 
			this->paisid->Location = System::Drawing::Point(72, 117);
			this->paisid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->paisid->Name = L"paisid";
			this->paisid->Size = System::Drawing::Size(295, 26);
			this->paisid->TabIndex = 9;
			// 
			// ciudadid
			// 
			this->ciudadid->Location = System::Drawing::Point(72, 217);
			this->ciudadid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ciudadid->Name = L"ciudadid";
			this->ciudadid->Size = System::Drawing::Size(295, 26);
			this->ciudadid->TabIndex = 10;
			// 
			// restid
			// 
			this->restid->Location = System::Drawing::Point(72, 298);
			this->restid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->restid->Name = L"restid";
			this->restid->Size = System::Drawing::Size(295, 26);
			this->restid->TabIndex = 11;
			// 
			// menuid
			// 
			this->menuid->Location = System::Drawing::Point(72, 399);
			this->menuid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->menuid->Name = L"menuid";
			this->menuid->Size = System::Drawing::Size(295, 26);
			this->menuid->TabIndex = 12;
			// 
			// productid
			// 
			this->productid->Location = System::Drawing::Point(72, 503);
			this->productid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->productid->Name = L"productid";
			this->productid->Size = System::Drawing::Size(295, 26);
			this->productid->TabIndex = 13;
			// 
			// productname
			// 
			this->productname->Location = System::Drawing::Point(518, 117);
			this->productname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->productname->Name = L"productname";
			this->productname->Size = System::Drawing::Size(278, 26);
			this->productname->TabIndex = 14;
			// 
			// price
			// 
			this->price->Location = System::Drawing::Point(518, 217);
			this->price->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(278, 26);
			this->price->TabIndex = 15;
			// 
			// kcal
			// 
			this->kcal->Location = System::Drawing::Point(518, 298);
			this->kcal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->kcal->Name = L"kcal";
			this->kcal->Size = System::Drawing::Size(278, 26);
			this->kcal->TabIndex = 16;
			// 
			// qnty
			// 
			this->qnty->Location = System::Drawing::Point(518, 399);
			this->qnty->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->qnty->Name = L"qnty";
			this->qnty->Size = System::Drawing::Size(278, 26);
			this->qnty->TabIndex = 17;
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(142, 589);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(133, 53);
			this->insertBtn->TabIndex = 18;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormProducto::insertBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(325, 589);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(118, 53);
			this->searchBtn->TabIndex = 19;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormProducto::searchBtn_Click);
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(500, 589);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(125, 53);
			this->modifyBtn->TabIndex = 20;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(676, 589);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(130, 53);
			this->deleteBtn->TabIndex = 21;
			this->deleteBtn->Text = L"Eliminar";
			this->deleteBtn->UseVisualStyleBackColor = true;
			// 
			// FormProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 711);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->qnty);
			this->Controls->Add(this->kcal);
			this->Controls->Add(this->price);
			this->Controls->Add(this->productname);
			this->Controls->Add(this->productid);
			this->Controls->Add(this->menuid);
			this->Controls->Add(this->restid);
			this->Controls->Add(this->ciudadid);
			this->Controls->Add(this->paisid);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"FormProducto";
			this->Text = L"FormProducto";
			this->Load += gcnew System::EventHandler(this, &FormProducto::FormProducto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int idP = Convert::ToInt32(this->paisid->Text);
		int idC = Convert::ToInt32(this->ciudadid->Text);
		int idR = Convert::ToInt32(this->restid->Text);
		int idM = Convert::ToInt32(this->menuid->Text);
		int id = Convert::ToInt32(this->productid->Text);
		int precio = Convert::ToInt32(this->price->Text);
		int calorias = Convert::ToInt32(this->kcal->Text);
		int cant = Convert::ToInt32(this->qnty->Text);
		string name = msclr::interop::marshal_as<std::string>(this->productname->Text);

		if (productos.existeProducto(idP, idC, idR, idM, id, paises, ciudades, restaurantes, menu)) {
			MessageBox::Show("Este producto ya existe");
		}
		else {
			productos.insertarProducto(idP, idC, idR, idM, id, name, calorias, precio, cant, paises, ciudades, restaurantes, menu);
			MessageBox::Show("Producto insertado");
		}
	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int idP = Convert::ToInt32(this->paisid->Text);
	int idC = Convert::ToInt32(this->ciudadid->Text);
	int idR = Convert::ToInt32(this->restid->Text);
	int idM = Convert::ToInt32(this->menuid->Text);
	int id = Convert::ToInt32(this->productid->Text);


	if (productos.existeProducto(idP, idC, idR, idM, id, paises, ciudades, restaurantes, menu)) {
		NodoProducto* aux = productos.buscarProducto(idP, idC, idR, idM, idP, paises, ciudades, restaurantes, menu);
		this->productname->Text = gcnew String(aux->nombre.c_str());
		this->price->Text = gcnew String(to_string(aux->precio).c_str());
		this->kcal->Text = gcnew String(to_string(aux->kcal).c_str());
		this->qnty->Text = gcnew String(to_string(aux->cantidad).c_str());
	}
	else {
		MessageBox::Show("Este producto no existe");
		
	}
}
private: System::Void FormProducto_Load(System::Object^ sender, System::EventArgs^ e) {
	searchBtn->Enabled = false;
	insertBtn->Enabled = false;
	modifyBtn->Enabled = false;
	deleteBtn->Enabled = false;

	if (boolBuscarProducto == true) {
		searchBtn->Enabled = true;
	}
	if (boolInsertarProducto == true) {
		insertBtn->Enabled = true;
	}
	if (boolModificarProducto == true) {
		modifyBtn->Enabled = true;
	}
	if (boolEliminarProducto == true) {
		deleteBtn->Enabled = true;
	}

}
};
}
