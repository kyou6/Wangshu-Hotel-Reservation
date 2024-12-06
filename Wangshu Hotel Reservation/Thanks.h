#pragma once
#include "UserData.h"																																				// To clear out the data in the UserData.h

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Thanks : public System::Windows::Forms::Form
	{
	public:
		Thanks(void)
		{
			InitializeComponent();
		}

	protected:
		~Thanks()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnNo;																													// Setting up all Controls to be used
	private: System::Windows::Forms::Button^ btnYes;
	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::Windows::Forms::Label^ lblDesc;
	private: System::Windows::Forms::PictureBox^ imgLogo;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Thanks::typeid));
			this->btnNo = (gcnew System::Windows::Forms::Button());
			this->btnYes = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->lblDesc = (gcnew System::Windows::Forms::Label());
			this->imgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnNo
			// 
			this->btnNo->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->btnNo->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnNo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNo->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->btnNo->Location = System::Drawing::Point(419, 484);
			this->btnNo->Name = L"btnNo";
			this->btnNo->Size = System::Drawing::Size(185, 53);
			this->btnNo->TabIndex = 0;
			this->btnNo->Text = L"No";
			this->btnNo->UseVisualStyleBackColor = false;
			this->btnNo->Click += gcnew System::EventHandler(this, &Thanks::btnNo_Click);
			// 
			// btnYes
			// 
			this->btnYes->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnYes->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnYes->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnYes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnYes->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnYes->ForeColor = System::Drawing::Color::Black;
			this->btnYes->Location = System::Drawing::Point(632, 484);
			this->btnYes->Name = L"btnYes";
			this->btnYes->Size = System::Drawing::Size(185, 53);
			this->btnYes->TabIndex = 0;
			this->btnYes->Text = L"Yes";
			this->btnYes->UseVisualStyleBackColor = false;
			this->btnYes->Click += gcnew System::EventHandler(this, &Thanks::btnYes_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblWelcome->AutoSize = true;
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Raleway ExtraLight", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblWelcome->Location = System::Drawing::Point(368, 370);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(520, 29);
			this->lblWelcome->TabIndex = 1;
			this->lblWelcome->Text = L"THANK YOU FOR CHOOSING WANGSHU HOTEL";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblDesc
			// 
			this->lblDesc->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblDesc->AutoSize = true;
			this->lblDesc->Font = (gcnew System::Drawing::Font(L"HeliosExtThin", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDesc->Location = System::Drawing::Point(495, 415);
			this->lblDesc->Name = L"lblDesc";
			this->lblDesc->Size = System::Drawing::Size(265, 14);
			this->lblDesc->TabIndex = 1;
			this->lblDesc->Text = L"Would you like to make another Reservation\?    ";
			this->lblDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// imgLogo
			// 
			this->imgLogo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->imgLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLogo.Image")));
			this->imgLogo->Location = System::Drawing::Point(481, 146);
			this->imgLogo->Name = L"imgLogo";
			this->imgLogo->Size = System::Drawing::Size(291, 256);
			this->imgLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgLogo->TabIndex = 2;
			this->imgLogo->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Location = System::Drawing::Point(438, 402);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(366, 3);
			this->panel1->TabIndex = 37;
			// 
			// Thanks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnYes);
			this->Controls->Add(this->btnNo);
			this->Controls->Add(this->lblDesc);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->imgLogo);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Thanks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wangshu Hotel Reservation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToProfile = false;
	private: System::Void btnYes_Click(System::Object^ sender, System::EventArgs^ e) {																				// Clear all inputs from the previous user and switch to Profile.h
		userInput.lastName = "";
		userInput.firstName = "";
		userInput.middleName = "";
		userInput.contactNo = "";
		userInput.phoneNo = "";
		userInput.email = "";
		userInput.country = "";
		userInput.region = "";
		userInput.city = "";
		userInput.zip = "";
		userInput.compAddress = "";
		this->switchToProfile = true;
		this->Close();
	}

	private: System::Void btnNo_Click(System::Object^ sender, System::EventArgs^ e) {																				// Closes the program
		this->Close();
	}
};
}
