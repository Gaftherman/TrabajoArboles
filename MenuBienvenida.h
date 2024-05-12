#pragma once

#include "NaryTree.h"
#include <string>

namespace MenuBienvenida
{
	/// <summary>
	/// Summary for Form
	/// </summary>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form : public System::Windows::Forms::Form
	{
	public:
		Form(void)
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
		~Form()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Panel^ Fondo;
		private: System::Windows::Forms::Label^ Bienvenida;
		private: System::Windows::Forms::Label^ Indicacion;
		private: System::Windows::Forms::TextBox^ NumNodos;
		private: System::Windows::Forms::Label^ MensajeNodo;
		private: System::Windows::Forms::Button^ VerifyNodo;
		private: System::Windows::Forms::Button^ VerificarTabla;
		private: System::Windows::Forms::DataGridView^ dataGridView1;
		private: System::Windows::Forms::Panel^ Medio;
		private: NaryTree* tree = new NaryTree(1);
		private: System::Windows::Forms::Label^ Extension;
		private: System::Windows::Forms::Label^ ExtensionResult;
		private: System::Windows::Forms::Label^ PreOrdenResult;
		private: System::Windows::Forms::Label^ PreOrden;
		private: System::Windows::Forms::Label^ PostOrdenResult;
		private: System::Windows::Forms::Label^ PostOrden;
		private: System::Windows::Forms::Label^ InOrderResult;
		private: System::Windows::Forms::Label^ InOrder;
		private: Graphics^ g;

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
			this->Fondo = (gcnew System::Windows::Forms::Panel());
			this->PostOrdenResult = (gcnew System::Windows::Forms::Label());
			this->PostOrden = (gcnew System::Windows::Forms::Label());
			this->InOrderResult = (gcnew System::Windows::Forms::Label());
			this->InOrder = (gcnew System::Windows::Forms::Label());
			this->PreOrdenResult = (gcnew System::Windows::Forms::Label());
			this->PreOrden = (gcnew System::Windows::Forms::Label());
			this->ExtensionResult = (gcnew System::Windows::Forms::Label());
			this->Extension = (gcnew System::Windows::Forms::Label());
			this->Medio = (gcnew System::Windows::Forms::Panel());
			this->VerifyNodo = (gcnew System::Windows::Forms::Button());
			this->NumNodos = (gcnew System::Windows::Forms::TextBox());
			this->MensajeNodo = (gcnew System::Windows::Forms::Label());
			this->Indicacion = (gcnew System::Windows::Forms::Label());
			this->Bienvenida = (gcnew System::Windows::Forms::Label());
			this->Fondo->SuspendLayout();
			this->SuspendLayout();
			// 
			// Fondo
			// 
			this->Fondo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Fondo->Controls->Add(this->PostOrdenResult);
			this->Fondo->Controls->Add(this->PostOrden);
			this->Fondo->Controls->Add(this->InOrderResult);
			this->Fondo->Controls->Add(this->InOrder);
			this->Fondo->Controls->Add(this->PreOrdenResult);
			this->Fondo->Controls->Add(this->PreOrden);
			this->Fondo->Controls->Add(this->ExtensionResult);
			this->Fondo->Controls->Add(this->Extension);
			this->Fondo->Controls->Add(this->Medio);
			this->Fondo->Controls->Add(this->VerifyNodo);
			this->Fondo->Controls->Add(this->NumNodos);
			this->Fondo->Controls->Add(this->MensajeNodo);
			this->Fondo->Controls->Add(this->Indicacion);
			this->Fondo->Controls->Add(this->Bienvenida);
			this->Fondo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Fondo->Location = System::Drawing::Point(0, 0);
			this->Fondo->Name = L"Fondo";
			this->Fondo->Size = System::Drawing::Size(1188, 681);
			this->Fondo->TabIndex = 0;
			this->Fondo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form::Paint);
			// 
			// PostOrdenResult
			// 
			this->PostOrdenResult->AutoSize = true;
			this->PostOrdenResult->BackColor = System::Drawing::SystemColors::Control;
			this->PostOrdenResult->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostOrdenResult->Location = System::Drawing::Point(558, 211);
			this->PostOrdenResult->Name = L"PostOrdenResult";
			this->PostOrdenResult->Size = System::Drawing::Size(0, 20);
			this->PostOrdenResult->TabIndex = 13;
			this->PostOrdenResult->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PostOrden
			// 
			this->PostOrden->AutoSize = true;
			this->PostOrden->BackColor = System::Drawing::SystemColors::Control;
			this->PostOrden->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostOrden->Location = System::Drawing::Point(558, 191);
			this->PostOrden->Name = L"PostOrden";
			this->PostOrden->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->PostOrden->Size = System::Drawing::Size(211, 20);
			this->PostOrden->TabIndex = 12;
			this->PostOrden->Text = L"Elementos de T en postorden:";
			this->PostOrden->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// InOrderResult
			// 
			this->InOrderResult->AutoSize = true;
			this->InOrderResult->BackColor = System::Drawing::SystemColors::Control;
			this->InOrderResult->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InOrderResult->Location = System::Drawing::Point(558, 158);
			this->InOrderResult->Name = L"InOrderResult";
			this->InOrderResult->Size = System::Drawing::Size(0, 20);
			this->InOrderResult->TabIndex = 11;
			this->InOrderResult->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// InOrder
			// 
			this->InOrder->AutoSize = true;
			this->InOrder->BackColor = System::Drawing::SystemColors::Control;
			this->InOrder->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InOrder->Location = System::Drawing::Point(558, 138);
			this->InOrder->Name = L"InOrder";
			this->InOrder->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->InOrder->Size = System::Drawing::Size(188, 20);
			this->InOrder->TabIndex = 10;
			this->InOrder->Text = L"Elementos de T en inorder";
			this->InOrder->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PreOrdenResult
			// 
			this->PreOrdenResult->AutoSize = true;
			this->PreOrdenResult->BackColor = System::Drawing::SystemColors::Control;
			this->PreOrdenResult->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreOrdenResult->Location = System::Drawing::Point(558, 105);
			this->PreOrdenResult->Name = L"PreOrdenResult";
			this->PreOrdenResult->Size = System::Drawing::Size(0, 20);
			this->PreOrdenResult->TabIndex = 9;
			this->PreOrdenResult->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PreOrden
			// 
			this->PreOrden->AutoSize = true;
			this->PreOrden->BackColor = System::Drawing::SystemColors::Control;
			this->PreOrden->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreOrden->Location = System::Drawing::Point(558, 85);
			this->PreOrden->Name = L"PreOrden";
			this->PreOrden->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->PreOrden->Size = System::Drawing::Size(205, 20);
			this->PreOrden->TabIndex = 8;
			this->PreOrden->Text = L"Elementos de T en preorden:";
			this->PreOrden->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ExtensionResult
			// 
			this->ExtensionResult->AutoSize = true;
			this->ExtensionResult->BackColor = System::Drawing::SystemColors::Control;
			this->ExtensionResult->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExtensionResult->Location = System::Drawing::Point(558, 60);
			this->ExtensionResult->Name = L"ExtensionResult";
			this->ExtensionResult->Size = System::Drawing::Size(0, 20);
			this->ExtensionResult->TabIndex = 7;
			this->ExtensionResult->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Extension
			// 
			this->Extension->AutoSize = true;
			this->Extension->BackColor = System::Drawing::SystemColors::Control;
			this->Extension->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Extension->Location = System::Drawing::Point(558, 32);
			this->Extension->Name = L"Extension";
			this->Extension->Size = System::Drawing::Size(214, 20);
			this->Extension->TabIndex = 6;
			this->Extension->Text = L"Elementos de T por extension:";
			this->Extension->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Medio
			// 
			this->Medio->Location = System::Drawing::Point(524, 0);
			this->Medio->Name = L"Medio";
			this->Medio->Size = System::Drawing::Size(10, 681);
			this->Medio->TabIndex = 5;
			// 
			// VerifyNodo
			// 
			this->VerifyNodo->Location = System::Drawing::Point(394, 136);
			this->VerifyNodo->Name = L"VerifyNodo";
			this->VerifyNodo->Size = System::Drawing::Size(51, 22);
			this->VerifyNodo->TabIndex = 4;
			this->VerifyNodo->Text = L"OK";
			this->VerifyNodo->UseVisualStyleBackColor = true;
			this->VerifyNodo->Click += gcnew System::EventHandler(this, &Form::VerifyNodoClick);
			// 
			// NumNodos
			// 
			this->NumNodos->Location = System::Drawing::Point(344, 136);
			this->NumNodos->Name = L"NumNodos";
			this->NumNodos->Size = System::Drawing::Size(44, 22);
			this->NumNodos->TabIndex = 3;
			// 
			// MensajeNodo
			// 
			this->MensajeNodo->AutoSize = true;
			this->MensajeNodo->BackColor = System::Drawing::SystemColors::Control;
			this->MensajeNodo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MensajeNodo->Location = System::Drawing::Point(29, 136);
			this->MensajeNodo->Name = L"MensajeNodo";
			this->MensajeNodo->Size = System::Drawing::Size(309, 20);
			this->MensajeNodo->TabIndex = 2;
			this->MensajeNodo->Text = L"El numero de nodos debe estar entre 10 y 15";
			this->MensajeNodo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Indicacion
			// 
			this->Indicacion->AutoSize = true;
			this->Indicacion->BackColor = System::Drawing::SystemColors::Control;
			this->Indicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indicacion->Location = System::Drawing::Point(29, 99);
			this->Indicacion->Name = L"Indicacion";
			this->Indicacion->Size = System::Drawing::Size(454, 20);
			this->Indicacion->TabIndex = 1;
			this->Indicacion->Text = L"Por favor, sigue las instrucciones para ingresar los datos del arbol";
			this->Indicacion->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Bienvenida
			// 
			this->Bienvenida->AutoSize = true;
			this->Bienvenida->BackColor = System::Drawing::SystemColors::Control;
			this->Bienvenida->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->Bienvenida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bienvenida->Location = System::Drawing::Point(131, 32);
			this->Bienvenida->Name = L"Bienvenida";
			this->Bienvenida->Size = System::Drawing::Size(240, 55);
			this->Bienvenida->TabIndex = 0;
			this->Bienvenida->Text = L"Bienvenido";
			this->Bienvenida->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 681);
			this->Controls->Add(this->Fondo);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->Name = L"Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form";
			this->Fondo->ResumeLayout(false);
			this->Fondo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VerifyNodoClick(System::Object^ sender, System::EventArgs^ e)
	{
		int num;

		if (Int32::TryParse(this->NumNodos->Text, num))
		{
			if (num >= 10 && num <= 15)
			{
				CreateTable(num);
			}
			else
			{
				MessageBox::Show(L"El valor insertado no es valido, ingrese otro valor");
			}
		}
	}

	private: System::Void CreateTable(int num)
	{
		if (dataGridView1 != nullptr || VerificarTabla != nullptr)
		{
			this->Fondo->Controls->Remove(dataGridView1);
			this->Fondo->Controls->Remove(VerificarTabla);
		}

		dataGridView1 = gcnew System::Windows::Forms::DataGridView();
		dataGridView1->Size = System::Drawing::Size(400, 400);
		dataGridView1->Location = System::Drawing::Point((((this->Medio->Location.X - this->Medio->Width) - dataGridView1->Width) / 2), 200);

		DataTable^ dataTable = gcnew DataTable();
		dataTable->Columns->Add("Padre", Int32::typeid);
		dataTable->Columns->Add("Hijo", Int32::typeid);
		for (size_t i = 0; i < num; i++)
		{
			dataTable->Rows->Add();
		}
		dataGridView1->DataSource = dataTable;
		dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font(L"Segoe UI", 24);
		dataGridView1->RowHeadersVisible = false;
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
		dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->Fondo->Controls->Add(dataGridView1);

		// Crea un nuevo botón
		VerificarTabla = gcnew Button();
		VerificarTabla->Text = "Ejecutar Grafo";
		VerificarTabla->Size = System::Drawing::Size(100, 30);
		VerificarTabla->Location = System::Drawing::Point(dataGridView1->Location.X, dataGridView1->Location.Y + dataGridView1->Height + 10);
		VerificarTabla->Click += gcnew EventHandler(this, &Form::VerifyTable);
		this->Fondo->Controls->Add(VerificarTabla);
	}

	private: System::Void VerifyTable(System::Object^ sender, System::EventArgs^ e)
	{
		if (IsDataGridViewFull())
		{
			tree = new NaryTree(1);
			for (int i = 0; i < dataGridView1->RowCount; i++)
			{
				int padre = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
				int hijo = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
				tree->insert(padre, hijo);
			}

			Node* root = tree->getRoot();
			this->ExtensionResult->Text = gcnew String(tree->printExtension(root).c_str());
			this->PreOrdenResult->Text = gcnew String(tree->preOrderTraversal(root).c_str());
			this->InOrderResult->Text = gcnew String(tree->inOrderTraversal(root).c_str());
			this->PostOrdenResult->Text = gcnew String(tree->postOrderTraversal(root).c_str());

			int width = 30;
			int height = 30;
			int x = 727;
			int y = 250;
			int Lastx = x;
			int Lasty = y;
			int level = 0;

			if (g != nullptr)
			{
				System::Drawing::Color backgroundColor = this->Fondo->BackColor;
				g->Clear(backgroundColor);
				delete g;
			}

			g = this->Fondo->CreateGraphics();


			PrintDigraph(root, g, x, y, 0);
		}
		else
		{
			MessageBox::Show("Please fill all cells before executing.");
		}
	}

	private: System::Void DrawEllipse(System::Drawing::Graphics^ g, int x, int y, int width, int height, int number)
	{
		System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black);
		g->DrawEllipse(pen, x, y, width, height);
		g->DrawString(number.ToString(), gcnew System::Drawing::Font("Arial", 10), gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black), x + 5, y + 5);
	}

	private: System::Void DrawLine(System::Drawing::Graphics^ g, int x1, int y1, int x2, int y2)
	{
		System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black);
		g->DrawLine(pen, x1, y1, x2, y2);
	}

	private: System::Void PrintDigraph(Node* node, System::Drawing::Graphics^ g, int x, int y, int level)
	{
		if (node == nullptr) {
			return;
		}

		int width = 30;
		int height = 30;

		DrawEllipse(g, x, y, width, height, node->data);

		if (!node->children.empty())
		{
			int childCount = node->children.size();
			int childX = x;
			int childY = y + height + 30;

			for (auto child : node->children)
			{
				int childWidth = childCount > 1 ? width * childCount : width;
				int childXOffset = (childX - x) + (childWidth / 2);

				DrawLine(g, x + (width / 2), y + height, childX + (width / 2), childY);
				PrintDigraph(child, g, childX, childY, level + 1);

				childX += childWidth;
			}
		}
	}

	bool IsDataGridViewFull() 
	{
		for (int i = 0; i < dataGridView1->RowCount; i++) 
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++) 
			{
				if (dataGridView1->Rows[i]->Cells[j]->Value == nullptr || dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Trim() == "") 
				{
					return false;
				}
			}
		}
		return true;
	}

	private: System::Void Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		
		//Graphics^ g = this->CreateGraphics();

		// Crear un objeto Pen para dibujar
		//System::Drawing::Pen^ pen = gcnew Pen(Color::Blue, 2.0f);

		// Definir un rectángulo en el que se dibujará el óvalo
		//System::Drawing::Rectangle rect(50, 50, 200, 100);

		// Dibujar el óvalo en el formulario
		//e->Graphics->DrawEllipse(pen, rect);
	}
};
}
