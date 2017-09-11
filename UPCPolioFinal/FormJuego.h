#pragma once
#include <fstream>
#include <sstream>
#include <string>
#include "Gestor.h"
#include "Jugador.h"
#include "FormCupon.h"
#include "FormMochila.h"

namespace UPCPolioFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for FormJuego
	/// </summary>
	public ref class FormJuego : public System::Windows::Forms::Form
	{
	private:

		CGestor *oJuego;
		Bitmap ^imgFondo = gcnew Bitmap("Fondo3.jpg");
		Bitmap ^imgTablero = gcnew Bitmap("Tablero.png");
		Bitmap ^imgBarco = gcnew Bitmap("Barco.png");
		Bitmap ^imgPerro = gcnew Bitmap("Perro.png");
		Bitmap ^imgCarreta = gcnew Bitmap("Carreta.png");
		Bitmap ^imgPlancha = gcnew Bitmap("Plancha.png");
		Bitmap ^imgCarro = gcnew Bitmap("Carro.png");
		Bitmap ^imgSombrero = gcnew Bitmap("Sombrero.png");
		Bitmap ^imgBarcoilu = gcnew Bitmap("Barcoilu.png");
		Bitmap ^imgPerroilu = gcnew Bitmap("Perroilu.png");
		Bitmap ^imgCarretailu = gcnew Bitmap("Carretailu.png");
		Bitmap ^imgPlanchailu = gcnew Bitmap("Planchailu.png");
		Bitmap ^imgCarroilu = gcnew Bitmap("Carroilu.png");
		Bitmap ^imgSombreroilu = gcnew Bitmap("Sombreroilu.png");
		bool UnJugador = false;

	private: System::Windows::Forms::PictureBox^  PBDado1;
	private: System::Windows::Forms::PictureBox^  PBDado2;
	private: System::Windows::Forms::PictureBox^  PBDado3;
	private: System::Windows::Forms::PictureBox^  PBDado4;
	private: System::Windows::Forms::PictureBox^  PBDado5;

	private: System::Windows::Forms::Button^  btnDado;
	private: System::Windows::Forms::Label^  lblJugador;
	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::Button^  btnTerminarT;
	private: System::Windows::Forms::PictureBox^  PBDado6;
	private: System::Windows::Forms::Panel^  GBCasilla;

	private: System::Windows::Forms::Label^  lblDueno;
	private: System::Windows::Forms::Label^  lblDProp;
	private: System::Windows::Forms::Button^  btnComprar;
	private: System::Windows::Forms::Button^  btnDerechoDePaso;
	private: System::Windows::Forms::PictureBox^  PBPropiedad;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnVerProp;
	private: System::Windows::Forms::Button^  btnRendirse;
	private: System::Windows::Forms::Label^  lblPropiedades;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblDinero;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btnPenalidad;
	private: System::Windows::Forms::Button^  btnPagarImpuestos;
	private: System::Windows::Forms::Button^  btnCupon;
	private: System::Windows::Forms::Button^  btnEjecutar;
	private: System::Windows::Forms::PictureBox^  PBGracias;






	private: System::Windows::Forms::PictureBox^  PBDado;

	public:

		FormJuego(CJugador *obj1, CJugador *obj2)
		{
			InitializeComponent();
			oJuego = new CGestor(obj1, obj2);

			if (obj2->Get_Nombre() == "Mr. Monopoly") {
				UnJugador = true;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormJuego()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormJuego::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->PBDado = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado1 = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado2 = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado3 = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado4 = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado5 = (gcnew System::Windows::Forms::PictureBox());
			this->PBDado6 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDado = (gcnew System::Windows::Forms::Button());
			this->lblJugador = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTerminarT = (gcnew System::Windows::Forms::Button());
			this->GBCasilla = (gcnew System::Windows::Forms::Panel());
			this->btnPenalidad = (gcnew System::Windows::Forms::Button());
			this->btnCupon = (gcnew System::Windows::Forms::Button());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->btnPagarImpuestos = (gcnew System::Windows::Forms::Button());
			this->PBPropiedad = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblDueno = (gcnew System::Windows::Forms::Label());
			this->lblDProp = (gcnew System::Windows::Forms::Label());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->btnDerechoDePaso = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnVerProp = (gcnew System::Windows::Forms::Button());
			this->btnRendirse = (gcnew System::Windows::Forms::Button());
			this->lblPropiedades = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblDinero = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PBGracias = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado6))->BeginInit();
			this->GBCasilla->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPropiedad))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBGracias))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormJuego::timer1_Tick);
			// 
			// PBDado
			// 
			this->PBDado->BackColor = System::Drawing::Color::Transparent;
			this->PBDado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado.Image")));
			this->PBDado->Location = System::Drawing::Point(515, 576);
			this->PBDado->Name = L"PBDado";
			this->PBDado->Size = System::Drawing::Size(88, 88);
			this->PBDado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado->TabIndex = 0;
			this->PBDado->TabStop = false;
			this->PBDado->Visible = false;
			// 
			// PBDado1
			// 
			this->PBDado1->BackColor = System::Drawing::Color::Transparent;
			this->PBDado1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado1.Image")));
			this->PBDado1->Location = System::Drawing::Point(515, 576);
			this->PBDado1->Name = L"PBDado1";
			this->PBDado1->Size = System::Drawing::Size(88, 88);
			this->PBDado1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado1->TabIndex = 1;
			this->PBDado1->TabStop = false;
			this->PBDado1->Visible = false;
			// 
			// PBDado2
			// 
			this->PBDado2->BackColor = System::Drawing::Color::Transparent;
			this->PBDado2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado2.Image")));
			this->PBDado2->Location = System::Drawing::Point(515, 576);
			this->PBDado2->Name = L"PBDado2";
			this->PBDado2->Size = System::Drawing::Size(88, 88);
			this->PBDado2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado2->TabIndex = 2;
			this->PBDado2->TabStop = false;
			this->PBDado2->Visible = false;
			// 
			// PBDado3
			// 
			this->PBDado3->BackColor = System::Drawing::Color::Transparent;
			this->PBDado3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado3.Image")));
			this->PBDado3->Location = System::Drawing::Point(515, 576);
			this->PBDado3->Name = L"PBDado3";
			this->PBDado3->Size = System::Drawing::Size(88, 88);
			this->PBDado3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado3->TabIndex = 3;
			this->PBDado3->TabStop = false;
			this->PBDado3->Visible = false;
			// 
			// PBDado4
			// 
			this->PBDado4->BackColor = System::Drawing::Color::Transparent;
			this->PBDado4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado4.Image")));
			this->PBDado4->Location = System::Drawing::Point(515, 576);
			this->PBDado4->Name = L"PBDado4";
			this->PBDado4->Size = System::Drawing::Size(88, 88);
			this->PBDado4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado4->TabIndex = 4;
			this->PBDado4->TabStop = false;
			this->PBDado4->Visible = false;
			// 
			// PBDado5
			// 
			this->PBDado5->BackColor = System::Drawing::Color::Transparent;
			this->PBDado5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado5.Image")));
			this->PBDado5->Location = System::Drawing::Point(515, 576);
			this->PBDado5->Name = L"PBDado5";
			this->PBDado5->Size = System::Drawing::Size(88, 88);
			this->PBDado5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado5->TabIndex = 5;
			this->PBDado5->TabStop = false;
			this->PBDado5->Visible = false;
			// 
			// PBDado6
			// 
			this->PBDado6->BackColor = System::Drawing::Color::Transparent;
			this->PBDado6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDado6.Image")));
			this->PBDado6->Location = System::Drawing::Point(515, 576);
			this->PBDado6->Name = L"PBDado6";
			this->PBDado6->Size = System::Drawing::Size(88, 88);
			this->PBDado6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PBDado6->TabIndex = 6;
			this->PBDado6->TabStop = false;
			this->PBDado6->Visible = false;
			// 
			// btnDado
			// 
			this->btnDado->BackColor = System::Drawing::Color::Orange;
			this->btnDado->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDado->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnDado->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnDado->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDado->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDado->Location = System::Drawing::Point(319, 588);
			this->btnDado->Name = L"btnDado";
			this->btnDado->Size = System::Drawing::Size(171, 67);
			this->btnDado->TabIndex = 7;
			this->btnDado->Text = L"Lanzar \r\ndado";
			this->btnDado->UseVisualStyleBackColor = false;
			this->btnDado->Click += gcnew System::EventHandler(this, &FormJuego::btnDado_Click);
			// 
			// lblJugador
			// 
			this->lblJugador->BackColor = System::Drawing::Color::Transparent;
			this->lblJugador->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblJugador->ForeColor = System::Drawing::Color::GhostWhite;
			this->lblJugador->Location = System::Drawing::Point(95, 622);
			this->lblJugador->Name = L"lblJugador";
			this->lblJugador->Size = System::Drawing::Size(224, 31);
			this->lblJugador->TabIndex = 8;
			this->lblJugador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::GhostWhite;
			this->label1->Location = System::Drawing::Point(150, 587);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 31);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Turno de";
			// 
			// btnTerminarT
			// 
			this->btnTerminarT->BackColor = System::Drawing::Color::Orange;
			this->btnTerminarT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTerminarT->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnTerminarT->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTerminarT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTerminarT->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTerminarT->Location = System::Drawing::Point(635, 588);
			this->btnTerminarT->Name = L"btnTerminarT";
			this->btnTerminarT->Size = System::Drawing::Size(171, 67);
			this->btnTerminarT->TabIndex = 12;
			this->btnTerminarT->Text = L"Terminar Turno";
			this->btnTerminarT->UseVisualStyleBackColor = false;
			this->btnTerminarT->Click += gcnew System::EventHandler(this, &FormJuego::btnTerminarT_Click);
			// 
			// GBCasilla
			// 
			this->GBCasilla->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->GBCasilla->Controls->Add(this->btnPenalidad);
			this->GBCasilla->Controls->Add(this->btnCupon);
			this->GBCasilla->Controls->Add(this->btnEjecutar);
			this->GBCasilla->Controls->Add(this->btnPagarImpuestos);
			this->GBCasilla->Controls->Add(this->PBPropiedad);
			this->GBCasilla->Controls->Add(this->label2);
			this->GBCasilla->Controls->Add(this->lblDueno);
			this->GBCasilla->Controls->Add(this->lblDProp);
			this->GBCasilla->Controls->Add(this->btnComprar);
			this->GBCasilla->Controls->Add(this->btnDerechoDePaso);
			this->GBCasilla->Location = System::Drawing::Point(832, 13);
			this->GBCasilla->Name = L"GBCasilla";
			this->GBCasilla->Size = System::Drawing::Size(502, 315);
			this->GBCasilla->TabIndex = 13;
			// 
			// btnPenalidad
			// 
			this->btnPenalidad->BackColor = System::Drawing::Color::Red;
			this->btnPenalidad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPenalidad->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnPenalidad->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnPenalidad->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPenalidad->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPenalidad->ForeColor = System::Drawing::Color::Black;
			this->btnPenalidad->Location = System::Drawing::Point(306, 119);
			this->btnPenalidad->Name = L"btnPenalidad";
			this->btnPenalidad->Size = System::Drawing::Size(171, 67);
			this->btnPenalidad->TabIndex = 25;
			this->btnPenalidad->Text = L"Pagar Penalidad";
			this->btnPenalidad->UseVisualStyleBackColor = false;
			this->btnPenalidad->Visible = false;
			this->btnPenalidad->Click += gcnew System::EventHandler(this, &FormJuego::btnPenalidad_Click);
			// 
			// btnCupon
			// 
			this->btnCupon->BackColor = System::Drawing::Color::Red;
			this->btnCupon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCupon->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnCupon->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnCupon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCupon->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCupon->ForeColor = System::Drawing::Color::Black;
			this->btnCupon->Location = System::Drawing::Point(272, 71);
			this->btnCupon->Name = L"btnCupon";
			this->btnCupon->Size = System::Drawing::Size(171, 67);
			this->btnCupon->TabIndex = 23;
			this->btnCupon->Text = L"Sacar Cupón";
			this->btnCupon->UseVisualStyleBackColor = false;
			this->btnCupon->Visible = false;
			this->btnCupon->Click += gcnew System::EventHandler(this, &FormJuego::btnCupon_Click);
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::Color::LightGray;
			this->btnEjecutar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEjecutar->Enabled = false;
			this->btnEjecutar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnEjecutar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnEjecutar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->ForeColor = System::Drawing::Color::Black;
			this->btnEjecutar->Location = System::Drawing::Point(272, 186);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(171, 67);
			this->btnEjecutar->TabIndex = 26;
			this->btnEjecutar->Text = L"Ejecutar Cupón";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Visible = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &FormJuego::btnEjecutar_Click);
			// 
			// btnPagarImpuestos
			// 
			this->btnPagarImpuestos->BackColor = System::Drawing::Color::Red;
			this->btnPagarImpuestos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPagarImpuestos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnPagarImpuestos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnPagarImpuestos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPagarImpuestos->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPagarImpuestos->ForeColor = System::Drawing::Color::Black;
			this->btnPagarImpuestos->Location = System::Drawing::Point(272, 119);
			this->btnPagarImpuestos->Name = L"btnPagarImpuestos";
			this->btnPagarImpuestos->Size = System::Drawing::Size(171, 67);
			this->btnPagarImpuestos->TabIndex = 24;
			this->btnPagarImpuestos->Text = L"Pagar Impuestos";
			this->btnPagarImpuestos->UseVisualStyleBackColor = false;
			this->btnPagarImpuestos->Visible = false;
			this->btnPagarImpuestos->Click += gcnew System::EventHandler(this, &FormJuego::btnPagarImpuestos_Click);
			// 
			// PBPropiedad
			// 
			this->PBPropiedad->BackColor = System::Drawing::Color::Transparent;
			this->PBPropiedad->Location = System::Drawing::Point(24, 35);
			this->PBPropiedad->Name = L"PBPropiedad";
			this->PBPropiedad->Size = System::Drawing::Size(184, 266);
			this->PBPropiedad->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBPropiedad->TabIndex = 17;
			this->PBPropiedad->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(502, 31);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Casilla";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblDueno
			// 
			this->lblDueno->BackColor = System::Drawing::Color::Transparent;
			this->lblDueno->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDueno->ForeColor = System::Drawing::Color::Black;
			this->lblDueno->Location = System::Drawing::Point(235, 80);
			this->lblDueno->Name = L"lblDueno";
			this->lblDueno->Size = System::Drawing::Size(251, 31);
			this->lblDueno->TabIndex = 20;
			this->lblDueno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblDProp
			// 
			this->lblDProp->BackColor = System::Drawing::Color::Transparent;
			this->lblDProp->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDProp->ForeColor = System::Drawing::Color::Black;
			this->lblDProp->Location = System::Drawing::Point(278, 43);
			this->lblDProp->Name = L"lblDProp";
			this->lblDProp->Size = System::Drawing::Size(158, 31);
			this->lblDProp->TabIndex = 21;
			this->lblDProp->Text = L"Dueño:";
			this->lblDProp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnComprar
			// 
			this->btnComprar->BackColor = System::Drawing::Color::Red;
			this->btnComprar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnComprar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnComprar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnComprar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->ForeColor = System::Drawing::Color::Black;
			this->btnComprar->Location = System::Drawing::Point(272, 234);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(171, 67);
			this->btnComprar->TabIndex = 19;
			this->btnComprar->Text = L"Comprar Propiedad";
			this->btnComprar->UseVisualStyleBackColor = false;
			this->btnComprar->Click += gcnew System::EventHandler(this, &FormJuego::btnComprar_Click);
			// 
			// btnDerechoDePaso
			// 
			this->btnDerechoDePaso->BackColor = System::Drawing::Color::Red;
			this->btnDerechoDePaso->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDerechoDePaso->Enabled = false;
			this->btnDerechoDePaso->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnDerechoDePaso->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnDerechoDePaso->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDerechoDePaso->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDerechoDePaso->ForeColor = System::Drawing::Color::Black;
			this->btnDerechoDePaso->Location = System::Drawing::Point(272, 149);
			this->btnDerechoDePaso->Name = L"btnDerechoDePaso";
			this->btnDerechoDePaso->Size = System::Drawing::Size(171, 67);
			this->btnDerechoDePaso->TabIndex = 18;
			this->btnDerechoDePaso->Text = L"Pagar Derecho de Paso";
			this->btnDerechoDePaso->UseVisualStyleBackColor = false;
			this->btnDerechoDePaso->Click += gcnew System::EventHandler(this, &FormJuego::btnDerechoDePaso_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->panel1->Controls->Add(this->btnVerProp);
			this->panel1->Controls->Add(this->btnRendirse);
			this->panel1->Controls->Add(this->lblPropiedades);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->lblDinero);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->lblNombre);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(832, 357);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(502, 315);
			this->panel1->TabIndex = 14;
			// 
			// btnVerProp
			// 
			this->btnVerProp->BackColor = System::Drawing::Color::Chartreuse;
			this->btnVerProp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVerProp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnVerProp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnVerProp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVerProp->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerProp->ForeColor = System::Drawing::Color::Black;
			this->btnVerProp->Location = System::Drawing::Point(63, 219);
			this->btnVerProp->Name = L"btnVerProp";
			this->btnVerProp->Size = System::Drawing::Size(171, 67);
			this->btnVerProp->TabIndex = 30;
			this->btnVerProp->Text = L"Ver Propiedades";
			this->btnVerProp->UseVisualStyleBackColor = false;
			this->btnVerProp->Click += gcnew System::EventHandler(this, &FormJuego::btnVerProp_Click);
			// 
			// btnRendirse
			// 
			this->btnRendirse->BackColor = System::Drawing::Color::Chartreuse;
			this->btnRendirse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRendirse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnRendirse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnRendirse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRendirse->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRendirse->ForeColor = System::Drawing::Color::Black;
			this->btnRendirse->Location = System::Drawing::Point(270, 219);
			this->btnRendirse->Name = L"btnRendirse";
			this->btnRendirse->Size = System::Drawing::Size(171, 67);
			this->btnRendirse->TabIndex = 29;
			this->btnRendirse->Text = L"Rendirse";
			this->btnRendirse->UseVisualStyleBackColor = false;
			this->btnRendirse->Click += gcnew System::EventHandler(this, &FormJuego::btnRendirse_Click);
			// 
			// lblPropiedades
			// 
			this->lblPropiedades->BackColor = System::Drawing::Color::Transparent;
			this->lblPropiedades->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPropiedades->ForeColor = System::Drawing::Color::Black;
			this->lblPropiedades->Location = System::Drawing::Point(190, 158);
			this->lblPropiedades->Name = L"lblPropiedades";
			this->lblPropiedades->Size = System::Drawing::Size(158, 31);
			this->lblPropiedades->TabIndex = 27;
			this->lblPropiedades->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(31, 158);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 31);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Propiedades:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblDinero
			// 
			this->lblDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblDinero->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDinero->ForeColor = System::Drawing::Color::Black;
			this->lblDinero->Location = System::Drawing::Point(190, 110);
			this->lblDinero->Name = L"lblDinero";
			this->lblDinero->Size = System::Drawing::Size(158, 31);
			this->lblDinero->TabIndex = 25;
			this->lblDinero->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(31, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 31);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Dinero:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblNombre
			// 
			this->lblNombre->BackColor = System::Drawing::Color::Transparent;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->ForeColor = System::Drawing::Color::Black;
			this->lblNombre->Location = System::Drawing::Point(166, 63);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(208, 31);
			this->lblNombre->TabIndex = 23;
			this->lblNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(31, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 31);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Nombre:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(502, 31);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Información del jugador";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(827, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(512, 325);
			this->label4->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(827, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(512, 325);
			this->label6->TabIndex = 16;
			// 
			// PBGracias
			// 
			this->PBGracias->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBGracias.Image")));
			this->PBGracias->Location = System::Drawing::Point(0, -8);
			this->PBGracias->Name = L"PBGracias";
			this->PBGracias->Size = System::Drawing::Size(1357, 705);
			this->PBGracias->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBGracias->TabIndex = 17;
			this->PBGracias->TabStop = false;
			this->PBGracias->Visible = false;
			// 
			// FormJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1354, 691);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->PBDado2);
			this->Controls->Add(this->PBDado4);
			this->Controls->Add(this->PBDado1);
			this->Controls->Add(this->btnTerminarT);
			this->Controls->Add(this->lblJugador);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDado);
			this->Controls->Add(this->PBDado6);
			this->Controls->Add(this->PBDado5);
			this->Controls->Add(this->PBDado3);
			this->Controls->Add(this->GBCasilla);
			this->Controls->Add(this->PBDado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->PBGracias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormJuego";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPCPolio";
			this->Load += gcnew System::EventHandler(this, &FormJuego::FormJuego_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDado6))->EndInit();
			this->GBCasilla->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPropiedad))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBGracias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Entrada
		int yinicio = 450, x1inicio = 21, x2inicio = 81;
		//Carcel
		int xcarcel = 45, y1carcel = 30, y2carcel = 90;
		int x1visita = -1, y1visita = 60, x2visita = 60, y2visita = 1;
		//Descanso
		int ydescanso = 50, x1descanso = 685, x2descanso = 745;
		//Vaya a la carcel
		int xvcarcel = 715, y1vcarcel = 420, y2vcarcel = 480;

		bool clickedTT = false, deuda = false, pagado = false, sacado = false; int NCupon = 0;
		bool turnop1 = false, turnop2 = false; int ncasillas = 0; bool clicked = false;
		int yEsqProp = 110, yPropProp = 90, xEsqProp = 110, xPropProp = 90; int cont = 0; bool lanzado = false;

		void MostrarDueno(string casilla) {
			btnPenalidad->Visible = false; btnCupon->Visible = false; btnPagarImpuestos->Visible = false;
			lblDProp->Visible = true; lblDueno->Visible = true; btnEjecutar->Visible = false;
			btnComprar->Visible = true; btnDerechoDePaso->Visible = true;
			if (oJuego->Get_Propiedad(0, 0, casilla) != NULL) {
				lblDueno->Text = gcnew String(oJuego->Get_Propiedad(0, 0, casilla)->Get_Dueno().c_str());
			}
		}
		void MostarPenalidad() {
			lblDProp->Visible = false; lblDueno->Visible = false; btnPenalidad->Visible = true;
			btnComprar->Visible = false; btnDerechoDePaso->Visible = false; btnCupon->Visible = false;
			btnPagarImpuestos->Visible = false; btnEjecutar->Visible = false;
		}
		void MostrarImpuestos() {
			lblDProp->Visible = false; lblDueno->Visible = false; btnPenalidad->Visible = false;
			btnComprar->Visible = false; btnDerechoDePaso->Visible = false; btnCupon->Visible = false;
			btnPagarImpuestos->Visible = true; btnEjecutar->Visible = false;
		}
		void MostrarCupon() {
			lblDProp->Visible = false; lblDueno->Visible = false; btnPenalidad->Visible = false;
			btnComprar->Visible = false; btnDerechoDePaso->Visible = false; btnCupon->Visible = true;
			btnPagarImpuestos->Visible = false; btnEjecutar->Visible = true;
		}
		void OcultarTodo() {
			lblDProp->Visible = false; lblDueno->Visible = false; btnPenalidad->Visible = false;
			btnComprar->Visible = false; btnDerechoDePaso->Visible = false; btnCupon->Visible = false;
			btnPagarImpuestos->Visible = false; btnEjecutar->Visible = false;
		}
		void Mostrar_Info_Jugador() {
			if (turnop1) {
				lblNombre->Text = gcnew String(oJuego->Get_Jugador1()->Get_Nombre().c_str());
				lblDinero->Text = "" + oJuego->Get_Jugador1()->Get_Dinero();
				lblPropiedades->Text = "" + oJuego->Get_Jugador1()->Get_NPropiedades();
			}
			else if (turnop2) {
				lblNombre->Text = gcnew String(oJuego->Get_Jugador2()->Get_Nombre().c_str());
				lblDinero->Text = "" + oJuego->Get_Jugador2()->Get_Dinero();
				lblPropiedades->Text = "" + oJuego->Get_Jugador2()->Get_NPropiedades();
			}
		}
		void Validar_Comprar() {
			if (turnop1) {
				if (oJuego->Get_Propiedad(oJuego->Get_Jugador1()->Get_xM(), oJuego->Get_Jugador1()->Get_yM(), "") != NULL &&
					oJuego->Get_Propiedad(oJuego->Get_Jugador1()->Get_xM(), oJuego->Get_Jugador1()->Get_yM(), "")->Get_Dueno()
					== "Banco" && btnTerminarT->Enabled == true) {
					btnComprar->Enabled = true; btnComprar->BackColor = Color::Red;
				}
				else {
					btnComprar->Enabled = false;
					btnComprar->BackColor = Color::LightGray;
				}
			}
			else if (turnop2) {

				if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "") != NULL &&
					oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "")->Get_Dueno()
					== "Banco" && btnTerminarT->Enabled == true) {
					btnComprar->Enabled = true;
					btnComprar->BackColor = Color::Red;
				}
				else {
					btnComprar->Enabled = false;
					btnComprar->BackColor = Color::LightGray;
				}
			}
		}
		void Validad_Derecho_Paso() {

			if (turnop1) {
				if (oJuego->Get_Propiedad(oJuego->Get_Jugador1()->Get_xM(), oJuego->Get_Jugador1()->Get_yM(), "") != NULL && 
					oJuego->Get_Propiedad(oJuego->Get_Jugador1()->Get_xM(), oJuego->Get_Jugador1()->Get_yM(), "")->Get_Dueno() 
					== oJuego->Get_Jugador2()->Get_Nombre()) {
					if (pagado == false && btnTerminarT->Enabled == true) { 
						btnDerechoDePaso->Enabled = true; btnDerechoDePaso->BackColor = Color::Red;
						deuda = true; 
					}
				}
				else {
					btnDerechoDePaso->Enabled = false;
					btnDerechoDePaso->BackColor = Color::LightGray;
				}
			}
			else if (turnop2) {
				if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "") != NULL && 
					oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "")->Get_Dueno() 
					== oJuego->Get_Jugador1()->Get_Nombre()) {

					if (pagado == false && btnTerminarT->Enabled == true) {
						btnDerechoDePaso->Enabled = true; btnDerechoDePaso->BackColor = Color::Red;
						deuda = true;
					}
				}
				else {
					btnDerechoDePaso->Enabled = false;
					btnDerechoDePaso->BackColor = Color::LightGray;
				}
			}
		}
		void Imprimir_Jugador(CJugador* j,BufferedGraphics ^b) {

			if (j->Get_Ficha() == "Barco") {
				b->Graphics->DrawImage(imgBarco, j->Get_x(), j->Get_y(), 60, 60);
			}
			else if(j->Get_Ficha() == "Carreta") {
				b->Graphics->DrawImage(imgCarreta, j->Get_x(), j->Get_y(), 60, 50);
			}
			else if (j->Get_Ficha() == "Perro") {
				b->Graphics->DrawImage(imgPerro, j->Get_x(), j->Get_y(), 58, 50);
			}
			else if (j->Get_Ficha() == "Sombrero") {
				b->Graphics->DrawImage(imgSombrero, j->Get_x(), j->Get_y(), 60, 50);
			}
			else if (j->Get_Ficha() == "Plancha") {
				b->Graphics->DrawImage(imgPlancha, j->Get_x(), j->Get_y(), 50, 50);
			}
			else if (j->Get_Ficha() == "Carro") {
				b->Graphics->DrawImage(imgCarro, j->Get_x(), j->Get_y(), 65, 50);
			}
		}
		void Imprimir_Jugadorilu(CJugador* j, BufferedGraphics ^b) {

			if (j->Get_Ficha() == "Barco") {
				b->Graphics->DrawImage(imgBarcoilu, j->Get_x(), j->Get_y(), 60, 60);
			}
			else if (j->Get_Ficha() == "Carreta") {
				b->Graphics->DrawImage(imgCarretailu, j->Get_x(), j->Get_y(), 60, 50);
			}
			else if (j->Get_Ficha() == "Perro") {
				b->Graphics->DrawImage(imgPerroilu, j->Get_x(), j->Get_y(), 58, 50);
			}
			else if (j->Get_Ficha() == "Sombrero") {
				b->Graphics->DrawImage(imgSombreroilu, j->Get_x(), j->Get_y(), 60, 50);
			}
			else if (j->Get_Ficha() == "Plancha") {
				b->Graphics->DrawImage(imgPlanchailu, j->Get_x(), j->Get_y(), 50, 50);
			}
			else if (j->Get_Ficha() == "Carro") {
				b->Graphics->DrawImage(imgCarroilu, j->Get_x(), j->Get_y(), 65, 50);
			}
		}
		void MostrarNumero() {

			int n = oJuego->Dado();
			ncasillas = n;
			switch (n)
			{
			case 1:
				PBDado1->Visible = true; break;
			case 2:
				PBDado2->Visible = true; break;
			case 3:
				PBDado3->Visible = true; break;
			case 4:
				PBDado4->Visible = true; break;
			case 5:
				PBDado5->Visible = true; break;
			case 6:
				PBDado6->Visible = true; break;
			}
		}
		void MoverJugador1() {

			if (turnop1 && ncasillas != 0) {

				if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 4) {

					oJuego->Get_Jugador1()->Set_y(oJuego->Get_Jugador1()->Get_y() - yEsqProp);
					oJuego->Get_Jugador1()->Set_yM(oJuego->Get_Jugador1()->Get_yM() - 1);
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 0) {

					if (oJuego->Get_Jugador1()->Get_y() != y1carcel && oJuego->Get_Jugador1()->Get_x() != xcarcel) {

						oJuego->Get_Jugador1()->Set_y(y1carcel-15); oJuego->Get_Jugador1()->Set_x(xcarcel);
					}

					oJuego->Get_Jugador1()->Set_x(oJuego->Get_Jugador1()->Get_x() + xEsqProp);
					oJuego->Get_Jugador1()->Set_xM(oJuego->Get_Jugador1()->Get_xM() + 1);
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 0) {

					oJuego->Get_Jugador1()->Set_y(oJuego->Get_Jugador1()->Get_y() + yEsqProp);
					oJuego->Get_Jugador1()->Set_yM(oJuego->Get_Jugador1()->Get_yM() + 1);
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 4) {

					oJuego->Get_Jugador1()->Set_x(oJuego->Get_Jugador1()->Get_x() - xEsqProp);
					oJuego->Get_Jugador1()->Set_xM(oJuego->Get_Jugador1()->Get_xM() - 1);
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0) {

					if (oJuego->Get_Jugador1()->Get_yM() - 1 == 0) {
						oJuego->Get_Jugador1()->Set_x(x1visita);
						oJuego->Get_Jugador1()->Set_y(y1visita);
						oJuego->Get_Jugador1()->Set_xM(0);
						oJuego->Get_Jugador1()->Set_yM(0);
					}
					else {
						oJuego->Get_Jugador1()->Set_y(oJuego->Get_Jugador1()->Get_y() - yPropProp);
						oJuego->Get_Jugador1()->Set_yM(oJuego->Get_Jugador1()->Get_yM() - 1);
					}
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7) {

					if (oJuego->Get_Jugador1()->Get_yM() + 1 == 4) {
						oJuego->Get_Jugador1()->Set_x(xvcarcel);
						oJuego->Get_Jugador1()->Set_y(y1vcarcel);
						oJuego->Get_Jugador1()->Set_xM(7);
						oJuego->Get_Jugador1()->Set_yM(4);
					}
					else {
						oJuego->Get_Jugador1()->Set_y(oJuego->Get_Jugador1()->Get_y() + yPropProp);
						oJuego->Get_Jugador1()->Set_yM(oJuego->Get_Jugador1()->Get_yM() + 1);
					}
				}
				else if (oJuego->Get_Jugador1()->Get_yM() == 0) {

					if (oJuego->Get_Jugador1()->Get_xM() + 1 == 7) {
						oJuego->Get_Jugador1()->Set_x(x1descanso);
						oJuego->Get_Jugador1()->Set_y(ydescanso);
						oJuego->Get_Jugador1()->Set_xM(7);
						oJuego->Get_Jugador1()->Set_yM(0);
					}
					else {
						oJuego->Get_Jugador1()->Set_x(oJuego->Get_Jugador1()->Get_x() + xPropProp);
						oJuego->Get_Jugador1()->Set_xM(oJuego->Get_Jugador1()->Get_xM() + 1);
					}
				}
				else if (oJuego->Get_Jugador1()->Get_yM() == 4) {

					if (oJuego->Get_Jugador1()->Get_xM() - 1 == 0) {
						oJuego->Get_Jugador1()->Set_x(x1inicio);
						oJuego->Get_Jugador1()->Set_y(yinicio);
						oJuego->Get_Jugador1()->Set_xM(0);
						oJuego->Get_Jugador1()->Set_yM(4);
						oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 10000);
						oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - 10000);
					}
					else {
						oJuego->Get_Jugador1()->Set_x(oJuego->Get_Jugador1()->Get_x() - xPropProp);
						oJuego->Get_Jugador1()->Set_xM(oJuego->Get_Jugador1()->Get_xM() - 1);
					}
				}
				ncasillas--;
				if (ncasillas == 0) { 
					btnTerminarT->Enabled = true; btnTerminarT->BackColor = Color::Orange; 
					if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 4) {
						MessageBox::Show("Oh no! Te vas a la carcel.", "Alerta", MessageBoxButtons::OK);
						oJuego->Get_Jugador1()->Set_EnCarcel(true);
						oJuego->Get_Jugador1()->Set_xM(0); oJuego->Get_Jugador1()->Set_yM(0);
						oJuego->Get_Jugador1()->Set_x(xcarcel); oJuego->Get_Jugador1()->Set_y(y1carcel);
					}
				}
			}  
		}
		void MoverJugador2() {

			if (turnop2 && ncasillas != 0) {

				if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 4) {

					oJuego->Get_Jugador2()->Set_y(oJuego->Get_Jugador2()->Get_y() - yEsqProp);
					oJuego->Get_Jugador2()->Set_yM(oJuego->Get_Jugador2()->Get_yM() - 1);
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 0) {

					if (oJuego->Get_Jugador2()->Get_y() != y2carcel && oJuego->Get_Jugador2()->Get_x() != xcarcel) {

						oJuego->Get_Jugador2()->Set_y(y2carcel-15); oJuego->Get_Jugador2()->Set_x(xcarcel);
					}

					oJuego->Get_Jugador2()->Set_x(oJuego->Get_Jugador2()->Get_x() + xEsqProp);
					oJuego->Get_Jugador2()->Set_xM(oJuego->Get_Jugador2()->Get_xM() + 1);
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 0) {

					oJuego->Get_Jugador2()->Set_y(oJuego->Get_Jugador2()->Get_y() + yEsqProp);
					oJuego->Get_Jugador2()->Set_yM(oJuego->Get_Jugador2()->Get_yM() + 1);
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 4) {

					oJuego->Get_Jugador2()->Set_x(oJuego->Get_Jugador2()->Get_x() - xEsqProp);
					oJuego->Get_Jugador2()->Set_xM(oJuego->Get_Jugador2()->Get_xM() - 1);
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0) {

					if (oJuego->Get_Jugador2()->Get_yM() - 1 == 0) {
						oJuego->Get_Jugador2()->Set_x(x2visita);
						oJuego->Get_Jugador2()->Set_y(y2visita);
						oJuego->Get_Jugador2()->Set_xM(0);
						oJuego->Get_Jugador2()->Set_yM(0);
					}
					else {
						oJuego->Get_Jugador2()->Set_y(oJuego->Get_Jugador2()->Get_y() - yPropProp);
						oJuego->Get_Jugador2()->Set_yM(oJuego->Get_Jugador2()->Get_yM() - 1);
					}
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7) {

					if (oJuego->Get_Jugador2()->Get_yM() + 1 == 4) {
						oJuego->Get_Jugador2()->Set_x(xvcarcel);
						oJuego->Get_Jugador2()->Set_y(y2vcarcel);
						oJuego->Get_Jugador2()->Set_xM(7);
						oJuego->Get_Jugador2()->Set_yM(4);
					}
					else {
						oJuego->Get_Jugador2()->Set_y(oJuego->Get_Jugador2()->Get_y() + yPropProp);
						oJuego->Get_Jugador2()->Set_yM(oJuego->Get_Jugador2()->Get_yM() + 1);
					}
				}
				else if (oJuego->Get_Jugador2()->Get_yM() == 0) {

					if (oJuego->Get_Jugador2()->Get_xM() + 1 == 7) {
						oJuego->Get_Jugador2()->Set_x(x2descanso);
						oJuego->Get_Jugador2()->Set_y(ydescanso);
						oJuego->Get_Jugador2()->Set_xM(7);
						oJuego->Get_Jugador2()->Set_yM(0);
					}
					else {
						oJuego->Get_Jugador2()->Set_x(oJuego->Get_Jugador2()->Get_x() + xPropProp);
						oJuego->Get_Jugador2()->Set_xM(oJuego->Get_Jugador2()->Get_xM() + 1);
					}
				}
				else if (oJuego->Get_Jugador2()->Get_yM() == 4) {

					if (oJuego->Get_Jugador2()->Get_xM() - 1 == 0) {
						oJuego->Get_Jugador2()->Set_x(x2inicio);
						oJuego->Get_Jugador2()->Set_y(yinicio);
						oJuego->Get_Jugador2()->Set_xM(0);
						oJuego->Get_Jugador2()->Set_yM(4);
						oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + 10000);
						oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - 10000);
					}
					else {
						oJuego->Get_Jugador2()->Set_x(oJuego->Get_Jugador2()->Get_x() - xPropProp);
						oJuego->Get_Jugador2()->Set_xM(oJuego->Get_Jugador2()->Get_xM() - 1);
					}
				}
				ncasillas--;
				if (ncasillas == 0) {
					btnTerminarT->Enabled = true; btnTerminarT->BackColor = Color::Orange;
					/*if (UnJugador) { clickedTT = true; }*/
					if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 4) {
						if (!UnJugador) { MessageBox::Show("Oh no! Te vas a la carcel.", "Alerta", MessageBoxButtons::OK); }
						oJuego->Get_Jugador2()->Set_EnCarcel(true);
						oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(0);
						oJuego->Get_Jugador2()->Set_x(xcarcel); oJuego->Get_Jugador2()->Set_y(y2carcel);
					}
				}
			}
		}
		void MostrarPropiedad() {
			if (turnop1) {
				if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("GO.png");
					PBPropiedad->Location = Point(122, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 3) {
					PBPropiedad->Image = Image::FromFile("Av Larco.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Larco");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 2) {
					PBPropiedad->Image = Image::FromFile("Av Arequipa.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Arequipa");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 1) {
					PBPropiedad->Image = Image::FromFile("Paseo de la Republica.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Paseo de la Republica");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 0 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					if (oJuego->Get_Jugador1()->Get_EnCarcel() == true) {
						PBPropiedad->Image = Image::FromFile("Carcel.png");
						MostarPenalidad(); PBPropiedad->Location = Point(23, 35);
					}
					else {
						PBPropiedad->Image = Image::FromFile("De visita.png");
						OcultarTodo(); PBPropiedad->Location = Point(122, 35);
					}
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 1 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Jr de la Union.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Jr. de la Union");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 2 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Plaza San Martin.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Plaza San Martin");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 3 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Centro Civico.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Centro Civico");
				}
				else if ((oJuego->Get_Jugador1()->Get_xM() == 6 && oJuego->Get_Jugador1()->Get_yM() == 4) || 
					(oJuego->Get_Jugador1()->Get_xM() == 4 && oJuego->Get_Jugador1()->Get_yM() == 0)) {
					PBPropiedad->Image = Image::FromFile("Cupon.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarCupon();
					if (sacado == false && btnTerminarT->Enabled == true) {
						btnCupon->Enabled = true; btnCupon->BackColor = Color::Red; deuda = true;
					}
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 5 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Av Bolivar.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Bolivar");
				}
				else if ((oJuego->Get_Jugador1()->Get_xM() == 6 && oJuego->Get_Jugador1()->Get_yM() == 0) ||
					(oJuego->Get_Jugador1()->Get_xM() == 1 && oJuego->Get_Jugador1()->Get_yM() == 4)) {
					PBPropiedad->Image = Image::FromFile("impuestos.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarImpuestos();
					if (pagado == false && btnTerminarT->Enabled == true) {
						btnPagarImpuestos->Enabled = true; btnPagarImpuestos->BackColor = Color::Red;
						deuda = true;
					}
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Descanso.png");
					PBPropiedad->Location = Point(122, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 1) {
					PBPropiedad->Image = Image::FromFile("UNMSM.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("UNMSM");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 2) {
					PBPropiedad->Image = Image::FromFile("Av Venezuela.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Venezuela");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 3) {
					PBPropiedad->Image = Image::FromFile("Av La Marina.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. La Marina");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 7 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Vete a la carcel.png");
					PBPropiedad->Location = Point(122, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 5 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Plaza San Miguel.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Plaza San Miguel");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 4 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("UPC.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("UPC");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 3 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Av Primavera.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Primavera");
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 2 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Bembos.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Bembos Surco");
				}
			}
			else if(turnop2){

				if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("GO.png");
					PBPropiedad->Location = Point(122, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 3) {
					PBPropiedad->Image = Image::FromFile("Av Larco.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Larco");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 2) {
					PBPropiedad->Image = Image::FromFile("Av Arequipa.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Arequipa");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 1) {
					PBPropiedad->Image = Image::FromFile("Paseo de la Republica.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Paseo de la Republica");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					if (oJuego->Get_Jugador2()->Get_EnCarcel() == true) {
						PBPropiedad->Image = Image::FromFile("Carcel.png");
						MostarPenalidad(); PBPropiedad->Location = Point(23, 35);
					}
					else {
						PBPropiedad->Image = Image::FromFile("De visita.png");
						OcultarTodo(); PBPropiedad->Location = Point(122, 35);
					}
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 1 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Jr de la Union.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Jr. de la Union");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 2 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Plaza San Martin.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Plaza San Martin");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 3 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Centro Civico.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Centro Civico");
				}
				else if ((oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 4) ||
					(oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 0)) {
					PBPropiedad->Image = Image::FromFile("Cupon.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarCupon();
					if (sacado == false && btnTerminarT->Enabled == true) {
						btnCupon->Enabled = true; btnCupon->BackColor = Color::Red; deuda = true;
					}
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 5 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Av Bolivar.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Bolivar");
				}
				else if ((oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 0) ||
					(oJuego->Get_Jugador2()->Get_xM() == 1 && oJuego->Get_Jugador2()->Get_yM() == 4)) {
					PBPropiedad->Image = Image::FromFile("impuestos.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarImpuestos();
					if (pagado == false && btnTerminarT->Enabled == true) {
						btnPagarImpuestos->Enabled = true; btnPagarImpuestos->BackColor = Color::Red;
						deuda = true;
					}
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					PBPropiedad->Image = Image::FromFile("Descanso.png");
					PBPropiedad->Location = Point(122, 28);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 1) {
					PBPropiedad->Image = Image::FromFile("UNMSM.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("UNMSM");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 2) {
					PBPropiedad->Image = Image::FromFile("Av Venezuela.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Venezuela");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 3) {
					PBPropiedad->Image = Image::FromFile("Av La Marina.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. La Marina");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 7 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Vete a la carcel.png");
					PBPropiedad->Location = Point(122, 28);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 259;
					OcultarTodo();
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 5 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Plaza San Miguel.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Plaza San Miguel");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("UPC.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("UPC");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 3 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Av Primavera.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Av. Primavera");
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 2 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					PBPropiedad->Image = Image::FromFile("Bembos.png");
					PBPropiedad->Location = Point(23, 35);
					PBPropiedad->Height = 266;
					PBPropiedad->Width = 182;
					MostrarDueno("Bembos Surco");
				}
			}
		}
		void CuponIA() {
			Random r; NCupon = r.Next(1, 6);
			if (NCupon == 1) {
				oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(4);
				oJuego->Get_Jugador2()->Set_x(x2inicio); oJuego->Get_Jugador2()->Set_y(yinicio);
				oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + 10000);
				oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - 10000);
			}
			else if (NCupon == 2) {
				oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 2000);
				oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() - 2000);
			}
			else if (NCupon == 3) {
				oJuego->Get_Jugador2()->Set_EnCarcel(true);
				oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(0);
				oJuego->Get_Jugador2()->Set_x(xcarcel); oJuego->Get_Jugador2()->Set_y(y2carcel);
			}
			else if (NCupon == 4) {
				
				if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == "Banco") {
					oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() + 1000);
				}
				else if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == oJuego->Get_Jugador1()->Get_Nombre()) {
					oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 1000);
				}
			}
			else if (NCupon == 5) {

				if (oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(1);
					oJuego->Get_Jugador2()->Set_x(x2inicio); oJuego->Get_Jugador2()->Set_y(160);
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					oJuego->Get_Jugador2()->Set_xM(7); oJuego->Get_Jugador2()->Set_yM(0);
					oJuego->Get_Jugador2()->Set_x(x2descanso); oJuego->Get_Jugador2()->Set_y(ydescanso);
				}
			}
		}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(imgFondo, ClientRectangle);
		buffer->Graphics->DrawImage(imgTablero, 10, 10, (3213 / 4), (2136 / 4));

		if (turnop1) { lblJugador->Text = gcnew String(oJuego->Get_Jugador1()->Get_Nombre().c_str()); }
		else if (turnop2) { lblJugador->Text = gcnew String(oJuego->Get_Jugador2()->Get_Nombre().c_str()); }

		MoverJugador1();
		MoverJugador2();

		if (turnop1) {
			btnRendirse->Enabled = true; btnVerProp->Enabled = true;
			Imprimir_Jugadorilu(oJuego->Get_Jugador1(), buffer);
			if (oJuego->Get_Jugador1()->Get_EnCarcel()) {
				btnDado->Enabled = false; btnDado->BackColor = Color::LightGray;
				btnTerminarT->Enabled = true; btnTerminarT->BackColor = Color::Orange;
			}
		}
		else {
			Imprimir_Jugador(oJuego->Get_Jugador1(), buffer);
		}

		if (turnop2) {
			Imprimir_Jugadorilu(oJuego->Get_Jugador2(), buffer);
			if (oJuego->Get_Jugador2()->Get_EnCarcel()) {
				btnDado->Enabled = false; btnDado->BackColor = Color::LightGray;
				btnTerminarT->Enabled = true; btnTerminarT->BackColor = Color::Orange;
			}
		}
		else {
			Imprimir_Jugador(oJuego->Get_Jugador2(), buffer);
		}

		if (turnop2 && UnJugador) {
			btnRendirse->Enabled = false; btnVerProp->Enabled = false;
			if (clicked == false) {

				btnDado->Enabled = false; btnDado->BackColor = Color::LightGray;
				PBDado1->Visible = false; PBDado2->Visible = false; PBDado3->Visible = false;
				PBDado4->Visible = false; PBDado5->Visible = false; PBDado6->Visible = false;

				PBDado->Visible = true; cont = 0; lanzado = true; clicked = true; 
			}

			if (btnTerminarT->Enabled == true) {

				if ((oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 4) ||
					(oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 0)) {
					CuponIA();
				}

				if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "") != NULL) {
					if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "")->Get_Dueno() == "Banco") {

						Random r; int num = r.Next(0, 2);
						if (num == 1) {
							if (oJuego->Get_Jugador2()->Get_Dinero() > oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(),
								oJuego->Get_Jugador2()->Get_yM(), "")->Get_Precio()) {
								oJuego->Comprar_Propiedad(oJuego->Get_Jugador2()); clickedTT = true;
							}
							else {
								if (oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2()).size() != 0) {
									num = r.Next(0, 2);

									if (num == 1) {
										while (oJuego->Get_Jugador2()->Get_Dinero() < oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(),
											oJuego->Get_Jugador2()->Get_yM(), "")->Get_Precio() && oJuego->Get_Propiedades_Jugador(
												oJuego->Get_Jugador2()).size() != 0) {
											int precio = oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Get_60();
											oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + precio);
											oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - precio);
											oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Set_Dueno("Banco");
											oJuego->Get_Jugador2()->Set_NPropiedades(oJuego->Get_Jugador2()->Get_NPropiedades() - 1);
											oJuego->Get_Banco()->Set_NPropiedades(oJuego->Get_Banco()->Get_NPropiedades() + 1);
										}

										if ((oJuego->Get_Jugador2()->Get_Dinero() > oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(),
											oJuego->Get_Jugador2()->Get_yM(), "")->Get_Precio())) {
											oJuego->Comprar_Propiedad(oJuego->Get_Jugador2());
											clickedTT = true;
										}
										else {
											clickedTT = true;
										}
									}
									else {
										clickedTT = true;
									}
								}
							}
						}
						else {
							clickedTT = true;
						}

					}
					else if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "")->Get_Dueno() ==
						oJuego->Get_Jugador1()->Get_Nombre()) {

						if (oJuego->Get_Jugador2()->Get_Dinero() > 5000) {
							oJuego->Derecho_de_Paso(oJuego->Get_Jugador2(), oJuego->Get_Jugador1()); clickedTT = true;
						}
						else {
							while (oJuego->Get_Jugador2()->Get_Dinero() < 5000 && oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2()).size() != 0) {
								int precio = oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Get_60();
								oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + precio);
								oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - precio);
								oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Set_Dueno("Banco");
								oJuego->Get_Jugador2()->Set_NPropiedades(oJuego->Get_Jugador2()->Get_NPropiedades() - 1);
								oJuego->Get_Banco()->Set_NPropiedades(oJuego->Get_Banco()->Get_NPropiedades() + 1);
							}

							if (oJuego->Get_Jugador2()->Get_Dinero() < 5000) {
								oJuego->Get_Jugador2()->Set_Dinero(0);
							}
							else {
								oJuego->Derecho_de_Paso(oJuego->Get_Jugador2(), oJuego->Get_Jugador1()); clickedTT = true;
							}
						}

					}
					else {
						clickedTT = true;
					}
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 0 && oJuego->Get_Jugador2()->Get_yM() == 0 && oJuego->Get_Jugador2()->Get_EnCarcel()) {
					if (oJuego->Get_Jugador2()->Get_Dinero() > 10000) {
						oJuego->Pagar_Penalidad(oJuego->Get_Jugador2());
						oJuego->Get_Jugador2()->Set_EnCarcel(false); clickedTT = true;
					}
					else {
						while (oJuego->Get_Jugador2()->Get_Dinero() < 10000 && oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2()).size() != 0) {
							int precio = oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Get_60();
							oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + precio);
							oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - precio);
							oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Set_Dueno("Banco");
							oJuego->Get_Jugador2()->Set_NPropiedades(oJuego->Get_Jugador2()->Get_NPropiedades() - 1);
							oJuego->Get_Banco()->Set_NPropiedades(oJuego->Get_Banco()->Get_NPropiedades() + 1);
						}

						if (oJuego->Get_Jugador2()->Get_Dinero() < 10000) {
							oJuego->Get_Jugador2()->Set_Dinero(0);
						}
						else {
							oJuego->Pagar_Penalidad(oJuego->Get_Jugador2());
							oJuego->Get_Jugador2()->Set_EnCarcel(false); clickedTT = true;
						}
					}
				}
				else if ((oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 0) ||
					(oJuego->Get_Jugador2()->Get_xM() == 1 && oJuego->Get_Jugador2()->Get_yM() == 4)) {

					if (oJuego->Get_Jugador2()->Get_Dinero() > oJuego->Calcular_Impuestos(oJuego->Get_Jugador2())) {
						oJuego->Pagar_Impuestos(oJuego->Get_Jugador2()); clickedTT = true;
					}
					else {
						while (oJuego->Get_Jugador2()->Get_Dinero() < oJuego->Calcular_Impuestos(oJuego->Get_Jugador2()) && 
							oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2()).size() != 0) {
							int precio = oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Get_60();
							oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + precio);
							oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - precio);
							oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2())[0]->Set_Dueno("Banco");
							oJuego->Get_Jugador2()->Set_NPropiedades(oJuego->Get_Jugador2()->Get_NPropiedades() - 1);
							oJuego->Get_Banco()->Set_NPropiedades(oJuego->Get_Banco()->Get_NPropiedades() + 1);
						}

						if (oJuego->Get_Jugador2()->Get_Dinero() < oJuego->Calcular_Impuestos(oJuego->Get_Jugador2())) {
							oJuego->Get_Jugador2()->Set_Dinero(0);
						}
						else {
							oJuego->Pagar_Impuestos(oJuego->Get_Jugador2()); clickedTT = true;
						}
					}
				}
				else {
					clickedTT = true;
				}
			}
			
			if (clickedTT == true) {
				turnop1 = true; turnop2 = false; clickedTT = false; clicked = false;
				btnTerminarT->Enabled = false; btnTerminarT->BackColor = Color::LightGray;
				btnDado->Enabled = true; btnDado->BackColor = Color::Orange;
			}
		}

		if (lanzado && cont == 5) {
			cont = 0;
			lanzado = false;
			MostrarNumero();
		}

		Validar_Comprar(); Validad_Derecho_Paso();
		MostrarPropiedad(); Mostrar_Info_Jugador();

		cont++;
		if (oJuego->Get_Jugador1()->Get_Dinero() <= 3000) {
			timer1->Enabled = false;
			MessageBox::Show(gcnew String(oJuego->Get_Jugador2()->Get_Nombre().c_str()) + " ha ganado !!", "Juego Terminado",
				MessageBoxButtons::OK);
			PBGracias->BringToFront(); PBGracias->Visible = true;
		}
		else if (oJuego->Get_Jugador2()->Get_Dinero() <= 3000) {
			timer1->Enabled = false;
			MessageBox::Show(gcnew String(oJuego->Get_Jugador1()->Get_Nombre().c_str()) + " ha ganado !!", "Juego Terminado",
				MessageBoxButtons::OK);
			PBGracias->BringToFront(); PBGracias->Visible = true;
		}

		buffer->Render(g);
		delete buffer, espacio, g;
	}
	private: System::Void FormJuego_Load(System::Object^  sender, System::EventArgs^  e) {

		oJuego->Get_Jugador1()->Set_x(x1inicio);
		oJuego->Get_Jugador2()->Set_x(x2inicio);
		oJuego->Get_Jugador1()->Set_y(yinicio);
		oJuego->Get_Jugador2()->Set_y(yinicio);
		oJuego->Get_Jugador1()->Set_xM(0);
		oJuego->Get_Jugador2()->Set_xM(0);
		oJuego->Get_Jugador1()->Set_yM(4);
		oJuego->Get_Jugador2()->Set_yM(4);
		turnop1 = true;
		btnTerminarT->Enabled = false; btnTerminarT->BackColor = Color::LightGray;
		oJuego->CargarPropiedades();
	}
	private: System::Void btnDado_Click(System::Object^  sender, System::EventArgs^  e) {

		PBDado1->Visible = false; PBDado2->Visible = false; PBDado3->Visible = false;
		PBDado4->Visible = false; PBDado5->Visible = false; PBDado6->Visible = false;
		pagado = false; sacado = false;
		PBDado->Visible = true; cont = 0; lanzado = true; btnDado->Enabled = false; btnDado->BackColor = Color::LightGray;
	}
	private: System::Void btnTerminarT_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (deuda == false) {

			if (turnop1) {
				turnop1 = false;
				turnop2 = true;
			}
			else if (turnop2) {
				turnop2 = false;
				turnop1 = true;
			}
			btnDado->Enabled = true; btnDado->BackColor = Color::Orange;
			btnTerminarT->Enabled = false; btnTerminarT->BackColor = Color::LightGray;
		}
		else {
			if (turnop1) {
				if ((oJuego->Get_Jugador1()->Get_xM() == 4 && oJuego->Get_Jugador1()->Get_yM() == 0) || 
					(oJuego->Get_Jugador1()->Get_xM() == 6 && oJuego->Get_Jugador1()->Get_yM() == 4)) {
					MessageBox::Show("Debes sacar un cupón y ejecutarlo para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
				else if ((oJuego->Get_Jugador1()->Get_xM() == 6 && oJuego->Get_Jugador1()->Get_yM() == 0) ||
					(oJuego->Get_Jugador1()->Get_xM() == 1 && oJuego->Get_Jugador1()->Get_yM() == 4)) {
					MessageBox::Show("Debes pagar los impuestos para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
				else {
					MessageBox::Show("Debes pagar el derecho de paso para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
			}
			else if (turnop2) {
				if ((oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 0) ||
					(oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 4)) {
					MessageBox::Show("Debes sacar un cupón y ejecutarlo para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
				else if ((oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 0) ||
					(oJuego->Get_Jugador2()->Get_xM() == 1 && oJuego->Get_Jugador2()->Get_yM() == 4)) {
					MessageBox::Show("Debes pagar los impuestos para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
				else {
					MessageBox::Show("Debes pagar el derecho de paso para terminar el turno.", "Advertencia", MessageBoxButtons::OK);
				}
			}
		}
	}
	private: System::Void btnDerechoDePaso_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (turnop1) {
			if (oJuego->Get_Jugador1()->Get_Dinero() > 5000) {
				oJuego->Derecho_de_Paso(oJuego->Get_Jugador1(), oJuego->Get_Jugador2());
				pagado = true; deuda = false; btnDerechoDePaso->Enabled = false; btnDerechoDePaso->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}	
		}
		else if(turnop2) {
			if (oJuego->Get_Jugador2()->Get_Dinero() > 5000) {
				oJuego->Derecho_de_Paso(oJuego->Get_Jugador2(), oJuego->Get_Jugador1());
				pagado = true; deuda = false; btnDerechoDePaso->Enabled = false; btnDerechoDePaso->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void btnComprar_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (turnop1) {
			if (oJuego->Get_Propiedad(oJuego->Get_Jugador1()->Get_xM(), oJuego->Get_Jugador1()->Get_yM(), "")->
				Get_Precio() < oJuego->Get_Jugador1()->Get_Dinero()) {

				oJuego->Comprar_Propiedad(oJuego->Get_Jugador1());
				btnComprar->Enabled = false; btnComprar->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else if (turnop2) {
			if (oJuego->Get_Propiedad(oJuego->Get_Jugador2()->Get_xM(), oJuego->Get_Jugador2()->Get_yM(), "")->
				Get_Precio() < oJuego->Get_Jugador2()->Get_Dinero()) {

				oJuego->Comprar_Propiedad(oJuego->Get_Jugador2());
				btnComprar->Enabled = false; btnComprar->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void btnPenalidad_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (turnop1) {
			if (oJuego->Get_Jugador1()->Get_Dinero() > 10000) {
				oJuego->Pagar_Penalidad(oJuego->Get_Jugador1());
				oJuego->Get_Jugador1()->Set_EnCarcel(false);
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else if (turnop2) {
			if (oJuego->Get_Jugador2()->Get_Dinero() > 10000) {
				oJuego->Pagar_Penalidad(oJuego->Get_Jugador2());
				oJuego->Get_Jugador2()->Set_EnCarcel(false);
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void btnPagarImpuestos_Click(System::Object^  sender, System::EventArgs^  e) {
	
		if (turnop1) {
			if (oJuego->Get_Jugador1()->Get_Dinero() > oJuego->Calcular_Impuestos(oJuego->Get_Jugador1())) {
				oJuego->Pagar_Impuestos(oJuego->Get_Jugador1());
				pagado = true; deuda = false; btnPagarImpuestos->Enabled = false; btnPagarImpuestos->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else if (turnop2) {
			if (oJuego->Get_Jugador2()->Get_Dinero() > oJuego->Calcular_Impuestos(oJuego->Get_Jugador2())) {
				oJuego->Pagar_Impuestos(oJuego->Get_Jugador2());
				pagado = true; deuda = false; btnPagarImpuestos->Enabled = false; btnPagarImpuestos->BackColor = Color::LightGray;
			}
			else {
				MessageBox::Show("Dinero insuficiente.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void btnCupon_Click(System::Object^  sender, System::EventArgs^  e) {

		Random r; NCupon = r.Next(1, 6);
		FormCupon ^Cupon = gcnew FormCupon(NCupon);
		Cupon->ShowDialog(); delete Cupon;
		btnCupon->Enabled = false; btnCupon->BackColor = Color::LightGray;
		btnEjecutar->Enabled = true; btnEjecutar->BackColor = Color::Red;
		sacado = true;
	}
	private: System::Void btnEjecutar_Click(System::Object^  sender, System::EventArgs^  e) {

		if (NCupon == 1) {
			if (turnop1) {
				oJuego->Get_Jugador1()->Set_xM(0); oJuego->Get_Jugador1()->Set_yM(4);
				oJuego->Get_Jugador1()->Set_x(x1inicio); oJuego->Get_Jugador1()->Set_y(yinicio);
				oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 10000);
				oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - 10000);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray; 
				deuda = false;
			}
			else if (turnop2) {
				oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(4);
				oJuego->Get_Jugador2()->Set_x(x2inicio); oJuego->Get_Jugador2()->Set_y(yinicio);
				oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + 10000);
				oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() - 10000);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
				deuda = false;
			}
		}
		else if (NCupon == 2) {
			if (turnop1) {
				oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 2000);
				oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() + 2000);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
				deuda = false;
			}
			else if (turnop2) {
				oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 2000);
				oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador2()->Get_Dinero() - 2000);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
				deuda = false;
			}
		}
		else if (NCupon == 3) {
			if (turnop1) {
				oJuego->Get_Jugador1()->Set_EnCarcel(true);
				oJuego->Get_Jugador1()->Set_xM(0); oJuego->Get_Jugador1()->Set_yM(0);
				oJuego->Get_Jugador1()->Set_x(xcarcel); oJuego->Get_Jugador1()->Set_y(y1carcel);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
				deuda = false;
			}
			else if (turnop2) {
				oJuego->Get_Jugador2()->Set_EnCarcel(true);
				oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(0);
				oJuego->Get_Jugador2()->Set_x(xcarcel); oJuego->Get_Jugador2()->Set_y(y2carcel);
				btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
				deuda = false;
			}
		}
		else if (NCupon == 4) {
			if (turnop1) {
				if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == "Banco") {
					oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() + 1000);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == oJuego->Get_Jugador2()->Get_Nombre()) {
					oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 1000);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else {
					if (!UnJugador) { MessageBox::Show("Tu eres el dueño de la Av. Larco", "Alerta", MessageBoxButtons::OK); }
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
			}
			else if (turnop2) {
				if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == "Banco") {
					oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Banco()->Set_Dinero(oJuego->Get_Banco()->Get_Dinero() + 1000);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else if (oJuego->Get_Propiedad(0, 0, "Av. Larco")->Get_Dueno() == oJuego->Get_Jugador1()->Get_Nombre()) {
					oJuego->Get_Jugador2()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() - 1000);
					oJuego->Get_Jugador1()->Set_Dinero(oJuego->Get_Jugador1()->Get_Dinero() + 1000);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else {
					if (!UnJugador) { MessageBox::Show("Tu eres el dueño de la Av. Larco", "Alerta", MessageBoxButtons::OK); }
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
			}
		}
		else if (NCupon == 5) {
			if (turnop1) {
				if (oJuego->Get_Jugador1()->Get_xM() == 4 && oJuego->Get_Jugador1()->Get_yM() == 0) {
					oJuego->Get_Jugador1()->Set_xM(0); oJuego->Get_Jugador1()->Set_yM(1);
					oJuego->Get_Jugador1()->Set_x(x1inicio); oJuego->Get_Jugador1()->Set_y(160);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else if (oJuego->Get_Jugador1()->Get_xM() == 6 && oJuego->Get_Jugador1()->Get_yM() == 4) {
					oJuego->Get_Jugador1()->Set_xM(7); oJuego->Get_Jugador1()->Set_yM(0);
					oJuego->Get_Jugador1()->Set_x(x1descanso); oJuego->Get_Jugador1()->Set_y(ydescanso);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
			}
			else if (turnop2) {
				if (oJuego->Get_Jugador2()->Get_xM() == 4 && oJuego->Get_Jugador2()->Get_yM() == 0) {
					oJuego->Get_Jugador2()->Set_xM(0); oJuego->Get_Jugador2()->Set_yM(1);
					oJuego->Get_Jugador2()->Set_x(x2inicio); oJuego->Get_Jugador2()->Set_y(160);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
				else if (oJuego->Get_Jugador2()->Get_xM() == 6 && oJuego->Get_Jugador2()->Get_yM() == 4) {
					oJuego->Get_Jugador2()->Set_xM(7); oJuego->Get_Jugador2()->Set_yM(0);
					oJuego->Get_Jugador2()->Set_x(x2descanso); oJuego->Get_Jugador2()->Set_y(ydescanso);
					btnEjecutar->Enabled = false; btnEjecutar->BackColor = Color::LightGray;
					deuda = false;
				}
			}
		}
	}
	private: System::Void btnVerProp_Click(System::Object^  sender, System::EventArgs^  e) {

		if (turnop1) {
			if (oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador1()).size() != 0) {
				FormMochila ^Mochila = gcnew FormMochila(oJuego, turnop1, turnop2, UnJugador);
				Mochila->ShowDialog(); Mochila->Actualizar(oJuego); delete Mochila;
			}
			else {
				MessageBox::Show("No tienes ninguna propiedad.", "Alerta", MessageBoxButtons::OK);
			}
		}
		else if (turnop2) {
			if (oJuego->Get_Propiedades_Jugador(oJuego->Get_Jugador2()).size() != 0) {
				FormMochila ^Mochila = gcnew FormMochila(oJuego, turnop1, turnop2, UnJugador);
				Mochila->ShowDialog(); Mochila->Actualizar(oJuego); delete Mochila;
			}
			else {
				MessageBox::Show("No tienes ninguna propiedad.", "Alerta", MessageBoxButtons::OK);
			}
		}
	}
	private: System::Void btnRendirse_Click(System::Object^  sender, System::EventArgs^  e) {
		if (turnop1) {
			oJuego->Get_Jugador1()->Set_Dinero(0);
		}
		else if (turnop2) {
			oJuego->Get_Jugador2()->Set_Dinero(0);
		}
	}
};
}