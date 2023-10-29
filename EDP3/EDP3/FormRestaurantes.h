#pragma once

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormRestaurantes
	/// </summary>
	public ref class FormRestaurantes : public System::Windows::Forms::Form
	{
	public:
		FormRestaurantes(void)
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
		~FormRestaurantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ modifyBtn;
	protected:
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cityname;
	private: System::Windows::Forms::TextBox^ cityid;
	private: System::Windows::Forms::TextBox^ countryid;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ RestID;


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
			this->modifyBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cityname = (gcnew System::Windows::Forms::TextBox());
			this->cityid = (gcnew System::Windows::Forms::TextBox());
			this->countryid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->RestID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// modifyBtn
			// 
			this->modifyBtn->Location = System::Drawing::Point(717, 459);
			this->modifyBtn->Margin = System::Windows::Forms::Padding(2);
			this->modifyBtn->Name = L"modifyBtn";
			this->modifyBtn->Size = System::Drawing::Size(201, 68);
			this->modifyBtn->TabIndex = 17;
			this->modifyBtn->Text = L"Modificar";
			this->modifyBtn->UseVisualStyleBackColor = true;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(398, 459);
			this->searchBtn->Margin = System::Windows::Forms::Padding(2);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(224, 68);
			this->searchBtn->TabIndex = 16;
			this->searchBtn->Text = L"Buscar";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &FormRestaurantes::searchBtn_Click);
			// 
			// insertBtn
			// 
			this->insertBtn->Location = System::Drawing::Point(105, 459);
			this->insertBtn->Margin = System::Windows::Forms::Padding(2);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(210, 68);
			this->insertBtn->TabIndex = 15;
			this->insertBtn->Text = L"Insertar";
			this->insertBtn->UseVisualStyleBackColor = true;
			this->insertBtn->Click += gcnew System::EventHandler(this, &FormRestaurantes::insertBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(371, 317);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Restaurant name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(371, 132);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"City ID";
			// 
			// cityname
			// 
			this->cityname->Location = System::Drawing::Point(371, 356);
			this->cityname->Margin = System::Windows::Forms::Padding(2);
			this->cityname->Name = L"cityname";
			this->cityname->Size = System::Drawing::Size(281, 26);
			this->cityname->TabIndex = 12;
			// 
			// cityid
			// 
			this->cityid->Location = System::Drawing::Point(371, 174);
			this->cityid->Margin = System::Windows::Forms::Padding(2);
			this->cityid->Name = L"cityid";
			this->cityid->Size = System::Drawing::Size(281, 26);
			this->cityid->TabIndex = 11;
			// 
			// countryid
			// 
			this->countryid->Location = System::Drawing::Point(371, 69);
			this->countryid->Margin = System::Windows::Forms::Padding(2);
			this->countryid->Name = L"countryid";
			this->countryid->Size = System::Drawing::Size(281, 26);
			this->countryid->TabIndex = 10;
			this->countryid->TextChanged += gcnew System::EventHandler(this, &FormRestaurantes::countryid_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(367, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Country ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(371, 217);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Restaurant ID";
			// 
			// RestID
			// 
			this->RestID->Location = System::Drawing::Point(371, 259);
			this->RestID->Margin = System::Windows::Forms::Padding(2);
			this->RestID->Name = L"RestID";
			this->RestID->Size = System::Drawing::Size(281, 26);
			this->RestID->TabIndex = 18;
			// 
			// FormRestaurantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 598);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->RestID);
			this->Controls->Add(this->modifyBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cityname);
			this->Controls->Add(this->cityid);
			this->Controls->Add(this->countryid);
			this->Controls->Add(this->label1);
			this->Name = L"FormRestaurantes";
			this->Text = L"s";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void countryid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void insertBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	int idP = Convert::ToInt32(this->countryid->Text);
	int idC = Convert::ToInt32(this->cityid->Text);
	string name = msclr::interop::marshal_as<std::string>(this->cityname->Text);

	if (restaurantes.existeCiudad(idC, idP)) {
		MessageBox::Show("Esta ciudad ya existe en el sistema");
	}
	else {
		if (paises.existePais(idP)) {
			ciudades.insertar(idC, idP, name, paises);
			MessageBox::Show("Nueva ciudad ingresada");
		}
		else {
			MessageBox::Show("Este pais no existe");
		}
	}

}



};
}
