#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project13 {

	/// <summary>
	/// Summary for addWalletPage
	/// </summary>
	public ref class addWalletPage : public System::Windows::Forms::UserControl
	{
	public:
		addWalletPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addWalletPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	public: Bunifu::Framework::UI::BunifuThinButton2^ backB;
	private:

	protected:

	private: System::Windows::Forms::Label^ label5;
	public: Bunifu::Framework::UI::BunifuThinButton2^ addWallB;
	private:


	public: Bunifu::Framework::UI::BunifuTextbox^ wallIncTxt;
	private:

	private:

	public: Bunifu::Framework::UI::BunifuTextbox^ wallSrcTxt;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addWalletPage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backB = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addWallB = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->wallIncTxt = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->wallSrcTxt = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->backB);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->addWallB);
			this->panel1->Controls->Add(this->wallIncTxt);
			this->panel1->Controls->Add(this->wallSrcTxt);
			this->panel1->Location = System::Drawing::Point(397, 51);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(308, 461);
			this->panel1->TabIndex = 1;
			// 
			// backB
			// 
			this->backB->ActiveBorderThickness = 1;
			this->backB->ActiveCornerRadius = 20;
			this->backB->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backB->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->backB->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backB->BackColor = System::Drawing::Color::Transparent;
			this->backB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backB.BackgroundImage")));
			this->backB->ButtonText = L"Back";
			this->backB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->backB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backB->IdleBorderThickness = 1;
			this->backB->IdleCornerRadius = 20;
			this->backB->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backB->IdleForecolor = System::Drawing::Color::White;
			this->backB->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backB->Location = System::Drawing::Point(168, 379);
			this->backB->Margin = System::Windows::Forms::Padding(4);
			this->backB->Name = L"backB";
			this->backB->Size = System::Drawing::Size(109, 38);
			this->backB->TabIndex = 24;
			this->backB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(82, 31);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 26);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Add Wallet";
			// 
			// addWallB
			// 
			this->addWallB->ActiveBorderThickness = 1;
			this->addWallB->ActiveCornerRadius = 20;
			this->addWallB->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addWallB->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->addWallB->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addWallB->BackColor = System::Drawing::Color::Transparent;
			this->addWallB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addWallB.BackgroundImage")));
			this->addWallB->ButtonText = L"Add Wallet";
			this->addWallB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addWallB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->addWallB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addWallB->IdleBorderThickness = 1;
			this->addWallB->IdleCornerRadius = 20;
			this->addWallB->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addWallB->IdleForecolor = System::Drawing::Color::White;
			this->addWallB->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addWallB->Location = System::Drawing::Point(28, 379);
			this->addWallB->Margin = System::Windows::Forms::Padding(4);
			this->addWallB->Name = L"addWallB";
			this->addWallB->Size = System::Drawing::Size(109, 38);
			this->addWallB->TabIndex = 22;
			this->addWallB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wallIncTxt
			// 
			this->wallIncTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wallIncTxt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wallIncTxt.BackgroundImage")));
			this->wallIncTxt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->wallIncTxt->ForeColor = System::Drawing::Color::White;
			this->wallIncTxt->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wallIncTxt.Icon")));
			this->wallIncTxt->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->wallIncTxt->Location = System::Drawing::Point(71, 243);
			this->wallIncTxt->Name = L"wallIncTxt";
			this->wallIncTxt->Size = System::Drawing::Size(145, 37);
			this->wallIncTxt->TabIndex = 16;
			this->wallIncTxt->text = L"Income";
			// 
			// wallSrcTxt
			// 
			this->wallSrcTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wallSrcTxt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wallSrcTxt.BackgroundImage")));
			this->wallSrcTxt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->wallSrcTxt->ForeColor = System::Drawing::Color::White;
			this->wallSrcTxt->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wallSrcTxt.Icon")));
			this->wallSrcTxt->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->wallSrcTxt->Location = System::Drawing::Point(71, 146);
			this->wallSrcTxt->Name = L"wallSrcTxt";
			this->wallSrcTxt->Size = System::Drawing::Size(145, 37);
			this->wallSrcTxt->TabIndex = 14;
			this->wallSrcTxt->text = L"Source";
			this->wallSrcTxt->OnTextChange += gcnew System::EventHandler(this, &addWalletPage::wallSrcTxt_OnTextChange);
			// 
			// addWalletPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->panel1);
			this->Name = L"addWalletPage";
			this->Size = System::Drawing::Size(1101, 572);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void wallSrcTxt_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
