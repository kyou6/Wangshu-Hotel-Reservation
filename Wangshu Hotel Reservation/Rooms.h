#pragma once
#include "UserData.h"																																				// To send out data to Receipt Form

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Rooms : public System::Windows::Forms::Form
	{
	public:
		Rooms(void)
		{
			InitializeComponent();
		}

	protected:
		~Rooms()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ imgStandardRoom;																									// Setting up all Controls to be used
	private: System::Windows::Forms::PictureBox^ imgDeluxeRoom;
	private: System::Windows::Forms::PictureBox^ imgSuiteRoom;
	private: System::Windows::Forms::PictureBox^ imgExecutiveRoom;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblRoom;
	private: System::Windows::Forms::Label^ lblStandardRoom;
	private: System::Windows::Forms::Label^ lblDeluxeRoom;
	private: System::Windows::Forms::Label^ lblSuiteRoom;
	private: System::Windows::Forms::Label^ lblExecutiveRoom;
	private: System::Windows::Forms::Label^ lblStandardDesc;
	private: System::Windows::Forms::Label^ lblDeluxeDesc;
	private: System::Windows::Forms::Label^ lblSuiteDesc;
	private: System::Windows::Forms::Label^ lblExecutiveDesc;
	private: System::Windows::Forms::Button^ btnDeluxeRoom;
	private: System::Windows::Forms::Button^ btnStandardRoom;
	private: System::Windows::Forms::Button^ btnSuiteRoom;
	private: System::Windows::Forms::Button^ btnExecutiveRoom;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rooms::typeid));
			this->imgStandardRoom = (gcnew System::Windows::Forms::PictureBox());
			this->imgDeluxeRoom = (gcnew System::Windows::Forms::PictureBox());
			this->imgSuiteRoom = (gcnew System::Windows::Forms::PictureBox());
			this->imgExecutiveRoom = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblRoom = (gcnew System::Windows::Forms::Label());
			this->lblStandardRoom = (gcnew System::Windows::Forms::Label());
			this->lblDeluxeRoom = (gcnew System::Windows::Forms::Label());
			this->lblSuiteRoom = (gcnew System::Windows::Forms::Label());
			this->lblExecutiveRoom = (gcnew System::Windows::Forms::Label());
			this->lblStandardDesc = (gcnew System::Windows::Forms::Label());
			this->lblDeluxeDesc = (gcnew System::Windows::Forms::Label());
			this->lblSuiteDesc = (gcnew System::Windows::Forms::Label());
			this->lblExecutiveDesc = (gcnew System::Windows::Forms::Label());
			this->btnDeluxeRoom = (gcnew System::Windows::Forms::Button());
			this->btnStandardRoom = (gcnew System::Windows::Forms::Button());
			this->btnSuiteRoom = (gcnew System::Windows::Forms::Button());
			this->btnExecutiveRoom = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgStandardRoom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDeluxeRoom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSuiteRoom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgExecutiveRoom))->BeginInit();
			this->SuspendLayout();
			// 
			// imgStandardRoom
			// 
			this->imgStandardRoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgStandardRoom.Image")));
			this->imgStandardRoom->Location = System::Drawing::Point(41, 151);
			this->imgStandardRoom->Name = L"imgStandardRoom";
			this->imgStandardRoom->Size = System::Drawing::Size(291, 188);
			this->imgStandardRoom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgStandardRoom->TabIndex = 0;
			this->imgStandardRoom->TabStop = false;
			// 
			// imgDeluxeRoom
			// 
			this->imgDeluxeRoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgDeluxeRoom.Image")));
			this->imgDeluxeRoom->Location = System::Drawing::Point(41, 405);
			this->imgDeluxeRoom->Name = L"imgDeluxeRoom";
			this->imgDeluxeRoom->Size = System::Drawing::Size(291, 188);
			this->imgDeluxeRoom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgDeluxeRoom->TabIndex = 0;
			this->imgDeluxeRoom->TabStop = false;
			// 
			// imgSuiteRoom
			// 
			this->imgSuiteRoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgSuiteRoom.Image")));
			this->imgSuiteRoom->Location = System::Drawing::Point(664, 151);
			this->imgSuiteRoom->Name = L"imgSuiteRoom";
			this->imgSuiteRoom->Size = System::Drawing::Size(291, 188);
			this->imgSuiteRoom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgSuiteRoom->TabIndex = 0;
			this->imgSuiteRoom->TabStop = false;
			// 
			// imgExecutiveRoom
			// 
			this->imgExecutiveRoom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgExecutiveRoom.Image")));
			this->imgExecutiveRoom->Location = System::Drawing::Point(664, 405);
			this->imgExecutiveRoom->Name = L"imgExecutiveRoom";
			this->imgExecutiveRoom->Size = System::Drawing::Size(291, 188);
			this->imgExecutiveRoom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgExecutiveRoom->TabIndex = 0;
			this->imgExecutiveRoom->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Location = System::Drawing::Point(39, 78);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1200, 3);
			this->panel1->TabIndex = 40;
			// 
			// lblRoom
			// 
			this->lblRoom->AutoSize = true;
			this->lblRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 32));
			this->lblRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRoom->Location = System::Drawing::Point(29, 18);
			this->lblRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblRoom->Name = L"lblRoom";
			this->lblRoom->Size = System::Drawing::Size(360, 60);
			this->lblRoom->TabIndex = 39;
			this->lblRoom->Text = L"SELECT A ROOM";
			// 
			// lblStandardRoom
			// 
			this->lblStandardRoom->AutoSize = true;
			this->lblStandardRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStandardRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblStandardRoom->Location = System::Drawing::Point(344, 151);
			this->lblStandardRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblStandardRoom->Name = L"lblStandardRoom";
			this->lblStandardRoom->Size = System::Drawing::Size(248, 37);
			this->lblStandardRoom->TabIndex = 41;
			this->lblStandardRoom->Text = L"STANDARD ROOM";
			// 
			// lblDeluxeRoom
			// 
			this->lblDeluxeRoom->AutoSize = true;
			this->lblDeluxeRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDeluxeRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDeluxeRoom->Location = System::Drawing::Point(347, 405);
			this->lblDeluxeRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblDeluxeRoom->Name = L"lblDeluxeRoom";
			this->lblDeluxeRoom->Size = System::Drawing::Size(209, 37);
			this->lblDeluxeRoom->TabIndex = 41;
			this->lblDeluxeRoom->Text = L"DELUXE ROOM";
			// 
			// lblSuiteRoom
			// 
			this->lblSuiteRoom->AutoSize = true;
			this->lblSuiteRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSuiteRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblSuiteRoom->Location = System::Drawing::Point(968, 147);
			this->lblSuiteRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblSuiteRoom->Name = L"lblSuiteRoom";
			this->lblSuiteRoom->Size = System::Drawing::Size(181, 37);
			this->lblSuiteRoom->TabIndex = 41;
			this->lblSuiteRoom->Text = L"SUITE ROOM";
			// 
			// lblExecutiveRoom
			// 
			this->lblExecutiveRoom->AutoSize = true;
			this->lblExecutiveRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExecutiveRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblExecutiveRoom->Location = System::Drawing::Point(965, 405);
			this->lblExecutiveRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblExecutiveRoom->Name = L"lblExecutiveRoom";
			this->lblExecutiveRoom->Size = System::Drawing::Size(251, 37);
			this->lblExecutiveRoom->TabIndex = 41;
			this->lblExecutiveRoom->Text = L"EXECUTIVE ROOM";
			// 
			// lblStandardDesc
			// 
			this->lblStandardDesc->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStandardDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblStandardDesc->Location = System::Drawing::Point(348, 190);
			this->lblStandardDesc->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblStandardDesc->Name = L"lblStandardDesc";
			this->lblStandardDesc->Size = System::Drawing::Size(281, 82);
			this->lblStandardDesc->TabIndex = 38;
			this->lblStandardDesc->Text = L"A basic type of hotel room and usually comes with a queen or twin-sized bed, a pr"
				L"ivate bathroom, and basic amenities. The rate for a standard room could range fr"
				L"om PHP 4,000 per night.";
			// 
			// lblDeluxeDesc
			// 
			this->lblDeluxeDesc->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDeluxeDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDeluxeDesc->Location = System::Drawing::Point(351, 457);
			this->lblDeluxeDesc->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblDeluxeDesc->Name = L"lblDeluxeDesc";
			this->lblDeluxeDesc->Size = System::Drawing::Size(278, 82);
			this->lblDeluxeDesc->TabIndex = 38;
			this->lblDeluxeDesc->Text = resources->GetString(L"lblDeluxeDesc.Text");
			// 
			// lblSuiteDesc
			// 
			this->lblSuiteDesc->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSuiteDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblSuiteDesc->Location = System::Drawing::Point(972, 190);
			this->lblSuiteDesc->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblSuiteDesc->Name = L"lblSuiteDesc";
			this->lblSuiteDesc->Size = System::Drawing::Size(284, 109);
			this->lblSuiteDesc->TabIndex = 38;
			this->lblSuiteDesc->Text = L"A Suite Room is a spacious and luxurious room that usually comes with a separate "
				L"living area, a kitchenette, and a larger bathroom. The rate for a suite room cou"
				L"ld range from PHP 10,000 per night.";
			// 
			// lblExecutiveDesc
			// 
			this->lblExecutiveDesc->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExecutiveDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblExecutiveDesc->Location = System::Drawing::Point(972, 444);
			this->lblExecutiveDesc->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblExecutiveDesc->Name = L"lblExecutiveDesc";
			this->lblExecutiveDesc->Size = System::Drawing::Size(281, 109);
			this->lblExecutiveDesc->TabIndex = 38;
			this->lblExecutiveDesc->Text = resources->GetString(L"lblExecutiveDesc.Text");
			// 
			// btnDeluxeRoom
			// 
			this->btnDeluxeRoom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnDeluxeRoom->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnDeluxeRoom->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnDeluxeRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeluxeRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeluxeRoom->ForeColor = System::Drawing::Color::Black;
			this->btnDeluxeRoom->Location = System::Drawing::Point(354, 556);
			this->btnDeluxeRoom->Name = L"btnDeluxeRoom";
			this->btnDeluxeRoom->Size = System::Drawing::Size(133, 37);
			this->btnDeluxeRoom->TabIndex = 43;
			this->btnDeluxeRoom->Text = L"BOOK NOW";
			this->btnDeluxeRoom->UseVisualStyleBackColor = false;
			this->btnDeluxeRoom->Click += gcnew System::EventHandler(this, &Rooms::btnDeluxeRoom_Click);
			// 
			// btnStandardRoom
			// 
			this->btnStandardRoom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnStandardRoom->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnStandardRoom->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnStandardRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStandardRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStandardRoom->ForeColor = System::Drawing::Color::Black;
			this->btnStandardRoom->Location = System::Drawing::Point(351, 302);
			this->btnStandardRoom->Name = L"btnStandardRoom";
			this->btnStandardRoom->Size = System::Drawing::Size(133, 37);
			this->btnStandardRoom->TabIndex = 43;
			this->btnStandardRoom->Text = L"BOOK NOW";
			this->btnStandardRoom->UseVisualStyleBackColor = false;
			this->btnStandardRoom->Click += gcnew System::EventHandler(this, &Rooms::btnStandardRoom_Click);
			// 
			// btnSuiteRoom
			// 
			this->btnSuiteRoom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnSuiteRoom->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnSuiteRoom->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnSuiteRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSuiteRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSuiteRoom->ForeColor = System::Drawing::Color::Black;
			this->btnSuiteRoom->Location = System::Drawing::Point(972, 302);
			this->btnSuiteRoom->Name = L"btnSuiteRoom";
			this->btnSuiteRoom->Size = System::Drawing::Size(133, 37);
			this->btnSuiteRoom->TabIndex = 43;
			this->btnSuiteRoom->Text = L"BOOK NOW";
			this->btnSuiteRoom->UseVisualStyleBackColor = false;
			this->btnSuiteRoom->Click += gcnew System::EventHandler(this, &Rooms::btnSuiteRoom_Click);
			// 
			// btnExecutiveRoom
			// 
			this->btnExecutiveRoom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnExecutiveRoom->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnExecutiveRoom->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnExecutiveRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExecutiveRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecutiveRoom->ForeColor = System::Drawing::Color::Black;
			this->btnExecutiveRoom->Location = System::Drawing::Point(972, 556);
			this->btnExecutiveRoom->Name = L"btnExecutiveRoom";
			this->btnExecutiveRoom->Size = System::Drawing::Size(133, 37);
			this->btnExecutiveRoom->TabIndex = 43;
			this->btnExecutiveRoom->Text = L"BOOK NOW";
			this->btnExecutiveRoom->UseVisualStyleBackColor = false;
			this->btnExecutiveRoom->Click += gcnew System::EventHandler(this, &Rooms::btnExecutiveRoom_Click);
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
			this->btnCancel->Location = System::Drawing::Point(1109, 660);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(145, 48);
			this->btnCancel->TabIndex = 66;
			this->btnCancel->Text = L"Back";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Rooms::btnCancel_Click);
			// 
			// Rooms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->btnStandardRoom);
			this->Controls->Add(this->btnExecutiveRoom);
			this->Controls->Add(this->btnSuiteRoom);
			this->Controls->Add(this->btnDeluxeRoom);
			this->Controls->Add(this->lblExecutiveRoom);
			this->Controls->Add(this->lblSuiteRoom);
			this->Controls->Add(this->lblDeluxeRoom);
			this->Controls->Add(this->lblStandardRoom);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblExecutiveDesc);
			this->Controls->Add(this->lblSuiteDesc);
			this->Controls->Add(this->lblDeluxeDesc);
			this->Controls->Add(this->lblStandardDesc);
			this->Controls->Add(this->lblRoom);
			this->Controls->Add(this->imgExecutiveRoom);
			this->Controls->Add(this->imgSuiteRoom);
			this->Controls->Add(this->imgDeluxeRoom);
			this->Controls->Add(this->imgStandardRoom);
			this->Controls->Add(this->btnCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Rooms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rooms";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgStandardRoom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDeluxeRoom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSuiteRoom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgExecutiveRoom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToReceipt = false;																															// Sets Form Switching as False
	public: bool switchToDate = false;

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {																			// Switch to Date.h
		this->switchToDate = true;
		this->Close();
	}

	private: System::Void btnDeluxeRoom_Click(System::Object^ sender, System::EventArgs^ e) {																		// Sends to UserData.h with Room Type: Deluxe - P6000
		userInput.roomType = "DELUXE ROOM";
		userInput.roomPricing = "6000";
		this->switchToReceipt = true;
		this->Close();
	}

	private: System::Void btnStandardRoom_Click(System::Object^ sender, System::EventArgs^ e) {																		// Sends to UserData.h with Room Typw: Standard - P4000
		userInput.roomType = "STANDARD ROOM";
		userInput.roomPricing = "4000";
		this->switchToReceipt = true;
		this->Close();
	}

	private: System::Void btnSuiteRoom_Click(System::Object^ sender, System::EventArgs^ e) {																		// Sends to UserData.h with Room Type: Suite - P10000
		userInput.roomType = "SUITE ROOM";
		userInput.roomPricing = "10000";
		this->switchToReceipt = true;
		this->Close();
	}

	private: System::Void btnExecutiveRoom_Click(System::Object^ sender, System::EventArgs^ e) {																	// Sends to UserData.h with Room Type: Executive - P15000
		userInput.roomType = "EXECUTIVE ROOM";
		userInput.roomPricing = "15000";
		this->switchToReceipt = true;
		this->Close();
	}
};
}