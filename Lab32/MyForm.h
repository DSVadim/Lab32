#pragma once


namespace Lab32 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;
	

	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TxX;
	private: System::Windows::Forms::TextBox^ TxY;
	private: System::Windows::Forms::TextBox^ TxX1;
	private: System::Windows::Forms::TextBox^ TxX2;
	private: System::Windows::Forms::TextBox^ TxX3;
	private: System::Windows::Forms::TextBox^ TxY1;
	private: System::Windows::Forms::TextBox^ TxY3;








	private: System::Windows::Forms::TextBox^ TxY2;
	private: System::Windows::Forms::Button^ Res;
	private: System::Windows::Forms::Label^ label9;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TxX = (gcnew System::Windows::Forms::TextBox());
			this->TxY = (gcnew System::Windows::Forms::TextBox());
			this->TxX1 = (gcnew System::Windows::Forms::TextBox());
			this->TxX2 = (gcnew System::Windows::Forms::TextBox());
			this->TxX3 = (gcnew System::Windows::Forms::TextBox());
			this->TxY1 = (gcnew System::Windows::Forms::TextBox());
			this->TxY3 = (gcnew System::Windows::Forms::TextBox());
			this->TxY2 = (gcnew System::Windows::Forms::TextBox());
			this->Res = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(99, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(414, 200);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"X1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"X2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"X3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Y1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Y2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Y3";
			// 
			// TxX
			// 
			this->TxX->Location = System::Drawing::Point(32, 9);
			this->TxX->Name = L"TxX";
			this->TxX->Size = System::Drawing::Size(52, 20);
			this->TxX->TabIndex = 2;
			// 
			// TxY
			// 
			this->TxY->Location = System::Drawing::Point(32, 32);
			this->TxY->Name = L"TxY";
			this->TxY->Size = System::Drawing::Size(52, 20);
			this->TxY->TabIndex = 2;
			// 
			// TxX1
			// 
			this->TxX1->Location = System::Drawing::Point(32, 57);
			this->TxX1->Name = L"TxX1";
			this->TxX1->Size = System::Drawing::Size(52, 20);
			this->TxX1->TabIndex = 2;
			// 
			// TxX2
			// 
			this->TxX2->Location = System::Drawing::Point(32, 80);
			this->TxX2->Name = L"TxX2";
			this->TxX2->Size = System::Drawing::Size(52, 20);
			this->TxX2->TabIndex = 2;
			// 
			// TxX3
			// 
			this->TxX3->Location = System::Drawing::Point(32, 102);
			this->TxX3->Name = L"TxX3";
			this->TxX3->Size = System::Drawing::Size(52, 20);
			this->TxX3->TabIndex = 2;
			// 
			// TxY1
			// 
			this->TxY1->Location = System::Drawing::Point(32, 124);
			this->TxY1->Name = L"TxY1";
			this->TxY1->Size = System::Drawing::Size(52, 20);
			this->TxY1->TabIndex = 2;
			// 
			// TxY3
			// 
			this->TxY3->Location = System::Drawing::Point(32, 174);
			this->TxY3->Name = L"TxY3";
			this->TxY3->Size = System::Drawing::Size(52, 20);
			this->TxY3->TabIndex = 2;
			// 
			// TxY2
			// 
			this->TxY2->Location = System::Drawing::Point(32, 150);
			this->TxY2->Name = L"TxY2";
			this->TxY2->Size = System::Drawing::Size(52, 20);
			this->TxY2->TabIndex = 2;
			// 
			// Res
			// 
			this->Res->Location = System::Drawing::Point(175, 233);
			this->Res->Name = L"Res";
			this->Res->Size = System::Drawing::Size(153, 45);
			this->Res->TabIndex = 3;
			this->Res->Text = L"Дорівнює";
			this->Res->UseVisualStyleBackColor = true;
			this->Res->Click += gcnew System::EventHandler(this, &MyForm::Res_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(344, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 368);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->TxY2);
			this->Controls->Add(this->TxY3);
			this->Controls->Add(this->TxY1);
			this->Controls->Add(this->TxX3);
			this->Controls->Add(this->TxX2);
			this->Controls->Add(this->TxX1);
			this->Controls->Add(this->TxY);
			this->Controls->Add(this->TxX);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Res_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, y, x1, x2, x3, y1, y2, y3, d;
	x = System::Convert::ToDouble(TxX->Text);
	x1 = System::Convert::ToDouble(TxX1->Text);
	x2 = System::Convert::ToDouble(TxX2->Text);
	x3 = System::Convert::ToDouble(TxX3->Text);
	y = System::Convert::ToDouble(TxY->Text);
	y1 = System::Convert::ToDouble(TxY1->Text);
	y2 = System::Convert::ToDouble(TxY2->Text);
	y3 = System::Convert::ToDouble(TxY3->Text);
	if (x == x3) {
		d = y2;
	}
	else if (x2 <= x && x <= x3) {
		d = y2 + ((2*x - x1) / (x3 * x1)) * (y2 - y1);
	}
	else if (x1 <= x && x <= x2) {
		d = y1 - ((2*x - x1) / (x2 * x1)) * (y2 - y3);
	}
	label9->Text = "Результат Y: " + System::Convert::ToString(d);

}
};
}
