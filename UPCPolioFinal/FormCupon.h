#pragma once

namespace UPCPolioFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCupon
	/// </summary>
	public ref class FormCupon : public System::Windows::Forms::Form
	{
		int numero = 0;

	public:
		FormCupon(int num)
		{
			InitializeComponent();
			numero = num;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCupon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PBImagen;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCupon::typeid));
			this->PBImagen = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBImagen))->BeginInit();
			this->SuspendLayout();
			// 
			// PBImagen
			// 
			this->PBImagen->Location = System::Drawing::Point(0, 0);
			this->PBImagen->Name = L"PBImagen";
			this->PBImagen->Size = System::Drawing::Size(551, 296);
			this->PBImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBImagen->TabIndex = 0;
			this->PBImagen->TabStop = false;
			// 
			// FormCupon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 295);
			this->Controls->Add(this->PBImagen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormCupon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cupòn";
			this->Load += gcnew System::EventHandler(this, &FormCupon::FormCupon_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBImagen))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void EligeCupon() {

			switch (numero)
			{
				case 1:
					PBImagen->Image = Image::FromFile("Cupon1.jpg");
					break;
				case 2:
					PBImagen->Image = Image::FromFile("Cupon2.jpg");
					break;
				case 3:
					PBImagen->Image = Image::FromFile("Cupon3.png");
					break;
				case 4:
					PBImagen->Image = Image::FromFile("Cupon4.jpg");
					break;
				case 5:
					PBImagen->Image = Image::FromFile("Cupon5.jpg");
					break;
			}

		}

	private: System::Void FormCupon_Load(System::Object^  sender, System::EventArgs^  e) {

		EligeCupon();
		PBImagen->Visible = true;

	}
};
}
