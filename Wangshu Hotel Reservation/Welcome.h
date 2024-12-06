#pragma once
#include "Profile.h"																																				// Verifies if it still connected to database and to switch to Profile.h

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
		{
			InitializeComponent();
		}

	protected:
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnCancel;																												// Setting up all Controls to be used
	private: System::Windows::Forms::Button^ btnProceed;
	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::Windows::Forms::Label^ lblRTU;
	private: System::Windows::Forms::Label^ lblDesc;
	private: System::Windows::Forms::PictureBox^ imgLogo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblVersion;

	protected:
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome::typeid));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->lblRTU = (gcnew System::Windows::Forms::Label());
			this->lblDesc = (gcnew System::Windows::Forms::Label());
			this->imgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblVersion = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::NavajoWhite;
			this->btnCancel->Location = System::Drawing::Point(437, 511);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(366, 53);
			this->btnCancel->TabIndex = 0;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Welcome::btnCancel_Click);
			// 
			// btnProceed
			// 
			this->btnProceed->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnProceed->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnProceed->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnProceed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceed->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceed->ForeColor = System::Drawing::Color::Black;
			this->btnProceed->Location = System::Drawing::Point(437, 443);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(366, 53);
			this->btnProceed->TabIndex = 0;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &Welcome::btnProceed_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblWelcome->AutoSize = true;
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Raleway ExtraLight", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblWelcome->Location = System::Drawing::Point(438, 326);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(365, 29);
			this->lblWelcome->TabIndex = 1;
			this->lblWelcome->Text = L"WELCOME TO WANGSHU HOTEL";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblRTU
			// 
			this->lblRTU->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->lblRTU->AutoSize = true;
			this->lblRTU->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblRTU->Font = (gcnew System::Drawing::Font(L"Helios", 7));
			this->lblRTU->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRTU->Location = System::Drawing::Point(516, 642);
			this->lblRTU->Name = L"lblRTU";
			this->lblRTU->Size = System::Drawing::Size(223, 13);
			this->lblRTU->TabIndex = 1;
			this->lblRTU->Text = L"Rizal Technological University. Copyright 2023 ";
			this->lblRTU->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblRTU->Click += gcnew System::EventHandler(this, &Welcome::lblFooter_Click);
			// 
			// lblDesc
			// 
			this->lblDesc->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblDesc->AutoSize = true;
			this->lblDesc->Font = (gcnew System::Drawing::Font(L"HeliosExtThin", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDesc->Location = System::Drawing::Point(509, 371);
			this->lblDesc->Name = L"lblDesc";
			this->lblDesc->Size = System::Drawing::Size(230, 14);
			this->lblDesc->TabIndex = 1;
			this->lblDesc->Text = L"Would you like to make a Reservation\?    ";
			// 
			// imgLogo
			// 
			this->imgLogo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->imgLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLogo.Image")));
			this->imgLogo->Location = System::Drawing::Point(484, 112);
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
			this->panel1->Location = System::Drawing::Point(437, 358);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(366, 3);
			this->panel1->TabIndex = 37;
			// 
			// lblVersion
			// 
			this->lblVersion->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->lblVersion->AutoSize = true;
			this->lblVersion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblVersion->Font = (gcnew System::Drawing::Font(L"Helios", 7));
			this->lblVersion->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblVersion->Location = System::Drawing::Point(607, 666);
			this->lblVersion->Name = L"lblVersion";
			this->lblVersion->Size = System::Drawing::Size(39, 13);
			this->lblVersion->TabIndex = 1;
			this->lblVersion->Text = L"v.1.0.0";
			this->lblVersion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblVersion->Click += gcnew System::EventHandler(this, &Welcome::lblFooter_Click);
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->lblVersion);
			this->Controls->Add(this->lblRTU);
			this->Controls->Add(this->lblDesc);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->imgLogo);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Welcome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wangshu Hotel Reservation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {																			// Closes the program
		this->Close();
	}

	public: bool switchToProfile = false;
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {																			// Switch to Profile.h
		this->switchToProfile = true;
		this->Close();
	}

	private: System::Void lblFooter_Click(System::Object^ sender, System::EventArgs^ e) {																			// Link to the Official "Rizal Technological University" website
		System::Diagnostics::Process::Start("https://www.rtu.edu.ph");
	}
};
}
