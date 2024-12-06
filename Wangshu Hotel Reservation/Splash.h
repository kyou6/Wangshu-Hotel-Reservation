#pragma once
#include "Welcome.h"																																				// To switch to Welcome.h

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Splash : public System::Windows::Forms::Form
	{

	public:
		Splash(void)
		{
			InitializeComponent();
			timer1->Start();																																		// After launching, start the timer
			timer1->Interval = 1000;																																// Sets the Interval to 1 Second
		}
	bool switchToWelcome = false;
	int seconds = 3;																																				// Sets the timer into 3 Seconds

	protected:
		~Splash()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ imgLogo;																											// Setting up all Controls to be used
	private: System::Windows::Forms::PictureBox^ imgLoading;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Splash::typeid));
			this->imgLogo = (gcnew System::Windows::Forms::PictureBox());
			this->imgLoading = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLoading))->BeginInit();
			this->SuspendLayout();
			// 
			// imgLogo
			// 
			this->imgLogo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->imgLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLogo.Image")));
			this->imgLogo->Location = System::Drawing::Point(53, 33);
			this->imgLogo->Name = L"imgLogo";
			this->imgLogo->Size = System::Drawing::Size(199, 174);
			this->imgLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgLogo->TabIndex = 3;
			this->imgLogo->TabStop = false;
			// 
			// imgLoading
			// 
			this->imgLoading->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->imgLoading->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->imgLoading->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLoading.Image")));
			this->imgLoading->Location = System::Drawing::Point(-96, 152);
			this->imgLoading->Name = L"imgLoading";
			this->imgLoading->Size = System::Drawing::Size(497, 278);
			this->imgLoading->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgLoading->TabIndex = 3;
			this->imgLoading->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Splash::timer1_Tick);
			// 
			// Splash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(300, 400);
			this->Controls->Add(this->imgLogo);
			this->Controls->Add(this->imgLoading);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 400);
			this->MinimumSize = System::Drawing::Size(300, 400);
			this->Name = L"Splash";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Splash";
			this->Load += gcnew System::EventHandler(this, &Splash::Splash_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLoading))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {																				// Timer to decrement the set time in seconds before switching to Welcome.h
		seconds--;
		if (seconds == 0)
		{
			switchToWelcome = true;
			Close();
		}
	}

	private: System::Void Splash_Load(System::Object^ sender, System::EventArgs^ e) {																				// Checks if Database is connected
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Wangshu;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to the database. Error: " + ex->Message, "Connection Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);		// If failed, it will prompt the user and close the program
			Close();
		}
	}
	};
}