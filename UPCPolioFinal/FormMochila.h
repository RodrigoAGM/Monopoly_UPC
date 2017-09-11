#pragma once
#include "Gestor.h"

namespace UPCPolioFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for FormMochila
	/// </summary>
	public ref class FormMochila : public System::Windows::Forms::Form
	{
	private:

		CGestor *oJuegoaux;
		bool turnop1aux;
		bool turnop2aux;
		bool UnJugadoraux;

	public:
		FormMochila(CGestor *obj, bool tp1, bool tp2, bool UJ)
		{
			InitializeComponent();
			oJuegoaux = obj;
			turnop1aux = tp1;
			turnop2aux = tp2;
			UnJugadoraux = UJ;
		}

		void Actualizar(CGestor *obj) {
			obj = oJuegoaux;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMochila()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PBIzquierda;
	protected:

	private: System::Windows::Forms::PictureBox^  PBDerecha;
	protected:

	private: System::Windows::Forms::PictureBox^  PBPropiedad;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnVenderBanco;
	private: System::Windows::Forms::Button^  btnVenderJugador;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMochila::typeid));
			this->PBIzquierda = (gcnew System::Windows::Forms::PictureBox());
			this->PBDerecha = (gcnew System::Windows::Forms::PictureBox());
			this->PBPropiedad = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnVenderBanco = (gcnew System::Windows::Forms::Button());
			this->btnVenderJugador = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBIzquierda))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDerecha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPropiedad))->BeginInit();
			this->SuspendLayout();
			// 
			// PBIzquierda
			// 
			this->PBIzquierda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBIzquierda.Image")));
			this->PBIzquierda->Location = System::Drawing::Point(12, 206);
			this->PBIzquierda->Name = L"PBIzquierda";
			this->PBIzquierda->Size = System::Drawing::Size(88, 57);
			this->PBIzquierda->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBIzquierda->TabIndex = 0;
			this->PBIzquierda->TabStop = false;
			this->PBIzquierda->Click += gcnew System::EventHandler(this, &FormMochila::PBIzquierda_Click);
			// 
			// PBDerecha
			// 
			this->PBDerecha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBDerecha.Image")));
			this->PBDerecha->Location = System::Drawing::Point(353, 206);
			this->PBDerecha->Name = L"PBDerecha";
			this->PBDerecha->Size = System::Drawing::Size(88, 57);
			this->PBDerecha->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBDerecha->TabIndex = 1;
			this->PBDerecha->TabStop = false;
			this->PBDerecha->Click += gcnew System::EventHandler(this, &FormMochila::PBDerecha_Click);
			// 
			// PBPropiedad
			// 
			this->PBPropiedad->Location = System::Drawing::Point(111, 54);
			this->PBPropiedad->Name = L"PBPropiedad";
			this->PBPropiedad->Size = System::Drawing::Size(232, 346);
			this->PBPropiedad->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBPropiedad->TabIndex = 2;
			this->PBPropiedad->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(121, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Mis Propiedades";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnVenderBanco
			// 
			this->btnVenderBanco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->btnVenderBanco->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVenderBanco->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnVenderBanco->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnVenderBanco->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVenderBanco->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVenderBanco->ForeColor = System::Drawing::Color::Black;
			this->btnVenderBanco->Location = System::Drawing::Point(30, 409);
			this->btnVenderBanco->Name = L"btnVenderBanco";
			this->btnVenderBanco->Size = System::Drawing::Size(171, 67);
			this->btnVenderBanco->TabIndex = 26;
			this->btnVenderBanco->Text = L"Vender al \r\nbanco";
			this->btnVenderBanco->UseVisualStyleBackColor = false;
			this->btnVenderBanco->Click += gcnew System::EventHandler(this, &FormMochila::btnVenderBanco_Click);
			// 
			// btnVenderJugador
			// 
			this->btnVenderJugador->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->btnVenderJugador->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVenderJugador->FlatAppearance->MouseDownBackColor = System::Drawing::Color::OrangeRed;
			this->btnVenderJugador->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnVenderJugador->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVenderJugador->Font = (gcnew System::Drawing::Font(L"Elephant", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVenderJugador->ForeColor = System::Drawing::Color::Black;
			this->btnVenderJugador->Location = System::Drawing::Point(249, 409);
			this->btnVenderJugador->Name = L"btnVenderJugador";
			this->btnVenderJugador->Size = System::Drawing::Size(171, 67);
			this->btnVenderJugador->TabIndex = 27;
			this->btnVenderJugador->Text = L"Vender al otro jugador";
			this->btnVenderJugador->UseVisualStyleBackColor = false;
			this->btnVenderJugador->Click += gcnew System::EventHandler(this, &FormMochila::btnVenderJugador_Click);
			// 
			// FormMochila
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(453, 488);
			this->Controls->Add(this->btnVenderJugador);
			this->Controls->Add(this->btnVenderBanco);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PBPropiedad);
			this->Controls->Add(this->PBDerecha);
			this->Controls->Add(this->PBIzquierda);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormMochila";
			this->Text = L"Mis Propiedades";
			this->Load += gcnew System::EventHandler(this, &FormMochila::FormMochila_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBIzquierda))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBDerecha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPropiedad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int maximo, minimo, posicion;

		void AsignaImagen(string Nombre) {
			if (Nombre == "Av. Larco") {
				PBPropiedad->Image = Image::FromFile("Av Larco.png");
			}
			else if (Nombre == "Av. Arequipa") {
				PBPropiedad->Image = Image::FromFile("Av Arequipa.png");
			}
			else if (Nombre == "Paseo de la Republica") {
				PBPropiedad->Image = Image::FromFile("Paseo de la Republica.png");
			}
			else if (Nombre == "Jr. de la Union") {
				PBPropiedad->Image = Image::FromFile("Jr de la Union.png");
			}
			else if (Nombre == "Plaza San Martin") {
				PBPropiedad->Image = Image::FromFile("Plaza San Martin.png");
			}
			else if (Nombre == "Centro Civico") {
				PBPropiedad->Image = Image::FromFile("Centro Civico.png");
			}
			else if (Nombre == "Av. Bolivar") {
				PBPropiedad->Image = Image::FromFile("Av Bolivar.png");
			}
			else if (Nombre == "UNMSM") {
				PBPropiedad->Image = Image::FromFile("UNMSM.png");
			}
			else if (Nombre == "Av. Venezuela") {
				PBPropiedad->Image = Image::FromFile("Av Venezuela.png");
			}
			else if (Nombre == "Av. La Marina") {
				PBPropiedad->Image = Image::FromFile("Av La Marina.png");
			}
			else if (Nombre == "Plaza San Miguel") {
				PBPropiedad->Image = Image::FromFile("Plaza San Miguel.png");
			}
			else if (Nombre == "Av. Primavera") {
				PBPropiedad->Image = Image::FromFile("Av Primavera.png");
			}
			else if (Nombre == "UPC") {
				PBPropiedad->Image = Image::FromFile("UPC.png");
			}
			else if (Nombre == "Bembos Surco") {
				PBPropiedad->Image = Image::FromFile("Bembos.png");
			}
		}
		void ValidarVenderJugador() {
			if (turnop1aux) {
				if (oJuegoaux->Get_Jugador2()->Get_Dinero() < oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Get_80()) {
					btnVenderJugador->Enabled = false; btnVenderJugador->BackColor = Color::LightGray;
				}
				else {
					btnVenderJugador->Enabled = true; btnVenderJugador->BackColor = Color::FromArgb(215, 25, 27);
				}
			}
			else if (turnop2aux) {
				if (oJuegoaux->Get_Jugador1()->Get_Dinero() < oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2())[posicion]->Get_80()) {
					btnVenderJugador->Enabled = false; btnVenderJugador->BackColor = Color::LightGray;
				}
				else {
					btnVenderJugador->Enabled = true; btnVenderJugador->BackColor = Color::FromArgb(215, 25, 27);
				}
			}
		}
		void ReiniciarForm() {
			vector <CPropiedad*> Propiedadesaux;
			if (turnop1aux) {
				Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1());
			}
			else if (turnop2aux) {
				Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2());
			}
			minimo = 0;
			maximo = Propiedadesaux.size() - 1;
			posicion = 0;
			AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
			ValidarVenderJugador();
		}

	private: System::Void PBDerecha_Click(System::Object^  sender, System::EventArgs^  e) {
		vector <CPropiedad*> Propiedadesaux;

		if (turnop1aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1());
		}
		else if (turnop2aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2());
		}
		
		if (posicion + 1 > maximo) {
			posicion = minimo;
			AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
		}
		else {
			posicion++;
			AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
		}
		ValidarVenderJugador();
	}
	private: System::Void PBIzquierda_Click(System::Object^  sender, System::EventArgs^  e) {
		
		vector <CPropiedad*> Propiedadesaux;

		if (turnop1aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1());
		}
		else if (turnop2aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2());
		}
		
		if (posicion - 1 < minimo) {
			posicion = maximo;
			AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
		}
		else {
			posicion--;
			AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
		}
		ValidarVenderJugador();
	}
	private: System::Void FormMochila_Load(System::Object^  sender, System::EventArgs^  e) {
		
		vector <CPropiedad*> Propiedadesaux;

		if (turnop1aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1());
		}
		else if (turnop2aux) {
			Propiedadesaux = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2());
		}
		minimo = 0;
		maximo = Propiedadesaux.size() - 1;
		posicion = 0;
		AsignaImagen(Propiedadesaux[posicion]->Get_Nombre());
		ValidarVenderJugador();
	}
	private: System::Void btnVenderJugador_Click(System::Object^  sender, System::EventArgs^  e) {
		if (turnop1aux) {
			if (UnJugadoraux) {

				int precio = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Get_80();

				if (MessageBox::Show("" + gcnew String(oJuegoaux->Get_Jugador1()->Get_Nombre().c_str()) + ", deseas ofrecer tu propiedad a Mr. Monopoly por " +
					precio + " ?", "Alerta", MessageBoxButtons::YesNo) == System::Windows::
					Forms::DialogResult::Yes) {

					Random r; int n = r.Next(0, 2);
					if (n == 0) {
						MessageBox::Show("Mr. Monopoly rechazó la oferta.", "Alerta", MessageBoxButtons::OK);
						btnVenderJugador->Enabled = false; btnVenderJugador->BackColor = Color::LightGray;
					}
					else {
						MessageBox::Show("Mr. Monopoly aceptó la oferta.", "Alerta", MessageBoxButtons::OK);

						oJuegoaux->Get_Jugador1()->Set_Dinero(oJuegoaux->Get_Jugador1()->Get_Dinero() + precio);
						oJuegoaux->Get_Jugador2()->Set_Dinero(oJuegoaux->Get_Jugador2()->Get_Dinero() - precio);
						oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Set_Dueno("Mr. Monopoly");
						oJuegoaux->Get_Jugador1()->Set_NPropiedades(oJuegoaux->Get_Jugador1()->Get_NPropiedades() - 1);
						oJuegoaux->Get_Jugador2()->Set_NPropiedades(oJuegoaux->Get_Jugador2()->Get_NPropiedades() + 1);
						if (oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1()).size() == 0) {
							this->Close();
						}
						else {
							ReiniciarForm();
						}
					}
				}
			}
			else {

				int precio = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Get_80();

				if (MessageBox::Show("" + gcnew String(oJuegoaux->Get_Jugador2()->Get_Nombre().c_str()) + ", deseas aceptar la propuesta de " +
					gcnew String(oJuegoaux->Get_Jugador1()->Get_Nombre().c_str()) + " por " + precio + " ?", "Alerta", MessageBoxButtons::YesNo) == System::Windows::
					Forms::DialogResult::Yes) {

					oJuegoaux->Get_Jugador1()->Set_Dinero(oJuegoaux->Get_Jugador1()->Get_Dinero() + precio);
					oJuegoaux->Get_Jugador2()->Set_Dinero(oJuegoaux->Get_Jugador2()->Get_Dinero() - precio);
					oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Set_Dueno(oJuegoaux->Get_Jugador2()->Get_Nombre());
					oJuegoaux->Get_Jugador1()->Set_NPropiedades(oJuegoaux->Get_Jugador1()->Get_NPropiedades() - 1);
					oJuegoaux->Get_Jugador2()->Set_NPropiedades(oJuegoaux->Get_Jugador2()->Get_NPropiedades() + 1);
					if (oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1()).size() == 0) {
						this->Close();
					}
					else {
						ReiniciarForm();
					}
				}
				else {
					MessageBox::Show(gcnew String(oJuegoaux->Get_Jugador2()->Get_Nombre().c_str()) + " rechazó la oferta.", "Alerta", MessageBoxButtons::OK);
					btnVenderJugador->Enabled = false; btnVenderJugador->BackColor = Color::LightGray;
				}
			}
		}
		else if (turnop2aux) {

			int precio = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2())[posicion]->Get_80();

			if (MessageBox::Show("" + gcnew String(oJuegoaux->Get_Jugador1()->Get_Nombre().c_str()) + ", deseas aceptar la propuesta de " +
				gcnew String(oJuegoaux->Get_Jugador2()->Get_Nombre().c_str()) + " por " + precio + " ?", "Alerta", MessageBoxButtons::YesNo) == System::Windows::
				Forms::DialogResult::Yes) {

				oJuegoaux->Get_Jugador2()->Set_Dinero(oJuegoaux->Get_Jugador2()->Get_Dinero() + precio);
				oJuegoaux->Get_Jugador1()->Set_Dinero(oJuegoaux->Get_Jugador1()->Get_Dinero() - precio);
				oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2())[posicion]->Set_Dueno(oJuegoaux->Get_Jugador1()->Get_Nombre());
				oJuegoaux->Get_Jugador1()->Set_NPropiedades(oJuegoaux->Get_Jugador1()->Get_NPropiedades() + 1);
				oJuegoaux->Get_Jugador2()->Set_NPropiedades(oJuegoaux->Get_Jugador2()->Get_NPropiedades() - 1);
				if (oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2()).size() == 0) {
					this->Close();
				}
				else {
					ReiniciarForm();
				}
			}
			else {
				MessageBox::Show(gcnew String(oJuegoaux->Get_Jugador1()->Get_Nombre().c_str()) + " rechazó la oferta.", "Alerta", MessageBoxButtons::OK);
				btnVenderJugador->Enabled = false; btnVenderJugador->BackColor = Color::LightGray;
			}
		}
	}
	private: System::Void btnVenderBanco_Click(System::Object^  sender, System::EventArgs^  e) {
		if (turnop1aux) {

			int precio = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Get_60();

			if (MessageBox::Show("¿Seguro que deseas vender esta propiedad al banco por " + precio + " ?", "Alerta", MessageBoxButtons::YesNo) ==
				System::Windows::Forms::DialogResult::Yes) {

				oJuegoaux->Get_Jugador1()->Set_Dinero(oJuegoaux->Get_Jugador1()->Get_Dinero() + precio);
				oJuegoaux->Get_Banco()->Set_Dinero(oJuegoaux->Get_Banco()->Get_Dinero() - precio);
				oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1())[posicion]->Set_Dueno("Banco");
				oJuegoaux->Get_Jugador1()->Set_NPropiedades(oJuegoaux->Get_Jugador1()->Get_NPropiedades() - 1);
				oJuegoaux->Get_Banco()->Set_NPropiedades(oJuegoaux->Get_Banco()->Get_NPropiedades() + 1);
				if (oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador1()).size() == 0) {
					this->Close();
				}
				else {
					ReiniciarForm();
				}
			}
		}
		else if (turnop2aux) {

			int precio = oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2())[posicion]->Get_60();

			if (MessageBox::Show("¿Seguro que deseas vender esta propiedad al banco por " + precio + " ?", "Alerta", MessageBoxButtons::YesNo) ==
				System::Windows::Forms::DialogResult::Yes) {

				oJuegoaux->Get_Jugador2()->Set_Dinero(oJuegoaux->Get_Jugador2()->Get_Dinero() + precio);
				oJuegoaux->Get_Banco()->Set_Dinero(oJuegoaux->Get_Banco()->Get_Dinero() - precio);
				oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2())[posicion]->Set_Dueno("Banco");
				oJuegoaux->Get_Jugador2()->Set_NPropiedades(oJuegoaux->Get_Jugador2()->Get_NPropiedades() - 1);
				oJuegoaux->Get_Banco()->Set_NPropiedades(oJuegoaux->Get_Banco()->Get_NPropiedades() + 1);
				if (oJuegoaux->Get_Propiedades_Jugador(oJuegoaux->Get_Jugador2()).size() == 0) {
					this->Close();
				}
				else {
					ReiniciarForm();
				}
			}
		}
	}
};
}
