#pragma once
#include "UserData.h"																																				// To send data to UserData.h
#include <msclr/marshal_cppstd.h>																																	// Marshaling or changes data type of a certain variable and transfers to a specified header

namespace WangshuHotelReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Date : public System::Windows::Forms::Form
	{
	private:
		int CalculateDayGap()
		{
			System::DateTime checkInDate = dateCheckIn->SelectionRange->Start;
			System::DateTime checkOutDate = dateCheckOut->SelectionRange->Start;
			System::TimeSpan timeSpan = checkOutDate.Subtract(checkInDate);																							// Calculate the time span between the check-in and check-out dates
			int dayGap = timeSpan.Days;																																// Retrieve the number of days from the time span
			return dayGap;
		}

	public:
		Date(void)
		{
			InitializeComponent();
		}

	protected:
		~Date()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MonthCalendar^ dateCheckIn;																									// Setting up all Controls to be used
	private: System::Windows::Forms::MonthCalendar^ dateCheckOut;
	private: System::Windows::Forms::Label^ lblDesc;
	private: System::Windows::Forms::Label^ lblArrivalDeparture;
	private: System::Windows::Forms::Label^ lblCheckOut;
	private: System::Windows::Forms::Label^ lblCheckIn;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnProceed;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::ComponentModel::Container^ components;

// Formatting of Design for all Controls
#pragma region Windows Form Designer generated code																													
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Date::typeid));
			this->dateCheckIn = (gcnew System::Windows::Forms::MonthCalendar());
			this->dateCheckOut = (gcnew System::Windows::Forms::MonthCalendar());
			this->lblDesc = (gcnew System::Windows::Forms::Label());
			this->lblArrivalDeparture = (gcnew System::Windows::Forms::Label());
			this->lblCheckOut = (gcnew System::Windows::Forms::Label());
			this->lblCheckIn = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// dateCheckIn
			// 
			this->dateCheckIn->Location = System::Drawing::Point(338, 280);
			this->dateCheckIn->MaxDate = System::DateTime(2025, 12, 31, 0, 0, 0, 0);
			this->dateCheckIn->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateCheckIn->Name = L"dateCheckIn";
			this->dateCheckIn->ShowToday = false;
			this->dateCheckIn->TabIndex = 0;
			this->dateCheckIn->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Date::dateCheckIn_DateSelected);
			// 
			// dateCheckOut
			// 
			this->dateCheckOut->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->dateCheckOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateCheckOut->Location = System::Drawing::Point(683, 280);
			this->dateCheckOut->MaxDate = System::DateTime(2025, 12, 31, 0, 0, 0, 0);
			this->dateCheckOut->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateCheckOut->Name = L"dateCheckOut";
			this->dateCheckOut->ShowToday = false;
			this->dateCheckOut->TabIndex = 0;
			this->dateCheckOut->TitleForeColor = System::Drawing::Color::NavajoWhite;
			this->dateCheckOut->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Date::dateCheckOut_DateSelected);
			// 
			// lblDesc
			// 
			this->lblDesc->AutoSize = true;
			this->lblDesc->Font = (gcnew System::Drawing::Font(L"Raleway", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesc->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblDesc->Location = System::Drawing::Point(428, 191);
			this->lblDesc->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblDesc->Name = L"lblDesc";
			this->lblDesc->Size = System::Drawing::Size(434, 17);
			this->lblDesc->TabIndex = 21;
			this->lblDesc->Text = L"Please enter your Estimated Time of Arrival and Estimated Time of Departure";
			this->lblDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblArrivalDeparture
			// 
			this->lblArrivalDeparture->AutoSize = true;
			this->lblArrivalDeparture->Font = (gcnew System::Drawing::Font(L"Raleway", 32));
			this->lblArrivalDeparture->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblArrivalDeparture->Location = System::Drawing::Point(345, 111);
			this->lblArrivalDeparture->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblArrivalDeparture->Name = L"lblArrivalDeparture";
			this->lblArrivalDeparture->Size = System::Drawing::Size(565, 60);
			this->lblArrivalDeparture->TabIndex = 22;
			this->lblArrivalDeparture->Text = L"ARRIVAL AND DEPARTURE";
			this->lblArrivalDeparture->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCheckOut
			// 
			this->lblCheckOut->AutoSize = true;
			this->lblCheckOut->Font = (gcnew System::Drawing::Font(L"Raleway", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCheckOut->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCheckOut->Location = System::Drawing::Point(735, 242);
			this->lblCheckOut->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblCheckOut->Name = L"lblCheckOut";
			this->lblCheckOut->Size = System::Drawing::Size(137, 29);
			this->lblCheckOut->TabIndex = 21;
			this->lblCheckOut->Text = L"CHECK-OUT";
			// 
			// lblCheckIn
			// 
			this->lblCheckIn->AutoSize = true;
			this->lblCheckIn->Font = (gcnew System::Drawing::Font(L"Raleway", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCheckIn->ForeColor = System::Drawing::Color::NavajoWhite;
			this->lblCheckIn->Location = System::Drawing::Point(396, 242);
			this->lblCheckIn->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->lblCheckIn->Name = L"lblCheckIn";
			this->lblCheckIn->Size = System::Drawing::Size(113, 29);
			this->lblCheckIn->TabIndex = 21;
			this->lblCheckIn->Text = L"CHECK-IN";
			// 
			// btnBack
			// 
			this->btnBack->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::NavajoWhite;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::NavajoWhite;
			this->btnBack->Location = System::Drawing::Point(392, 487);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(227, 53);
			this->btnBack->TabIndex = 34;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &Date::btnBack_Click);
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
			this->btnProceed->Location = System::Drawing::Point(645, 487);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(227, 53);
			this->btnProceed->TabIndex = 35;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &Date::btnProceed_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->ForeColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Location = System::Drawing::Point(338, 174);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(577, 3);
			this->panel1->TabIndex = 36;
			// 
			// Date
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->lblCheckIn);
			this->Controls->Add(this->lblCheckOut);
			this->Controls->Add(this->lblDesc);
			this->Controls->Add(this->lblArrivalDeparture);
			this->Controls->Add(this->dateCheckOut);
			this->Controls->Add(this->dateCheckIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Date";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Date";
			this->Load += gcnew System::EventHandler(this, &Date::Date_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToProfile = false;
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {																				// Switch to Profile.h
		this->switchToProfile = true;
		this->Hide();
	}

	public: bool switchToRooms = false;
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {
		int dayGap = CalculateDayGap();																																// Calculates the day gap between Check-in and Check-out to be used in validation and daily rate 
		userInput.dayGap = dayGap;
		if (dayGap <= 0)																																			// Validates if the user has a day ahead of its reservation
		{
			MessageBox::Show("Please select at least a day ahead from the current date of your Check-In.", "Invalid Date", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else {
			this->switchToRooms = true;																																// Switch to Rooms.h
			this->Close();
		}
	}

	private: System::Void dateCheckIn_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		System::DateTime selectedDate = dateCheckIn->SelectionRange->Start;																							// Gets the selected date
		
		if (selectedDate < System::DateTime::Today)																													// Check if the selected date is in the past
		{
			MessageBox::Show("Please select at least a day ahead from the current date of your Check-In.", "Invalid Date", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			dateCheckIn->SetDate(DateTime::Today);
			return;
		}
		else
		{
			userInput.dateCheckIn = msclr::interop::marshal_as<std::string>(selectedDate.ToShortDateString());														// Sends Check In data to UserData.h
		}
	}

	private: System::Void dateCheckOut_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		System::DateTime selectedDate = dateCheckOut->SelectionRange->Start;																						// Gets the selected date
		
		if (selectedDate <= System::DateTime::Today)																												// Check if the selected date is in the past
		{
			MessageBox::Show("Please select at least a day ahead of your Check-In.", "Invalid Date", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			dateCheckOut->SetDate(DateTime::Today.AddDays(1));
			return;
		}
		else
		{
			userInput.dateCheckOut = msclr::interop::marshal_as<std::string>(selectedDate.ToShortDateString());														// Sends Check Out data to UserData.h
		}
	}

	public: System::Void Date_Load(System::Object^ sender, System::EventArgs^ e) {																					// Loads the current date for the Check In and Check Out
		dateCheckIn->SetDate(System::DateTime::Today);
		userInput.dateCheckIn = msclr::interop::marshal_as<std::string>(System::DateTime::Today.ToShortDateString());

		dateCheckOut->SetDate(System::DateTime::Today.AddDays(1));
		userInput.dateCheckOut = msclr::interop::marshal_as<std::string>(System::DateTime::Today.ToShortDateString());
	}
};
}
