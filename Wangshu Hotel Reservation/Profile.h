#pragma once
#include "Receipt.h"																																				// To send out data to Receipt Form
#include "UserData.h"																																				// Temporary storage for the database and output later
#include <msclr/marshal_cppstd.h>																																	// Marshaling or changes data type of a certain variable and transfers to a specified header

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
		{
			InitializeComponent();
		}
	protected:
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::TextBox^ tbRegion;																												// Setting up all Controls to be used
	private: System::Windows::Forms::TextBox^ tbCompAddress;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPhoneNo;
	private: System::Windows::Forms::TextBox^ tbZip;
	private: System::Windows::Forms::TextBox^ tbCity;
	private: System::Windows::Forms::TextBox^ tbContactNo;
	private: System::Windows::Forms::TextBox^ tbCountry;
	private: System::Windows::Forms::TextBox^ tbMiddleName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblContactInfo;
	private: System::Windows::Forms::Label^ lblDescription;
	private: System::Windows::Forms::Label^ lblReceipt;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::Label^ lblMiddleName;
	private: System::Windows::Forms::Label^ lblContactNo;
	private: System::Windows::Forms::Label^ lblPhoneNo;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::Label^ lblZip;
	private: System::Windows::Forms::Label^ lblCompAddress;
	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::Label^ lblCountry;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnProceed;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->tbRegion = (gcnew System::Windows::Forms::TextBox());
			this->tbCompAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->tbZip = (gcnew System::Windows::Forms::TextBox());
			this->tbCity = (gcnew System::Windows::Forms::TextBox());
			this->tbContactNo = (gcnew System::Windows::Forms::TextBox());
			this->tbCountry = (gcnew System::Windows::Forms::TextBox());
			this->tbMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblContactInfo = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->lblReceipt = (gcnew System::Windows::Forms::Label());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->lblMiddleName = (gcnew System::Windows::Forms::Label());
			this->lblContactNo = (gcnew System::Windows::Forms::Label());
			this->lblPhoneNo = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->lblZip = (gcnew System::Windows::Forms::Label());
			this->lblCompAddress = (gcnew System::Windows::Forms::Label());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// tbRegion
			// 
			this->tbRegion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRegion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbRegion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbRegion->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbRegion->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbRegion->ForeColor = System::Drawing::Color::White;
			this->tbRegion->Location = System::Drawing::Point(244, 513);
			this->tbRegion->MaxLength = 70;
			this->tbRegion->Name = L"tbRegion";
			this->tbRegion->Size = System::Drawing::Size(988, 23);
			this->tbRegion->TabIndex = 21;
			// 
			// tbCompAddress
			// 
			this->tbCompAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCompAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbCompAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCompAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbCompAddress->ForeColor = System::Drawing::Color::White;
			this->tbCompAddress->Location = System::Drawing::Point(244, 606);
			this->tbCompAddress->MaxLength = 100;
			this->tbCompAddress->Name = L"tbCompAddress";
			this->tbCompAddress->Size = System::Drawing::Size(988, 23);
			this->tbCompAddress->TabIndex = 22;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbFirstName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbFirstName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->tbFirstName->ForeColor = System::Drawing::Color::White;
			this->tbFirstName->Location = System::Drawing::Point(244, 243);
			this->tbFirstName->MaxLength = 40;
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(988, 23);
			this->tbFirstName->TabIndex = 23;
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbEmail->ForeColor = System::Drawing::Color::White;
			this->tbEmail->Location = System::Drawing::Point(244, 359);
			this->tbEmail->MaxLength = 50;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(988, 23);
			this->tbEmail->TabIndex = 24;
			// 
			// tbPhoneNo
			// 
			this->tbPhoneNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPhoneNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbPhoneNo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPhoneNo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbPhoneNo->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbPhoneNo->ForeColor = System::Drawing::Color::White;
			this->tbPhoneNo->Location = System::Drawing::Point(244, 330);
			this->tbPhoneNo->MaxLength = 11;
			this->tbPhoneNo->Name = L"tbPhoneNo";
			this->tbPhoneNo->Size = System::Drawing::Size(988, 23);
			this->tbPhoneNo->TabIndex = 25;
			// 
			// tbZip
			// 
			this->tbZip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbZip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbZip->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbZip->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbZip->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbZip->ForeColor = System::Drawing::Color::White;
			this->tbZip->Location = System::Drawing::Point(244, 577);
			this->tbZip->MaxLength = 5;
			this->tbZip->Name = L"tbZip";
			this->tbZip->Size = System::Drawing::Size(988, 23);
			this->tbZip->TabIndex = 26;
			// 
			// tbCity
			// 
			this->tbCity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbCity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCity->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbCity->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbCity->ForeColor = System::Drawing::Color::White;
			this->tbCity->Location = System::Drawing::Point(244, 544);
			this->tbCity->MaxLength = 100;
			this->tbCity->Name = L"tbCity";
			this->tbCity->Size = System::Drawing::Size(988, 23);
			this->tbCity->TabIndex = 27;
			// 
			// tbContactNo
			// 
			this->tbContactNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbContactNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbContactNo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbContactNo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbContactNo->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbContactNo->ForeColor = System::Drawing::Color::White;
			this->tbContactNo->Location = System::Drawing::Point(244, 301);
			this->tbContactNo->MaxLength = 11;
			this->tbContactNo->Name = L"tbContactNo";
			this->tbContactNo->Size = System::Drawing::Size(988, 23);
			this->tbContactNo->TabIndex = 28;
			// 
			// tbCountry
			// 
			this->tbCountry->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCountry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbCountry->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCountry->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbCountry->Font = (gcnew System::Drawing::Font(L"Raleway", 10));
			this->tbCountry->ForeColor = System::Drawing::Color::White;
			this->tbCountry->Location = System::Drawing::Point(244, 484);
			this->tbCountry->MaxLength = 40;
			this->tbCountry->Name = L"tbCountry";
			this->tbCountry->Size = System::Drawing::Size(988, 23);
			this->tbCountry->TabIndex = 29;
			// 
			// tbMiddleName
			// 
			this->tbMiddleName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbMiddleName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbMiddleName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMiddleName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbMiddleName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->tbMiddleName->ForeColor = System::Drawing::Color::White;
			this->tbMiddleName->Location = System::Drawing::Point(244, 272);
			this->tbMiddleName->MaxLength = 40;
			this->tbMiddleName->Name = L"tbMiddleName";
			this->tbMiddleName->Size = System::Drawing::Size(988, 23);
			this->tbMiddleName->TabIndex = 30;
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->tbLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbLastName->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Raleway", 9.75F));
			this->tbLastName->ForeColor = System::Drawing::Color::White;
			this->tbLastName->Location = System::Drawing::Point(244, 214);
			this->tbLastName->MaxLength = 40;
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(988, 23);
			this->tbLastName->TabIndex = 31;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblAddress->Location = System::Drawing::Point(41, 421);
			this->lblAddress->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(139, 37);
			this->lblAddress->TabIndex = 17;
			this->lblAddress->Text = L"ADDRESS";
			// 
			// lblContactInfo
			// 
			this->lblContactInfo->AutoSize = true;
			this->lblContactInfo->Font = (gcnew System::Drawing::Font(L"Raleway", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContactInfo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblContactInfo->Location = System::Drawing::Point(41, 152);
			this->lblContactInfo->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblContactInfo->Name = L"lblContactInfo";
			this->lblContactInfo->Size = System::Drawing::Size(335, 37);
			this->lblContactInfo->TabIndex = 18;
			this->lblContactInfo->Text = L"CONTACT INFORMATION";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescription->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDescription->Location = System::Drawing::Point(45, 100);
			this->lblDescription->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(256, 17);
			this->lblDescription->TabIndex = 19;
			this->lblDescription->Text = L"Please enter the following information below";
			// 
			// lblReceipt
			// 
			this->lblReceipt->AutoSize = true;
			this->lblReceipt->Font = (gcnew System::Drawing::Font(L"Raleway", 32));
			this->lblReceipt->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblReceipt->Location = System::Drawing::Point(38, 34);
			this->lblReceipt->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblReceipt->Name = L"lblReceipt";
			this->lblReceipt->Size = System::Drawing::Size(350, 60);
			this->lblReceipt->TabIndex = 20;
			this->lblReceipt->Text = L"GUEST PROFILE";
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblFirstName->Location = System::Drawing::Point(139, 243);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(99, 21);
			this->lblFirstName->TabIndex = 32;
			this->lblFirstName->Text = L"FIRST NAME";
			this->lblFirstName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblLastName->Location = System::Drawing::Point(143, 214);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(95, 21);
			this->lblLastName->TabIndex = 32;
			this->lblLastName->Text = L"LAST NAME";
			this->lblLastName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblMiddleName
			// 
			this->lblMiddleName->AutoSize = true;
			this->lblMiddleName->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMiddleName->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblMiddleName->Location = System::Drawing::Point(123, 272);
			this->lblMiddleName->Name = L"lblMiddleName";
			this->lblMiddleName->Size = System::Drawing::Size(115, 21);
			this->lblMiddleName->TabIndex = 32;
			this->lblMiddleName->Text = L"MIDDLE NAME";
			this->lblMiddleName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblContactNo
			// 
			this->lblContactNo->AutoSize = true;
			this->lblContactNo->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContactNo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblContactNo->Location = System::Drawing::Point(89, 301);
			this->lblContactNo->Name = L"lblContactNo";
			this->lblContactNo->Size = System::Drawing::Size(149, 21);
			this->lblContactNo->TabIndex = 32;
			this->lblContactNo->Text = L"CONTACT NUMBER";
			this->lblContactNo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblPhoneNo
			// 
			this->lblPhoneNo->AutoSize = true;
			this->lblPhoneNo->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhoneNo->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblPhoneNo->Location = System::Drawing::Point(107, 330);
			this->lblPhoneNo->Name = L"lblPhoneNo";
			this->lblPhoneNo->Size = System::Drawing::Size(131, 21);
			this->lblPhoneNo->TabIndex = 32;
			this->lblPhoneNo->Text = L"PHONE NUMBER";
			this->lblPhoneNo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblEmail->Location = System::Drawing::Point(110, 359);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(128, 21);
			this->lblEmail->TabIndex = 32;
			this->lblEmail->Text = L"EMAIL ADDRESS";
			this->lblEmail->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCity->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCity->Location = System::Drawing::Point(195, 546);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(43, 21);
			this->lblCity->TabIndex = 32;
			this->lblCity->Text = L"CITY";
			this->lblCity->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblZip
			// 
			this->lblZip->AutoSize = true;
			this->lblZip->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblZip->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblZip->Location = System::Drawing::Point(88, 577);
			this->lblZip->Name = L"lblZip";
			this->lblZip->Size = System::Drawing::Size(150, 21);
			this->lblZip->TabIndex = 32;
			this->lblZip->Text = L"POSTAL / ZIP CODE";
			this->lblZip->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCompAddress
			// 
			this->lblCompAddress->AutoSize = true;
			this->lblCompAddress->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCompAddress->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCompAddress->Location = System::Drawing::Point(159, 606);
			this->lblCompAddress->Name = L"lblCompAddress";
			this->lblCompAddress->Size = System::Drawing::Size(79, 21);
			this->lblCompAddress->TabIndex = 32;
			this->lblCompAddress->Text = L"ADDRESS";
			this->lblCompAddress->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegion->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblRegion->Location = System::Drawing::Point(110, 513);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(128, 21);
			this->lblRegion->TabIndex = 32;
			this->lblRegion->Text = L"REGION / STATE";
			this->lblRegion->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Raleway", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCountry->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCountry->Location = System::Drawing::Point(155, 486);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(83, 21);
			this->lblCountry->TabIndex = 32;
			this->lblCountry->Text = L"COUNTRY";
			this->lblCountry->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->btnCancel->TabIndex = 66;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Profile::btnCancel_Click);
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
			this->btnProceed->TabIndex = 67;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &Profile::btnProceed_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel3->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel3->Location = System::Drawing::Point(48, 461);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1200, 3);
			this->panel3->TabIndex = 68;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Location = System::Drawing::Point(48, 192);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1200, 3);
			this->panel2->TabIndex = 69;
			// 
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->lblLastName);
			this->Controls->Add(this->lblCompAddress);
			this->Controls->Add(this->lblZip);
			this->Controls->Add(this->lblCountry);
			this->Controls->Add(this->lblRegion);
			this->Controls->Add(this->lblCity);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblPhoneNo);
			this->Controls->Add(this->lblContactNo);
			this->Controls->Add(this->lblMiddleName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->tbRegion);
			this->Controls->Add(this->tbCompAddress);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbPhoneNo);
			this->Controls->Add(this->tbZip);
			this->Controls->Add(this->tbCity);
			this->Controls->Add(this->tbContactNo);
			this->Controls->Add(this->tbCountry);
			this->Controls->Add(this->tbMiddleName);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblContactInfo);
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->lblReceipt);
			this->Font = (gcnew System::Drawing::Font(L"HeliosExtLight", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Please fill up the following information (Guest Profile)";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool IsStringOnly(String^ text) {																																// Verifies if the user's input is String only
		for each (char c in text) {
			if (!Char::IsLetter(c) && !Char::IsWhiteSpace(c)) {
				return false;
			}
		}
		return true;
	}

	bool IsNumberOnly(String^ text) {																																// Verifies if the user's input is Number only
		for each (char c in text) {
			if (!Char::IsNumber(c)) {
				return false;
			}
		}
		return true;
	}

	
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {																				// If theres a data in UserData.h, display text in all TextBoxes
		tbLastName->Text = gcnew String(userInput.lastName.c_str());
		tbFirstName->Text = gcnew String(userInput.firstName.c_str());
		tbMiddleName->Text = gcnew String(userInput.middleName.c_str());
		tbContactNo->Text = gcnew String(userInput.contactNo.c_str());
		tbPhoneNo->Text = gcnew String(userInput.phoneNo.c_str());
		tbEmail->Text = gcnew String(userInput.email.c_str());
		tbCountry->Text = gcnew String(userInput.country.c_str());
		tbRegion->Text = gcnew String(userInput.region.c_str());
		tbCity->Text = gcnew String(userInput.city.c_str());
		tbZip->Text = gcnew String(userInput.zip.c_str());
		tbCompAddress->Text = gcnew String(userInput.compAddress.c_str());
	}

	public: bool switchToDate = false;
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {																			// Proceed Button if Clicked
		String^ lastname = this->tbLastName->Text;																													// Sets the variable as string and has an equal output of the following textboxes
		String^ firstname = this->tbFirstName->Text;
		String^ middlename = this->tbMiddleName->Text;
		String^ contactno = this->tbContactNo->Text;
		String^ phoneno = this->tbPhoneNo->Text;
		String^ email = this->tbEmail->Text;
		String^ country = this->tbCountry->Text;
		String^ region = this->tbRegion->Text;
		String^ city = this->tbCity->Text;
		String^ zip = this->tbZip->Text;
		String^ compaddress = this->tbCompAddress->Text;

		if (!IsNumberOnly(contactno)) {																																// Validation for Contact Number
			MessageBox::Show("Please enter a valid contact number.", "Invalid Contact Number", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!IsNumberOnly(phoneno)) {																																// Validation for Phone Number
			MessageBox::Show("Please enter a valid phone number.", "Invalid Phone Number", MessageBoxButtons::OK, MessageBoxIcon::Error);					
			return;
		}
		if (!IsNumberOnly(zip)) {																																	// Validation for Zip Code
			MessageBox::Show("Please enter a Zip / Postal Code.", "Invalid Zip Code", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (!IsStringOnly(firstname) || !IsStringOnly(lastname) || !IsStringOnly(middlename)) {																		// Validation for the User's Name
			MessageBox::Show("Please enter a valid name.", "Invalid Name", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (!(email->Contains("@"))) {																																// Validation for the Email Address
			MessageBox::Show("Please enter a valid Email Address.", "Invalid Email Address", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (lastname->Length == 0 || firstname->Length == 0 || !(contactno->Length == 11) || email->Length == 0 || country->Length == 0 || region->Length == 0 || city->Length == 0 || zip->Length == 0 || compaddress->Length == 0)	// Validation if theres empty fields in textboxes
		{
			MessageBox::Show("Please complete the following information first before proceeding", "Field Required", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		else {																																						// Marshals and sends the data to UserData.h and switch to Date.h 
			userInput.lastName = msclr::interop::marshal_as<std::string>(lastname);
			userInput.firstName = msclr::interop::marshal_as<std::string>(firstname);
			userInput.middleName = msclr::interop::marshal_as<std::string>(middlename);
			userInput.contactNo = msclr::interop::marshal_as<std::string>(contactno);
			userInput.phoneNo = msclr::interop::marshal_as<std::string>(phoneno);
			userInput.email = msclr::interop::marshal_as<std::string>(email);
			userInput.country = msclr::interop::marshal_as<std::string>(country);
			userInput.region = msclr::interop::marshal_as<std::string>(region);
			userInput.city = msclr::interop::marshal_as<std::string>(city);
			userInput.zip = msclr::interop::marshal_as<std::string>(zip);
			userInput.compAddress = msclr::interop::marshal_as<std::string>(compaddress);
			this->switchToDate = true;
			this->Hide();
		}
	}

	public: bool switchToWelcome = false;
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {																			// switch to Welcome.h
		this->switchToWelcome = true;
		this->Close();
	}
};
}