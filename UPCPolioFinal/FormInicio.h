#pragma once
#include "FormJuego.h"
#include <string>
#include "Jugador.h"

namespace UPCPolioFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for FormInicio
	/// </summary>
	public ref class FormInicio : public System::Windows::Forms::Form
	{
	public:

		Bitmap ^imgFondo = gcnew Bitmap("Inicio.jpg");
		Bitmap ^btnJugar = gcnew Bitmap("btnJugar.jpg");
		Bitmap ^btnSalir = gcnew Bitmap("btnSalir.jpg");
		Bitmap ^Marco = gcnew Bitmap("Marco.png");
		Bitmap ^imgFondo2 = gcnew Bitmap("Fondo2.jpg");
		Bitmap ^btn1VS1 = gcnew Bitmap("btn11.png");
	private: System::Windows::Forms::GroupBox^  GBJ1;
	public:

	public:
	private: System::Windows::Forms::RadioButton^  RB1barco;
	private: System::Windows::Forms::RadioButton^  RB1Perro;
	private: System::Windows::Forms::RadioButton^  RB1Sombrero;
	private: System::Windows::Forms::RadioButton^  RB1Carreta;
	private: System::Windows::Forms::RadioButton^  RB1Plancha;
	private: System::Windows::Forms::RadioButton^  RB1Carro;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::PictureBox^  PBSombrero;
	private: System::Windows::Forms::PictureBox^  PBBarco;
	private: System::Windows::Forms::PictureBox^  PBCarreta;
	private: System::Windows::Forms::PictureBox^  PBPlancha;
	private: System::Windows::Forms::PictureBox^  PBCarro;
	private: System::Windows::Forms::PictureBox^  PBPerro;
	private: System::Windows::Forms::GroupBox^  GBJ2;

	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::RadioButton^  RB2Perro;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  RB2Barco;
	private: System::Windows::Forms::RadioButton^  RB2Sombrero;
	private: System::Windows::Forms::RadioButton^  RB2Carreta;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  RB2Plancha;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::RadioButton^  RB2Carro;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
			 Bitmap ^btn1VSPC = gcnew Bitmap("btn1PC.png");

	public:
		FormInicio(void)
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
		~FormInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormInicio::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->GBJ1 = (gcnew System::Windows::Forms::GroupBox());
			this->RB1barco = (gcnew System::Windows::Forms::RadioButton());
			this->RB1Perro = (gcnew System::Windows::Forms::RadioButton());
			this->RB1Sombrero = (gcnew System::Windows::Forms::RadioButton());
			this->RB1Carreta = (gcnew System::Windows::Forms::RadioButton());
			this->RB1Plancha = (gcnew System::Windows::Forms::RadioButton());
			this->RB1Carro = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->PBSombrero = (gcnew System::Windows::Forms::PictureBox());
			this->PBBarco = (gcnew System::Windows::Forms::PictureBox());
			this->PBCarreta = (gcnew System::Windows::Forms::PictureBox());
			this->PBPlancha = (gcnew System::Windows::Forms::PictureBox());
			this->PBCarro = (gcnew System::Windows::Forms::PictureBox());
			this->PBPerro = (gcnew System::Windows::Forms::PictureBox());
			this->GBJ2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->RB2Perro = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RB2Barco = (gcnew System::Windows::Forms::RadioButton());
			this->RB2Sombrero = (gcnew System::Windows::Forms::RadioButton());
			this->RB2Carreta = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->RB2Plancha = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->RB2Carro = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->GBJ1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBSombrero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBBarco))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCarreta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPlancha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCarro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPerro))->BeginInit();
			this->GBJ2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormInicio::timer1_Tick);
			// 
			// GBJ1
			// 
			this->GBJ1->BackColor = System::Drawing::Color::Transparent;
			this->GBJ1->Controls->Add(this->RB1barco);
			this->GBJ1->Controls->Add(this->RB1Perro);
			this->GBJ1->Controls->Add(this->RB1Sombrero);
			this->GBJ1->Controls->Add(this->RB1Carreta);
			this->GBJ1->Controls->Add(this->RB1Plancha);
			this->GBJ1->Controls->Add(this->RB1Carro);
			this->GBJ1->Controls->Add(this->label1);
			this->GBJ1->Controls->Add(this->txt1);
			this->GBJ1->Controls->Add(this->PBSombrero);
			this->GBJ1->Controls->Add(this->PBBarco);
			this->GBJ1->Controls->Add(this->PBCarreta);
			this->GBJ1->Controls->Add(this->PBPlancha);
			this->GBJ1->Controls->Add(this->PBCarro);
			this->GBJ1->Controls->Add(this->PBPerro);
			this->GBJ1->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->GBJ1->ForeColor = System::Drawing::Color::White;
			this->GBJ1->Location = System::Drawing::Point(64, 112);
			this->GBJ1->Name = L"GBJ1";
			this->GBJ1->Size = System::Drawing::Size(430, 419);
			this->GBJ1->TabIndex = 51;
			this->GBJ1->TabStop = false;
			this->GBJ1->Text = L"Jugador 1";
			this->GBJ1->Visible = false;
			// 
			// RB1barco
			// 
			this->RB1barco->AutoSize = true;
			this->RB1barco->BackColor = System::Drawing::Color::Transparent;
			this->RB1barco->Location = System::Drawing::Point(85, 243);
			this->RB1barco->Name = L"RB1barco";
			this->RB1barco->Size = System::Drawing::Size(14, 13);
			this->RB1barco->TabIndex = 63;
			this->RB1barco->TabStop = true;
			this->RB1barco->UseVisualStyleBackColor = false;
			// 
			// RB1Perro
			// 
			this->RB1Perro->AutoSize = true;
			this->RB1Perro->BackColor = System::Drawing::Color::Transparent;
			this->RB1Perro->Location = System::Drawing::Point(85, 378);
			this->RB1Perro->Name = L"RB1Perro";
			this->RB1Perro->Size = System::Drawing::Size(14, 13);
			this->RB1Perro->TabIndex = 62;
			this->RB1Perro->TabStop = true;
			this->RB1Perro->UseVisualStyleBackColor = false;
			// 
			// RB1Sombrero
			// 
			this->RB1Sombrero->AutoSize = true;
			this->RB1Sombrero->BackColor = System::Drawing::Color::Transparent;
			this->RB1Sombrero->Location = System::Drawing::Point(330, 378);
			this->RB1Sombrero->Name = L"RB1Sombrero";
			this->RB1Sombrero->Size = System::Drawing::Size(14, 13);
			this->RB1Sombrero->TabIndex = 61;
			this->RB1Sombrero->TabStop = true;
			this->RB1Sombrero->UseVisualStyleBackColor = false;
			// 
			// RB1Carreta
			// 
			this->RB1Carreta->AutoSize = true;
			this->RB1Carreta->BackColor = System::Drawing::Color::Transparent;
			this->RB1Carreta->Location = System::Drawing::Point(201, 241);
			this->RB1Carreta->Name = L"RB1Carreta";
			this->RB1Carreta->Size = System::Drawing::Size(14, 13);
			this->RB1Carreta->TabIndex = 60;
			this->RB1Carreta->TabStop = true;
			this->RB1Carreta->UseVisualStyleBackColor = false;
			// 
			// RB1Plancha
			// 
			this->RB1Plancha->AutoSize = true;
			this->RB1Plancha->BackColor = System::Drawing::Color::Transparent;
			this->RB1Plancha->Location = System::Drawing::Point(205, 378);
			this->RB1Plancha->Name = L"RB1Plancha";
			this->RB1Plancha->Size = System::Drawing::Size(14, 13);
			this->RB1Plancha->TabIndex = 59;
			this->RB1Plancha->TabStop = true;
			this->RB1Plancha->UseVisualStyleBackColor = false;
			// 
			// RB1Carro
			// 
			this->RB1Carro->AutoSize = true;
			this->RB1Carro->BackColor = System::Drawing::Color::Transparent;
			this->RB1Carro->Location = System::Drawing::Point(326, 241);
			this->RB1Carro->Name = L"RB1Carro";
			this->RB1Carro->Size = System::Drawing::Size(14, 13);
			this->RB1Carro->TabIndex = 58;
			this->RB1Carro->TabStop = true;
			this->RB1Carro->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 35);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Nombre: ";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->txt1->Location = System::Drawing::Point(180, 53);
			this->txt1->MaxLength = 11;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(205, 42);
			this->txt1->TabIndex = 56;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PBSombrero
			// 
			this->PBSombrero->BackColor = System::Drawing::Color::Transparent;
			this->PBSombrero->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBSombrero.Image")));
			this->PBSombrero->Location = System::Drawing::Point(286, 278);
			this->PBSombrero->Name = L"PBSombrero";
			this->PBSombrero->Size = System::Drawing::Size(100, 94);
			this->PBSombrero->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBSombrero->TabIndex = 55;
			this->PBSombrero->TabStop = false;
			// 
			// PBBarco
			// 
			this->PBBarco->BackColor = System::Drawing::Color::Transparent;
			this->PBBarco->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBBarco.Image")));
			this->PBBarco->Location = System::Drawing::Point(36, 143);
			this->PBBarco->Name = L"PBBarco";
			this->PBBarco->Size = System::Drawing::Size(100, 94);
			this->PBBarco->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBBarco->TabIndex = 50;
			this->PBBarco->TabStop = false;
			// 
			// PBCarreta
			// 
			this->PBCarreta->BackColor = System::Drawing::Color::Transparent;
			this->PBCarreta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBCarreta.Image")));
			this->PBCarreta->Location = System::Drawing::Point(157, 143);
			this->PBCarreta->Name = L"PBCarreta";
			this->PBCarreta->Size = System::Drawing::Size(100, 94);
			this->PBCarreta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBCarreta->TabIndex = 51;
			this->PBCarreta->TabStop = false;
			// 
			// PBPlancha
			// 
			this->PBPlancha->BackColor = System::Drawing::Color::Transparent;
			this->PBPlancha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBPlancha.Image")));
			this->PBPlancha->Location = System::Drawing::Point(161, 278);
			this->PBPlancha->Name = L"PBPlancha";
			this->PBPlancha->Size = System::Drawing::Size(100, 94);
			this->PBPlancha->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBPlancha->TabIndex = 54;
			this->PBPlancha->TabStop = false;
			// 
			// PBCarro
			// 
			this->PBCarro->BackColor = System::Drawing::Color::Transparent;
			this->PBCarro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBCarro.Image")));
			this->PBCarro->Location = System::Drawing::Point(272, 143);
			this->PBCarro->Name = L"PBCarro";
			this->PBCarro->Size = System::Drawing::Size(124, 94);
			this->PBCarro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBCarro->TabIndex = 52;
			this->PBCarro->TabStop = false;
			// 
			// PBPerro
			// 
			this->PBPerro->BackColor = System::Drawing::Color::Transparent;
			this->PBPerro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBPerro.Image")));
			this->PBPerro->Location = System::Drawing::Point(40, 278);
			this->PBPerro->Name = L"PBPerro";
			this->PBPerro->Size = System::Drawing::Size(100, 94);
			this->PBPerro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBPerro->TabIndex = 53;
			this->PBPerro->TabStop = false;
			// 
			// GBJ2
			// 
			this->GBJ2->BackColor = System::Drawing::Color::Transparent;
			this->GBJ2->Controls->Add(this->txt2);
			this->GBJ2->Controls->Add(this->RB2Perro);
			this->GBJ2->Controls->Add(this->label2);
			this->GBJ2->Controls->Add(this->RB2Barco);
			this->GBJ2->Controls->Add(this->RB2Sombrero);
			this->GBJ2->Controls->Add(this->RB2Carreta);
			this->GBJ2->Controls->Add(this->pictureBox1);
			this->GBJ2->Controls->Add(this->RB2Plancha);
			this->GBJ2->Controls->Add(this->pictureBox2);
			this->GBJ2->Controls->Add(this->RB2Carro);
			this->GBJ2->Controls->Add(this->pictureBox3);
			this->GBJ2->Controls->Add(this->pictureBox4);
			this->GBJ2->Controls->Add(this->pictureBox5);
			this->GBJ2->Controls->Add(this->pictureBox6);
			this->GBJ2->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->GBJ2->ForeColor = System::Drawing::Color::White;
			this->GBJ2->Location = System::Drawing::Point(545, 112);
			this->GBJ2->Name = L"GBJ2";
			this->GBJ2->Size = System::Drawing::Size(430, 419);
			this->GBJ2->TabIndex = 52;
			this->GBJ2->TabStop = false;
			this->GBJ2->Text = L"Jugador 2";
			this->GBJ2->Visible = false;
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->txt2->Location = System::Drawing::Point(180, 53);
			this->txt2->MaxLength = 11;
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(205, 42);
			this->txt2->TabIndex = 42;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RB2Perro
			// 
			this->RB2Perro->AutoSize = true;
			this->RB2Perro->BackColor = System::Drawing::Color::Transparent;
			this->RB2Perro->Location = System::Drawing::Point(82, 378);
			this->RB2Perro->Name = L"RB2Perro";
			this->RB2Perro->Size = System::Drawing::Size(14, 13);
			this->RB2Perro->TabIndex = 49;
			this->RB2Perro->TabStop = true;
			this->RB2Perro->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 20.25F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(39, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 35);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Nombre: ";
			// 
			// RB2Barco
			// 
			this->RB2Barco->AutoSize = true;
			this->RB2Barco->BackColor = System::Drawing::Color::Transparent;
			this->RB2Barco->Location = System::Drawing::Point(82, 241);
			this->RB2Barco->Name = L"RB2Barco";
			this->RB2Barco->Size = System::Drawing::Size(14, 13);
			this->RB2Barco->TabIndex = 48;
			this->RB2Barco->TabStop = true;
			this->RB2Barco->UseVisualStyleBackColor = false;
			// 
			// RB2Sombrero
			// 
			this->RB2Sombrero->AutoSize = true;
			this->RB2Sombrero->BackColor = System::Drawing::Color::Transparent;
			this->RB2Sombrero->Location = System::Drawing::Point(327, 378);
			this->RB2Sombrero->Name = L"RB2Sombrero";
			this->RB2Sombrero->Size = System::Drawing::Size(14, 13);
			this->RB2Sombrero->TabIndex = 47;
			this->RB2Sombrero->TabStop = true;
			this->RB2Sombrero->UseVisualStyleBackColor = false;
			// 
			// RB2Carreta
			// 
			this->RB2Carreta->AutoSize = true;
			this->RB2Carreta->BackColor = System::Drawing::Color::Transparent;
			this->RB2Carreta->Location = System::Drawing::Point(202, 241);
			this->RB2Carreta->Name = L"RB2Carreta";
			this->RB2Carreta->Size = System::Drawing::Size(14, 13);
			this->RB2Carreta->TabIndex = 46;
			this->RB2Carreta->TabStop = true;
			this->RB2Carreta->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(281, 278);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// RB2Plancha
			// 
			this->RB2Plancha->AutoSize = true;
			this->RB2Plancha->BackColor = System::Drawing::Color::Transparent;
			this->RB2Plancha->Location = System::Drawing::Point(202, 378);
			this->RB2Plancha->Name = L"RB2Plancha";
			this->RB2Plancha->Size = System::Drawing::Size(14, 13);
			this->RB2Plancha->TabIndex = 45;
			this->RB2Plancha->TabStop = true;
			this->RB2Plancha->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(35, 143);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 94);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			// 
			// RB2Carro
			// 
			this->RB2Carro->AutoSize = true;
			this->RB2Carro->BackColor = System::Drawing::Color::Transparent;
			this->RB2Carro->Location = System::Drawing::Point(327, 241);
			this->RB2Carro->Name = L"RB2Carro";
			this->RB2Carro->Size = System::Drawing::Size(14, 13);
			this->RB2Carro->TabIndex = 44;
			this->RB2Carro->TabStop = true;
			this->RB2Carro->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(156, 143);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 94);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(156, 278);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 94);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 40;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(271, 143);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(124, 94);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 38;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(35, 278);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 94);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 39;
			this->pictureBox6->TabStop = false;
			// 
			// FormInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1032, 605);
			this->Controls->Add(this->GBJ2);
			this->Controls->Add(this->GBJ1);
			this->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPCPolio";
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FormInicio::FormInicio_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormInicio::FormInicio_MouseMove);
			this->GBJ1->ResumeLayout(false);
			this->GBJ1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBSombrero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBBarco))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCarreta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPlancha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBCarro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPerro))->EndInit();
			this->GBJ2->ResumeLayout(false);
			this->GBJ2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

		bool btnj = false, btns = false, uvu = false, uvpc = false;
		int etapa = 0; int c = 0; bool op1 = false, op2 = false; bool vsPC = false;
		bool clicked = false;

		string SeleccionFicha1() {

			string F1;
			if (RB1barco->Checked == true) { F1 = "Barco"; }
			else if (RB1Carreta->Checked == true) { F1 = "Carreta"; }
			else if (RB1Carro->Checked == true) { F1 = "Carro"; }
			else if (RB1Perro->Checked == true) { F1 = "Perro"; }
			else if (RB1Plancha->Checked == true) { F1 = "Plancha"; }
			else if (RB1Sombrero->Checked == true) { F1 = "Sombrero"; }
			else { F1 = ""; }
			return F1;
		}

		string SeleccionFicha2() {

			string F2;
			if (RB2Barco->Checked == true) { F2 = "Barco"; }
			else if (RB2Carreta->Checked == true) { F2 = "Carreta"; }
			else if (RB2Carro->Checked == true) { F2 = "Carro"; }
			else if (RB2Perro->Checked == true) { F2 = "Perro"; }
			else if (RB2Plancha->Checked == true) { F2 = "Plancha"; }
			else if (RB2Sombrero->Checked == true) { F2 = "Sombrero"; }
			else { F2 = ""; }
			return F2;
		}

		void GenerarPcFicha() {

			string F2; Random r; int n = r.Next(0, 6);
			if (n == 0) { RB2Barco->Checked = true; }
			else if (n == 1) { RB2Carreta->Checked = true; }
			else if (n == 2) { RB2Carro->Checked = true; }
			else if (n == 3) { RB2Perro->Checked = true; }
			else if (n == 4) { RB2Plancha->Checked = true; }
			else if (n == 5) { RB2Sombrero->Checked = true; }
		}

		void LimpiarRB() {
			RB2Barco->Checked = false;
			RB2Carreta->Checked = false;
			RB2Carro->Checked = false;
			RB2Perro->Checked = false;
			RB2Plancha->Checked = false;
			RB2Sombrero->Checked = false;
		}

		void ValidarFichas() {

			if (vsPC) {

				RB1barco->Enabled = true; RB1Carreta->Enabled = true; RB1Carro->Enabled = true;
				RB1Perro->Enabled = true; RB1Plancha->Enabled = true; RB1Sombrero->Enabled = true;
			}
			else {

				RB2Barco->Enabled = true; RB2Carreta->Enabled = true; RB2Carro->Enabled = true;
				RB2Perro->Enabled = true; RB2Plancha->Enabled = true; RB2Sombrero->Enabled = true;
				RB1barco->Enabled = true; RB1Carreta->Enabled = true; RB1Carro->Enabled = true;
				RB1Perro->Enabled = true; RB1Plancha->Enabled = true; RB1Sombrero->Enabled = true;
			}

			if (RB1barco->Checked == true) { RB2Barco->Checked = false; RB2Barco->Enabled = false; }
			else if (RB1Carreta->Checked == true) { RB2Carreta->Checked = false; RB2Carreta->Enabled = false; }
			else if (RB1Carro->Checked == true) { RB2Carro->Checked = false; RB2Carro->Enabled = false; }
			else if (RB1Perro->Checked == true) { RB2Perro->Checked = false; RB2Perro->Enabled = false; }
			else if (RB1Plancha->Checked == true) { RB2Plancha->Checked = false; RB2Plancha->Enabled = false; }
			else if (RB1Sombrero->Checked == true) { RB2Sombrero->Checked = false; RB2Sombrero->Enabled = false; }

			if (RB2Barco->Checked == true) { RB1barco->Checked = false; RB1barco->Enabled = false; }
			else if (RB2Carreta->Checked == true) { RB1Carreta->Checked = false; RB1Carreta->Enabled = false; }
			else if (RB2Carro->Checked == true) { RB1Carro->Checked = false; RB1Carro->Enabled = false; }
			else if (RB2Perro->Checked == true) { RB1Perro->Checked = false; RB1Perro->Enabled = false; }
			else if (RB2Plancha->Checked == true) { RB1Plancha->Checked = false; RB1Plancha->Enabled = false; }
			else if (RB2Sombrero->Checked == true) { RB1Sombrero->Checked = false; RB1Sombrero->Enabled = false; }
		}
		
		void ActivarJ1() {

			RB1barco->Enabled = true; RB1Carreta->Enabled = true; RB1Carro->Enabled = true;
			RB1Perro->Enabled = true; RB1Plancha->Enabled = true; RB1Sombrero->Enabled = true;
			txt1->Enabled = true; label1->Enabled = true;
		}

		void ActivarJ2() {

			RB2Barco->Enabled = true; RB2Carreta->Enabled = true; RB2Carro->Enabled = true;
			RB2Perro->Enabled = true; RB2Plancha->Enabled = true; RB2Sombrero->Enabled = true;
			txt2->Enabled = true; label2->Enabled = true;
		}

		void DesactivarJ1() {

			RB1barco->Enabled = false; RB1Carreta->Enabled = false; RB1Carro->Enabled = false;
			RB1Perro->Enabled = false; RB1Plancha->Enabled = false; RB1Sombrero->Enabled = false;
			txt1->Enabled = false; label1->Enabled = false; 
		}

		void DesactivarJ2() {

			RB2Barco->Enabled = false; RB2Carreta->Enabled = false; RB2Carro->Enabled = false;
			RB2Perro->Enabled = false; RB2Plancha->Enabled = false; RB2Sombrero->Enabled = false;
			txt2->Enabled = false; label2->Enabled = false;
		}

		void GeneraForm() {

			if (RB1barco->Checked == true || RB1Carreta->Checked == true || RB1Carro->Checked == true ||
				RB1Perro->Checked == true || RB1Plancha->Checked == true || RB1Sombrero->Checked == true) {

				if (RB2Barco->Checked == true || RB2Carreta->Checked == true || RB2Carro->Checked == true ||
					RB2Perro->Checked == true || RB2Plancha->Checked == true || RB2Sombrero->Checked == true) {
					
					if (txt1->Text != "" && txt2->Text != "") {
						string Ficha1 = SeleccionFicha1();
						string Ficha2 = SeleccionFicha2();

						String ^N1 = gcnew String(txt1->Text); char *N1a = new char[N1->Length];
						sprintf(N1a, "%s", N1); string NJugador1 = N1a;
						CJugador *J1 = new CJugador(NJugador1, Ficha1);

						String ^N2 = gcnew String(txt2->Text); char *N2a = new char[N2->Length];
						sprintf(N2a, "%s", N2); string NJugador2 = N2a;
						CJugador *J2 = new CJugador(NJugador2, Ficha2);

						if (NJugador1 == NJugador2) {
							MessageBox::Show("Los jugadores no pueden tener el mismo nombre.", "Advertencia", 
								MessageBoxButtons::OK, MessageBoxIcon::Stop); return;
						}
						else if (NJugador1[0] == ' ' || NJugador2[0] == ' ') {
							MessageBox::Show("El nombre del jugador no puede comenzar con espacios.", "Advertencia",
								MessageBoxButtons::OK, MessageBoxIcon::Stop); return;
						}
						else {
							FormJuego ^juego = gcnew FormJuego(J1, J2);
							this->Hide(); juego->ShowDialog(); this->Close();
						}
					}
					else {
						MessageBox::Show("Ambos jugadores deben tener un nombre.", "Datos Incompletos", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						return;
					}
				}
				else {
					MessageBox::Show("El jugador 2 debe tener una ficha.", "Datos Incompletos", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					return;
				}
			}
			else {
				MessageBox::Show("El jugador 1 debe tener una ficha", "Datos Incompletos", MessageBoxButtons::OKCancel, MessageBoxIcon::Stop);
				return;
			}
		}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::Black);

		if (etapa == 0) {

			buffer->Graphics->DrawImage(imgFondo, ClientRectangle);
			buffer->Graphics->DrawImage(btnJugar, 760, 50, 545 / 3, 121 / 3);
			buffer->Graphics->DrawImage(btnSalir, 760, 140, 545 / 3, 121 / 3);
			if (btnj) { buffer->Graphics->DrawImage(Marco, 757, 46, (545 / 3) + 6, (121 / 3) + 6); }
			else if (btns) { buffer->Graphics->DrawImage(Marco, 757, 136, (545 / 3) + 6, (121 / 3) + 6); }
		}
		if (etapa == 1) {

			buffer->Graphics->DrawImage(imgFondo2, ClientRectangle);
			buffer->Graphics->DrawImage(btn1VSPC, 200, 40, 545 / 3, 121 / 3);
			buffer->Graphics->DrawImage(btn1VS1, 664, 40, 545 / 3, 121 / 3);
			buffer->Graphics->DrawImage(btnJugar, 424, 549, 545 / 3, 121 / 3);
			if (btnj) { buffer->Graphics->DrawImage(Marco, 421, 544, (545 / 3) + 6, (121 / 3) + 6); }

			if (uvu) { buffer->Graphics->DrawImage(Marco, 199, 38, (545 / 3) + 2, (121 / 3) + 2); }
			else if (uvpc) { buffer->Graphics->DrawImage(Marco, 662, 38, (545 / 3) + 2, (121 / 3) + 2); }

			GBJ1->Visible = true; GBJ2->Visible = true;

			if (op1) {
				txt2->Text = "Mr. Monopoly"; GenerarPcFicha(); ActivarJ1(); DesactivarJ2(); op1 = false; vsPC = true;
			}
			if (op2) {
				txt2->Text = ""; LimpiarRB(); ActivarJ1(); ActivarJ2(); op2 = false; vsPC = false;
			}
			if (clicked) { ValidarFichas(); }
		}

		buffer->Render(g);

		delete buffer, espacio, g;
	}
	private: System::Void FormInicio_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (etapa == 0) {

			if (e->X > 760 && e->X < 947 && e->Y > 50 && e->Y < 90) {
				btnj = true;
			}
			else if (e->X > 760 && e->X < 947 && e->Y > 140 && e->Y < 190) {
				btns = true;
			}
			else {
				btnj = btns = false;
			}
		}
		if (etapa == 1) {

			if (e->X > 424 && e->X < 620 && e->Y > 549 && e->Y < 589) {
				btnj = true;
			}
			else {
				btnj = false;
			}
		}
	}
	private: System::Void FormInicio_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (etapa == 0) {

			if (e->X > 760 && e->X < 947 && e->Y > 50 && e->Y < 90) {
				etapa = 1; btnj = btns = false; DesactivarJ1(); DesactivarJ2();
			}
			else if (e->X > 760 && e->X < 947 && e->Y > 140 && e->Y < 190) {
				this->Close();
			}
		}

		if (etapa == 1) {

			if (e->X > 200 && e->X < 381 && e->Y > 40 && e->Y < 80) {
				uvu = true; uvpc = false;  op1 = true; op2 = false; clicked = true;
			}
			else if (e->X > 664 && e->X < 825 && e->Y > 40 && e->Y < 88) {
				uvpc = true; uvu = false;  op1 = false; op2 = true; clicked = true;
			}

			if (e->X > 424 && e->X < 620 && e->Y > 549 && e->Y < 589) {
				GeneraForm();
			}
		}
	}
};
}