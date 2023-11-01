#pragma once

namespace EDP3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ViewCliente
	/// </summary>
	public ref class ViewCliente : public System::Windows::Forms::Form
	{
	public:
		ViewCliente(void)
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
		~ViewCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 193);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1041, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 193);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Comprar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// ViewCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1635, 1024);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ViewCliente";
			this->Text = L"ViewCliente";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
