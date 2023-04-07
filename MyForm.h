#pragma once
#include<math.h>
namespace lb5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(565, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обчисліть перші 10 значень елементів послідовності, яка утворюється за допомогою "
				L"\r\nтакої рекурентної послідовності, яка утворюється за допомогою такої рекурентно"
				L"ї\r\nформули:\r\n\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(181, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(342, 29);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть a0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введіть a1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 230);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(437, 128);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(213, 314);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(38, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 55);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(38, 537);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 48);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 597);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		double a0, a1, a10;
		a1 = Convert::ToDouble(textBox1->Text);
		a0 = Convert::ToDouble(textBox2->Text);
		if (fabs(a10) > 1)
		{
			textBox4->AppendText("Перші десять елементів послідовності\r\n");
			textBox4->AppendText(Convert::ToString(a0)+"\r\n");
			for (i = 1; i <= 9; i++)
			{

				a0 = a0 + a10;
				textBox4->AppendText(Convert::ToString(a0) + "\r\n");
			}
		}
		else
		{
			textBox4->AppendText("Помилка");
		}
	}
};
}
