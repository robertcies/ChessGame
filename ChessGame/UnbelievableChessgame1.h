#pragma once

namespace ChessGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o UnbelievableChessgame
	/// </summary>
	public ref class UnbelievableChessgame : public System::Windows::Forms::Form
	{
	public:
		UnbelievableChessgame(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}
		/*
	public:
		void DrawRectangleInt(PaintEventArgs^ e)
		{
			// Create pen.
			Pen^ blackPen = gcnew Pen(Color::Black, 3.0f);

			// Create location and size of rectangle.
			int x = 0;
			int y = 0;
			int width = 200;
			int height = 200;

			// Draw rectangle to screen.
			e->Graphics->DrawRectangle(blackPen, x, y, width, height);
		}*/

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~UnbelievableChessgame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Newgame_button;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel1;


	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Newgame_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Newgame_button
			// 
			this->Newgame_button->Location = System::Drawing::Point(2, 0);
			this->Newgame_button->Name = L"Newgame_button";
			this->Newgame_button->Size = System::Drawing::Size(97, 23);
			this->Newgame_button->TabIndex = 0;
			this->Newgame_button->Text = L"New Game";
			this->Newgame_button->UseVisualStyleBackColor = true;
			this->Newgame_button->Click += gcnew System::EventHandler(this, &UnbelievableChessgame::Newgame_button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UnbelievableChessgame::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1158, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 68);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Pause/Start Game";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Location = System::Drawing::Point(856, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Win Ratio Player 1";
			this->label1->Click += gcnew System::EventHandler(this, &UnbelievableChessgame::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(856, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Win Ratio Player 2";
			this->label2->Click += gcnew System::EventHandler(this, &UnbelievableChessgame::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1021, 365);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UnbelievableChessgame::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1021, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 22);
			this->textBox2->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(100, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 550);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UnbelievableChessgame::panel1_Paint_1);
			// 
			// UnbelievableChessgame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1376, 473);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Newgame_button);
			this->HelpButton = true;
			this->Name = L"UnbelievableChessgame";
			this->Text = L"UnbelievableChessgame";
			this->Load += gcnew System::EventHandler(this, &UnbelievableChessgame::UnbelievableChessgame_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UnbelievableChessgame::panel1_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UnbelievableChessgame_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Newgame_button_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	Graphics^ g = e->Graphics;
	for (int j = 0; j < 8; j ++)
	{
		for (int i = 0; i < 4; i++)
		{
			g->FillRectangle(Brushes::White, 50 + i * 100, 50 * j, 50, 50);
			g->DrawRectangle(Pens::Brown, 50 + i * 100, 50 * j, 50, 50);
			g->FillRectangle(Brushes::Black, 0 + i * 100, 50 * j, 50, 50);
			g->DrawRectangle(Pens::Brown, 0 + i * 100, 50 * j, 50, 50);
		}
		j++;
	}
	for (int j = 1; j < 9; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			g->FillRectangle(Brushes::Black, 50 + i * 100, 50 * j, 50, 50);
			g->DrawRectangle(Pens::Brown, 50 + i * 100, 50 * j, 50, 50);
			g->FillRectangle(Brushes::White, 0 + i * 100, 50 * j, 50, 50);
			g->DrawRectangle(Pens::Brown, 0 + i * 100, 50 * j, 50, 50);
		}
		j++;
	}
}
};
}

