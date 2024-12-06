#pragma once
#include "UserData.h"																																				// Retrieves data from UserData.h
#include <msclr/marshal_cppstd.h>																																	// Marshaling or changes data type of a certain variable and transfers to a specified header
#include <sqltypes.h>																																				// For SQL Database 

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Data::Sql;	
	using namespace System::Drawing;

	public ref class Receipt : public System::Windows::Forms::Form
	{
	public:
		Receipt(void)
		{
			InitializeComponent();
		}
		double roomPricing = std::stod(userInput.roomPricing);																										// Converts roomPricing from string to double
		double dailyRate = userInput.dayGap * .25;																													// Gets the daily rate for the gap of day between Check In and Check Out
		double stayGap = roomPricing * dailyRate;																													// Add the Rate to the Room Price
		double stayPrice = roomPricing + stayGap;																													// Gets the overall Stay Price
		double tax = stayPrice * 0.12;																																// Gets 12% Tax to the overall Stay Price
		double totalPricing = stayPrice + tax;																														// Add the 12% Tax to the Stay Price to get the Total Pricing

	protected:
		~Receipt()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Label^ label4;																													// Setting up all Controls to be used
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::Label^ lblCompleteAddress;
	private: System::Windows::Forms::Label^ lblZip;
	private: System::Windows::Forms::Label^ lblCountry;
	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPhoneNo;
	private: System::Windows::Forms::Label^ lblContactNo;
	private: System::Windows::Forms::Label^ lblMiddleName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::TextBox^ txtRegion;
	private: System::Windows::Forms::TextBox^ txtCompAddress;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPhoneNo;
	private: System::Windows::Forms::TextBox^ txtZip;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::TextBox^ txtContactNo;
	private: System::Windows::Forms::TextBox^ txtCountry;
	private: System::Windows::Forms::TextBox^ txtMiddleName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblContactInfo;
	private: System::Windows::Forms::Label^ lblRoom;
	private: System::Windows::Forms::Label^ lblArrivalDeparture;
	private: System::Windows::Forms::TextBox^ txtRoomType;
	private: System::Windows::Forms::TextBox^ txtCheckIn;
	private: System::Windows::Forms::TextBox^ txtCheckOut;
	private: System::Windows::Forms::TextBox^ txtRoomPrice;
	private: System::Windows::Forms::Label^ lblCheckIn;
	private: System::Windows::Forms::Label^ lblCheckOut;
	private: System::Windows::Forms::Label^ lblRoomType;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ lblSummary;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::TextBox^ txtTotalPricing;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnProceed;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPayment;
	private: System::Windows::Forms::Label^ lblPesoRoomPrice;
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Receipt::typeid));
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->lblCompleteAddress = (gcnew System::Windows::Forms::Label());
			this->lblZip = (gcnew System::Windows::Forms::Label());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPhoneNo = (gcnew System::Windows::Forms::Label());
			this->lblContactNo = (gcnew System::Windows::Forms::Label());
			this->lblMiddleName = (gcnew System::Windows::Forms::Label());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtRegion = (gcnew System::Windows::Forms::TextBox());
			this->txtCompAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->txtZip = (gcnew System::Windows::Forms::TextBox());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->txtContactNo = (gcnew System::Windows::Forms::TextBox());
			this->txtCountry = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblContactInfo = (gcnew System::Windows::Forms::Label());
			this->lblRoom = (gcnew System::Windows::Forms::Label());
			this->lblArrivalDeparture = (gcnew System::Windows::Forms::Label());
			this->txtRoomType = (gcnew System::Windows::Forms::TextBox());
			this->txtCheckIn = (gcnew System::Windows::Forms::TextBox());
			this->txtCheckOut = (gcnew System::Windows::Forms::TextBox());
			this->txtRoomPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblCheckIn = (gcnew System::Windows::Forms::Label());
			this->lblCheckOut = (gcnew System::Windows::Forms::Label());
			this->lblRoomType = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblSummary = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->txtTotalPricing = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPayment = (gcnew System::Windows::Forms::TextBox());
			this->lblPesoRoomPrice = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblLastName->Location = System::Drawing::Point(140, 183);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(95, 21);
			this->lblLastName->TabIndex = 60;
			this->lblLastName->Text = L"LAST NAME";
			this->lblLastName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCompleteAddress
			// 
			this->lblCompleteAddress->AutoSize = true;
			this->lblCompleteAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCompleteAddress->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCompleteAddress->Location = System::Drawing::Point(156, 543);
			this->lblCompleteAddress->Name = L"lblCompleteAddress";
			this->lblCompleteAddress->Size = System::Drawing::Size(79, 21);
			this->lblCompleteAddress->TabIndex = 59;
			this->lblCompleteAddress->Text = L"ADDRESS";
			this->lblCompleteAddress->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblZip
			// 
			this->lblZip->AutoSize = true;
			this->lblZip->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblZip->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblZip->Location = System::Drawing::Point(85, 514);
			this->lblZip->Name = L"lblZip";
			this->lblZip->Size = System::Drawing::Size(150, 21);
			this->lblZip->TabIndex = 58;
			this->lblZip->Text = L"POSTAL / ZIP CODE";
			this->lblZip->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCountry->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCountry->Location = System::Drawing::Point(152, 423);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(83, 21);
			this->lblCountry->TabIndex = 57;
			this->lblCountry->Text = L"COUNTRY";
			this->lblCountry->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegion->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRegion->Location = System::Drawing::Point(107, 450);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(128, 21);
			this->lblRegion->TabIndex = 56;
			this->lblRegion->Text = L"REGION / STATE";
			this->lblRegion->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCity->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCity->Location = System::Drawing::Point(192, 483);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(43, 21);
			this->lblCity->TabIndex = 55;
			this->lblCity->Text = L"CITY";
			this->lblCity->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblEmail->Location = System::Drawing::Point(107, 328);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(128, 21);
			this->lblEmail->TabIndex = 54;
			this->lblEmail->Text = L"EMAIL ADDRESS";
			this->lblEmail->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblPhoneNo
			// 
			this->lblPhoneNo->AutoSize = true;
			this->lblPhoneNo->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhoneNo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblPhoneNo->Location = System::Drawing::Point(104, 299);
			this->lblPhoneNo->Name = L"lblPhoneNo";
			this->lblPhoneNo->Size = System::Drawing::Size(131, 21);
			this->lblPhoneNo->TabIndex = 53;
			this->lblPhoneNo->Text = L"PHONE NUMBER";
			this->lblPhoneNo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblContactNo
			// 
			this->lblContactNo->AutoSize = true;
			this->lblContactNo->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContactNo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblContactNo->Location = System::Drawing::Point(86, 270);
			this->lblContactNo->Name = L"lblContactNo";
			this->lblContactNo->Size = System::Drawing::Size(149, 21);
			this->lblContactNo->TabIndex = 52;
			this->lblContactNo->Text = L"CONTACT NUMBER";
			this->lblContactNo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblMiddleName
			// 
			this->lblMiddleName->AutoSize = true;
			this->lblMiddleName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMiddleName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblMiddleName->Location = System::Drawing::Point(120, 241);
			this->lblMiddleName->Name = L"lblMiddleName";
			this->lblMiddleName->Size = System::Drawing::Size(115, 21);
			this->lblMiddleName->TabIndex = 61;
			this->lblMiddleName->Text = L"MIDDLE NAME";
			this->lblMiddleName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblFirstName->Location = System::Drawing::Point(136, 212);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(99, 21);
			this->lblFirstName->TabIndex = 51;
			this->lblFirstName->Text = L"FIRST NAME";
			this->lblFirstName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtRegion
			// 
			this->txtRegion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtRegion->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRegion->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtRegion->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtRegion->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtRegion->ForeColor = System::Drawing::Color::White;
			this->txtRegion->Location = System::Drawing::Point(241, 450);
			this->txtRegion->MaxLength = 70;
			this->txtRegion->Name = L"txtRegion";
			this->txtRegion->ReadOnly = true;
			this->txtRegion->Size = System::Drawing::Size(405, 16);
			this->txtRegion->TabIndex = 40;
			// 
			// txtCompAddress
			// 
			this->txtCompAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtCompAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtCompAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtCompAddress->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtCompAddress->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCompAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtCompAddress->ForeColor = System::Drawing::Color::White;
			this->txtCompAddress->Location = System::Drawing::Point(241, 541);
			this->txtCompAddress->MaxLength = 100;
			this->txtCompAddress->Name = L"txtCompAddress";
			this->txtCompAddress->ReadOnly = true;
			this->txtCompAddress->Size = System::Drawing::Size(405, 16);
			this->txtCompAddress->TabIndex = 41;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtFirstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtFirstName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFirstName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtFirstName->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtFirstName->ForeColor = System::Drawing::Color::White;
			this->txtFirstName->Location = System::Drawing::Point(241, 210);
			this->txtFirstName->MaxLength = 40;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->ReadOnly = true;
			this->txtFirstName->Size = System::Drawing::Size(405, 16);
			this->txtFirstName->TabIndex = 42;
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtEmail->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtEmail->ForeColor = System::Drawing::Color::White;
			this->txtEmail->Location = System::Drawing::Point(241, 326);
			this->txtEmail->MaxLength = 50;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->ReadOnly = true;
			this->txtEmail->Size = System::Drawing::Size(405, 16);
			this->txtEmail->TabIndex = 43;
			// 
			// txtPhoneNo
			// 
			this->txtPhoneNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtPhoneNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtPhoneNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhoneNo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtPhoneNo->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtPhoneNo->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtPhoneNo->ForeColor = System::Drawing::Color::White;
			this->txtPhoneNo->Location = System::Drawing::Point(241, 297);
			this->txtPhoneNo->MaxLength = 40;
			this->txtPhoneNo->Name = L"txtPhoneNo";
			this->txtPhoneNo->ReadOnly = true;
			this->txtPhoneNo->Size = System::Drawing::Size(405, 16);
			this->txtPhoneNo->TabIndex = 44;
			// 
			// txtZip
			// 
			this->txtZip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtZip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtZip->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtZip->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtZip->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtZip->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtZip->ForeColor = System::Drawing::Color::White;
			this->txtZip->Location = System::Drawing::Point(241, 512);
			this->txtZip->MaxLength = 20;
			this->txtZip->Name = L"txtZip";
			this->txtZip->ReadOnly = true;
			this->txtZip->Size = System::Drawing::Size(405, 16);
			this->txtZip->TabIndex = 45;
			// 
			// txtCity
			// 
			this->txtCity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtCity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtCity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtCity->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtCity->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCity->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtCity->ForeColor = System::Drawing::Color::White;
			this->txtCity->Location = System::Drawing::Point(241, 483);
			this->txtCity->MaxLength = 100;
			this->txtCity->Name = L"txtCity";
			this->txtCity->ReadOnly = true;
			this->txtCity->Size = System::Drawing::Size(405, 16);
			this->txtCity->TabIndex = 46;
			// 
			// txtContactNo
			// 
			this->txtContactNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtContactNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtContactNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtContactNo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtContactNo->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtContactNo->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtContactNo->ForeColor = System::Drawing::Color::White;
			this->txtContactNo->Location = System::Drawing::Point(241, 268);
			this->txtContactNo->MaxLength = 40;
			this->txtContactNo->Name = L"txtContactNo";
			this->txtContactNo->ReadOnly = true;
			this->txtContactNo->Size = System::Drawing::Size(405, 16);
			this->txtContactNo->TabIndex = 47;
			// 
			// txtCountry
			// 
			this->txtCountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtCountry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtCountry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtCountry->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtCountry->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCountry->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtCountry->ForeColor = System::Drawing::Color::White;
			this->txtCountry->Location = System::Drawing::Point(241, 421);
			this->txtCountry->MaxLength = 40;
			this->txtCountry->Name = L"txtCountry";
			this->txtCountry->ReadOnly = true;
			this->txtCountry->Size = System::Drawing::Size(405, 16);
			this->txtCountry->TabIndex = 48;
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMiddleName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtMiddleName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtMiddleName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtMiddleName->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtMiddleName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtMiddleName->ForeColor = System::Drawing::Color::White;
			this->txtMiddleName->Location = System::Drawing::Point(241, 239);
			this->txtMiddleName->MaxLength = 40;
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->ReadOnly = true;
			this->txtMiddleName->Size = System::Drawing::Size(405, 16);
			this->txtMiddleName->TabIndex = 49;
			// 
			// txtLastName
			// 
			this->txtLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtLastName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtLastName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtLastName->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtLastName->ForeColor = System::Drawing::Color::White;
			this->txtLastName->Location = System::Drawing::Point(241, 181);
			this->txtLastName->MaxLength = 40;
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->ReadOnly = true;
			this->txtLastName->Size = System::Drawing::Size(405, 16);
			this->txtLastName->TabIndex = 50;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblAddress->Location = System::Drawing::Point(38, 365);
			this->lblAddress->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(139, 37);
			this->lblAddress->TabIndex = 38;
			this->lblAddress->Text = L"ADDRESS";
			// 
			// lblContactInfo
			// 
			this->lblContactInfo->AutoSize = true;
			this->lblContactInfo->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContactInfo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblContactInfo->Location = System::Drawing::Point(38, 121);
			this->lblContactInfo->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblContactInfo->Name = L"lblContactInfo";
			this->lblContactInfo->Size = System::Drawing::Size(335, 37);
			this->lblContactInfo->TabIndex = 39;
			this->lblContactInfo->Text = L"CONTACT INFORMATION";
			// 
			// lblRoom
			// 
			this->lblRoom->AutoSize = true;
			this->lblRoom->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoom->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRoom->Location = System::Drawing::Point(646, 121);
			this->lblRoom->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblRoom->Name = L"lblRoom";
			this->lblRoom->Size = System::Drawing::Size(106, 37);
			this->lblRoom->TabIndex = 39;
			this->lblRoom->Text = L"ROOM ";
			// 
			// lblArrivalDeparture
			// 
			this->lblArrivalDeparture->AutoSize = true;
			this->lblArrivalDeparture->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArrivalDeparture->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblArrivalDeparture->Location = System::Drawing::Point(646, 258);
			this->lblArrivalDeparture->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblArrivalDeparture->Name = L"lblArrivalDeparture";
			this->lblArrivalDeparture->Size = System::Drawing::Size(355, 37);
			this->lblArrivalDeparture->TabIndex = 38;
			this->lblArrivalDeparture->Text = L"ARRIVAL AND DEPARTURE";
			// 
			// txtRoomType
			// 
			this->txtRoomType->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtRoomType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtRoomType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRoomType->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtRoomType->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtRoomType->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtRoomType->ForeColor = System::Drawing::Color::White;
			this->txtRoomType->Location = System::Drawing::Point(849, 188);
			this->txtRoomType->MaxLength = 40;
			this->txtRoomType->Name = L"txtRoomType";
			this->txtRoomType->ReadOnly = true;
			this->txtRoomType->Size = System::Drawing::Size(393, 16);
			this->txtRoomType->TabIndex = 50;
			// 
			// txtCheckIn
			// 
			this->txtCheckIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtCheckIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtCheckIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtCheckIn->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtCheckIn->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCheckIn->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtCheckIn->ForeColor = System::Drawing::Color::White;
			this->txtCheckIn->Location = System::Drawing::Point(849, 317);
			this->txtCheckIn->MaxLength = 40;
			this->txtCheckIn->Name = L"txtCheckIn";
			this->txtCheckIn->ReadOnly = true;
			this->txtCheckIn->Size = System::Drawing::Size(393, 16);
			this->txtCheckIn->TabIndex = 49;
			// 
			// txtCheckOut
			// 
			this->txtCheckOut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtCheckOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtCheckOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtCheckOut->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtCheckOut->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCheckOut->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->txtCheckOut->ForeColor = System::Drawing::Color::White;
			this->txtCheckOut->Location = System::Drawing::Point(849, 350);
			this->txtCheckOut->MaxLength = 40;
			this->txtCheckOut->Name = L"txtCheckOut";
			this->txtCheckOut->ReadOnly = true;
			this->txtCheckOut->Size = System::Drawing::Size(393, 16);
			this->txtCheckOut->TabIndex = 47;
			// 
			// txtRoomPrice
			// 
			this->txtRoomPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtRoomPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtRoomPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRoomPrice->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtRoomPrice->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtRoomPrice->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->txtRoomPrice->ForeColor = System::Drawing::Color::White;
			this->txtRoomPrice->Location = System::Drawing::Point(865, 219);
			this->txtRoomPrice->MaxLength = 40;
			this->txtRoomPrice->Name = L"txtRoomPrice";
			this->txtRoomPrice->ReadOnly = true;
			this->txtRoomPrice->Size = System::Drawing::Size(377, 16);
			this->txtRoomPrice->TabIndex = 42;
			// 
			// lblCheckIn
			// 
			this->lblCheckIn->AutoSize = true;
			this->lblCheckIn->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCheckIn->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCheckIn->Location = System::Drawing::Point(761, 319);
			this->lblCheckIn->Name = L"lblCheckIn";
			this->lblCheckIn->Size = System::Drawing::Size(80, 21);
			this->lblCheckIn->TabIndex = 61;
			this->lblCheckIn->Text = L"CHECK IN";
			this->lblCheckIn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCheckOut
			// 
			this->lblCheckOut->AutoSize = true;
			this->lblCheckOut->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCheckOut->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCheckOut->Location = System::Drawing::Point(746, 350);
			this->lblCheckOut->Name = L"lblCheckOut";
			this->lblCheckOut->Size = System::Drawing::Size(95, 21);
			this->lblCheckOut->TabIndex = 52;
			this->lblCheckOut->Text = L"CHECK OUT";
			this->lblCheckOut->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblRoomType
			// 
			this->lblRoomType->AutoSize = true;
			this->lblRoomType->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoomType->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRoomType->Location = System::Drawing::Point(748, 188);
			this->lblRoomType->Name = L"lblRoomType";
			this->lblRoomType->Size = System::Drawing::Size(96, 21);
			this->lblRoomType->TabIndex = 60;
			this->lblRoomType->Text = L"ROOM TYPE";
			this->lblRoomType->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel4->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel4->Location = System::Drawing::Point(653, 297);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(589, 3);
			this->panel4->TabIndex = 63;
			// 
			// lblSummary
			// 
			this->lblSummary->AutoSize = true;
			this->lblSummary->Font = (gcnew System::Drawing::Font(L"Raleway", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSummary->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblSummary->Location = System::Drawing::Point(37, 33);
			this->lblSummary->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblSummary->Name = L"lblSummary";
			this->lblSummary->Size = System::Drawing::Size(366, 48);
			this->lblSummary->TabIndex = 39;
			this->lblSummary->Text = L"BOOKING SUMMARY";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel5->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel5->Location = System::Drawing::Point(45, 84);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1197, 3);
			this->panel5->TabIndex = 62;
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Raleway", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblTotal->Location = System::Drawing::Point(656, 434);
			this->lblTotal->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(152, 48);
			this->lblTotal->TabIndex = 39;
			this->lblTotal->Text = L"TOTAL : ";
			// 
			// txtTotalPricing
			// 
			this->txtTotalPricing->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtTotalPricing->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtTotalPricing->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtTotalPricing->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTotalPricing->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtTotalPricing->Font = (gcnew System::Drawing::Font(L"Raleway", 26.25F));
			this->txtTotalPricing->ForeColor = System::Drawing::Color::NavajoWhite;
			this->txtTotalPricing->Location = System::Drawing::Point(830, 434);
			this->txtTotalPricing->MaxLength = 100;
			this->txtTotalPricing->Name = L"txtTotalPricing";
			this->txtTotalPricing->ReadOnly = true;
			this->txtTotalPricing->Size = System::Drawing::Size(412, 42);
			this->txtTotalPricing->TabIndex = 41;
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
			this->btnCancel->Location = System::Drawing::Point(958, 660);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(145, 48);
			this->btnCancel->TabIndex = 64;
			this->btnCancel->Text = L"Back";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Receipt::btnCancel_Click);
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
			this->btnProceed->Location = System::Drawing::Point(1109, 660);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(145, 48);
			this->btnProceed->TabIndex = 65;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &Receipt::btnProceed_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel6->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel6->Location = System::Drawing::Point(45, 161);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(589, 3);
			this->panel6->TabIndex = 63;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Location = System::Drawing::Point(653, 161);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(589, 3);
			this->panel1->TabIndex = 63;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Location = System::Drawing::Point(45, 405);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(589, 3);
			this->panel2->TabIndex = 63;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::NavajoWhite;
			this->label1->Location = System::Drawing::Point(743, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 21);
			this->label1->TabIndex = 60;
			this->label1->Text = L"ROOM PRICE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::NavajoWhite;
			this->label2->Location = System::Drawing::Point(656, 528);
			this->label2->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 48);
			this->label2->TabIndex = 39;
			this->label2->Text = L"PAYMENT :";
			// 
			// txtPayment
			// 
			this->txtPayment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->txtPayment->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPayment->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtPayment->Font = (gcnew System::Drawing::Font(L"Raleway", 26.25F));
			this->txtPayment->ForeColor = System::Drawing::Color::White;
			this->txtPayment->Location = System::Drawing::Point(38, 19);
			this->txtPayment->MaxLength = 9;
			this->txtPayment->Name = L"txtPayment";
			this->txtPayment->Size = System::Drawing::Size(354, 42);
			this->txtPayment->TabIndex = 41;
			// 
			// lblPesoRoomPrice
			// 
			this->lblPesoRoomPrice->AutoSize = true;
			this->lblPesoRoomPrice->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPesoRoomPrice->ForeColor = System::Drawing::Color::White;
			this->lblPesoRoomPrice->Location = System::Drawing::Point(845, 219);
			this->lblPesoRoomPrice->Name = L"lblPesoRoomPrice";
			this->lblPesoRoomPrice->Size = System::Drawing::Size(23, 21);
			this->lblPesoRoomPrice->TabIndex = 60;
			this->lblPesoRoomPrice->Text = L"₱ ";
			this->lblPesoRoomPrice->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Raleway", 25.26F));
			this->label3->ForeColor = System::Drawing::Color::NavajoWhite;
			this->label3->Location = System::Drawing::Point(794, 434);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 47);
			this->label3->TabIndex = 60;
			this->label3->Text = L"₱ ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway", 25.26F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(4, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 47);
			this->label4->TabIndex = 60;
			this->label4->Text = L"₱ ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->txtPayment);
			this->panel3->Controls->Add(this->label4);
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(849, 512);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(393, 86);
			this->panel3->TabIndex = 63;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel7->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel7->Location = System::Drawing::Point(653, 405);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(589, 3);
			this->panel7->TabIndex = 63;
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->lblPesoRoomPrice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblRoomType);
			this->Controls->Add(this->lblLastName);
			this->Controls->Add(this->lblCompleteAddress);
			this->Controls->Add(this->lblZip);
			this->Controls->Add(this->lblCountry);
			this->Controls->Add(this->lblRegion);
			this->Controls->Add(this->lblCity);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblPhoneNo);
			this->Controls->Add(this->lblCheckOut);
			this->Controls->Add(this->lblContactNo);
			this->Controls->Add(this->lblCheckIn);
			this->Controls->Add(this->lblMiddleName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->txtRegion);
			this->Controls->Add(this->txtRoomPrice);
			this->Controls->Add(this->txtTotalPricing);
			this->Controls->Add(this->txtCompAddress);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtPhoneNo);
			this->Controls->Add(this->txtZip);
			this->Controls->Add(this->txtCheckOut);
			this->Controls->Add(this->txtCity);
			this->Controls->Add(this->txtContactNo);
			this->Controls->Add(this->txtCheckIn);
			this->Controls->Add(this->txtCountry);
			this->Controls->Add(this->txtRoomType);
			this->Controls->Add(this->txtMiddleName);
			this->Controls->Add(this->lblArrivalDeparture);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->lblRoom);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblSummary);
			this->Controls->Add(this->lblContactInfo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Receipt";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"lblPesoTotal";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToThanks = false;
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {
		  double payment;
		  if (!Double::TryParse(txtPayment->Text, payment)) {																										// Checks if payment is a number
			  MessageBox::Show("Invalid Payment Amount. Please enter a valid amount.", "Invalid Payment", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }
		  if (!(totalPricing <= payment)) {																															// Checks if payment has met the amount needed
			  MessageBox::Show("Insufficient Amount. Please enter a Valid Amount of Payment", "Insufficient Payment", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }
		  try {																																						// Connecting to Database
			  String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Wangshu;Integrated Security=True";											 
			  SqlConnection sqlConn(connString);
			  sqlConn.Open();

			  // Inserts the following data to the said column of the database
			  String^ sqlQuery = "INSERT INTO WangshuRecords (lastName, firstName, middleName, contactNo, phoneNo, email, country, region, city, zip, compAddress, roomType, roomPricing, dateCheckIn, dateCheckOut, totalPricing, payment) VALUES (@lastName, @firstName, @middleName, @contactNo, @phoneNo, @email, @country, @region, @city, @zip, @compAddress, @roomType, @roomPricing, @dateCheckIn, @dateCheckOut, @totalPricing, @payment)";

			  SqlCommand command(sqlQuery, % sqlConn);
			  command.Parameters->AddWithValue("@lastName", txtLastName->Text);
			  command.Parameters->AddWithValue("@firstName", txtFirstName->Text);
			  command.Parameters->AddWithValue("@middleName", txtMiddleName->Text);
			  command.Parameters->AddWithValue("@contactNo", txtContactNo->Text);
			  command.Parameters->AddWithValue("@phoneNo", txtPhoneNo->Text);
			  command.Parameters->AddWithValue("@email", txtEmail->Text);
			  command.Parameters->AddWithValue("@country", txtCountry->Text);
			  command.Parameters->AddWithValue("@region", txtRegion->Text);
			  command.Parameters->AddWithValue("@city", txtCity->Text);
			  command.Parameters->AddWithValue("@zip", txtZip->Text);
			  command.Parameters->AddWithValue("@compAddress", txtCompAddress->Text);
			  command.Parameters->AddWithValue("@roomType", txtRoomType->Text);
			  command.Parameters->AddWithValue("@roomPricing", Convert::ToDouble(txtRoomPrice->Text));
			  command.Parameters->AddWithValue("@dateCheckIn", txtCheckIn->Text);
			  command.Parameters->AddWithValue("@dateCheckOut", txtCheckOut->Text);
			  command.Parameters->AddWithValue("@totalPricing", Convert::ToDouble(totalPricing));
			  command.Parameters->AddWithValue("@payment", txtPayment->Text);
			  command.ExecuteNonQuery();																															// Sends out the data to the Database
		  }
		  catch (Exception^ ex) {
			  MessageBox::Show("Failed to connect to the database. Error: " + ex->Message, "Connection Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);		// If it fails to connect, display a Warning and Cause of Error
			  return;
		  }

		  if (totalPricing <= payment) {																															// Verifies if the payment is greater or equal to the Total Price, if yes then switch to Thanks.h
			  this->switchToThanks = true;
			  this->Close();
		  }
	}

	public: bool switchToRooms = false;
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {																			// Switch to Rooms
		this->switchToRooms = true;
		this->Close();
	}

	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e) {																				// Displays all data that the User has input to all Textboxes
		txtLastName->Text = gcnew String(userInput.lastName.c_str());
		txtFirstName->Text = gcnew String(userInput.firstName.c_str());
		txtMiddleName->Text = gcnew String(userInput.middleName.c_str());
		txtContactNo->Text = gcnew String(userInput.contactNo.c_str());
		txtPhoneNo->Text = gcnew String(userInput.phoneNo.c_str());
		txtEmail->Text = gcnew String(userInput.email.c_str());
		txtCountry->Text = gcnew String(userInput.country.c_str());
		txtRegion->Text = gcnew String(userInput.region.c_str());
		txtCity->Text = gcnew String(userInput.city.c_str());
		txtZip->Text = gcnew String(userInput.zip.c_str());
		txtCompAddress->Text = gcnew String(userInput.compAddress.c_str());
		txtRoomType->Text = gcnew String(userInput.roomType.c_str());
		txtRoomPrice->Text = gcnew String(userInput.roomPricing.c_str());
		txtCheckIn->Text = gcnew String(userInput.dateCheckIn.c_str());
		txtCheckOut->Text = gcnew String(userInput.dateCheckOut.c_str());
		txtTotalPricing->Text = totalPricing.ToString();
		
	}
};
}