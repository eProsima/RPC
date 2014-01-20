#pragma once

#include "CalculatorProxy.h"
#include "CalculatorRequestReplyPlugin.h"
#include "exceptions/Exceptions.h"
#include "exceptions/ServerTimeoutException.h"

namespace CalculatorClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

            try
            {
                m_openproxy = new CalculatorProxy("OpenDDSCalculatorService", 13);
                m_rtiproxy = new CalculatorProxy("RTICalculatorService", 13);
            }
            catch(eProsima::RPCDDS::InitializeException &ex)
            {
            }
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}

            if(m_openproxy != NULL)
                delete m_openproxy;

            if(m_rtiproxy != NULL)
                delete m_rtiproxy;
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
    private: System::Windows::Forms::TextBox^  txtBox;

    private: System::Windows::Forms::Button^  bn7;
    private: System::Windows::Forms::Button^  bn8;
    private: System::Windows::Forms::Button^  bn9;



    private: System::Windows::Forms::Button^  bn4;
    private: System::Windows::Forms::Button^  bn5;
    private: System::Windows::Forms::Button^  bn6;



    private: System::Windows::Forms::Button^  bn1;
    private: System::Windows::Forms::Button^  bn2;
    private: System::Windows::Forms::Button^  bn3;
    private: System::Windows::Forms::Button^  bn0;
    private: System::Windows::Forms::Button^  bAdd;
    private: System::Windows::Forms::Button^  bSubs;
    private: System::Windows::Forms::Button^  bMul;
    private: System::Windows::Forms::Button^  bDiv;
    private: System::Windows::Forms::Button^  bRes;









    private: System::Windows::Forms::Button^  bBorrar;


        static CalculatorProxy *m_openproxy = NULL, *m_rtiproxy = NULL;
        static int firstOp = 0, secondOp = 0, operation = 0, secondOpPosition = 0, serverSelected = 0;
        static bool close = true;
    private: System::Windows::Forms::GroupBox^  serversBox;
    private: System::Windows::Forms::RadioButton^  openddsButton;
    private: System::Windows::Forms::RadioButton^  rtiButton;
    private: System::Windows::Forms::StatusStrip^  statusStrip;
    private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;


    private: System::Windows::Forms::Button^  deslButton;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->txtBox = (gcnew System::Windows::Forms::TextBox());
            this->bn7 = (gcnew System::Windows::Forms::Button());
            this->bn8 = (gcnew System::Windows::Forms::Button());
            this->bn9 = (gcnew System::Windows::Forms::Button());
            this->bn4 = (gcnew System::Windows::Forms::Button());
            this->bn5 = (gcnew System::Windows::Forms::Button());
            this->bn6 = (gcnew System::Windows::Forms::Button());
            this->bn1 = (gcnew System::Windows::Forms::Button());
            this->bn2 = (gcnew System::Windows::Forms::Button());
            this->bn3 = (gcnew System::Windows::Forms::Button());
            this->bn0 = (gcnew System::Windows::Forms::Button());
            this->bAdd = (gcnew System::Windows::Forms::Button());
            this->bSubs = (gcnew System::Windows::Forms::Button());
            this->bMul = (gcnew System::Windows::Forms::Button());
            this->bDiv = (gcnew System::Windows::Forms::Button());
            this->bRes = (gcnew System::Windows::Forms::Button());
            this->bBorrar = (gcnew System::Windows::Forms::Button());
            this->serversBox = (gcnew System::Windows::Forms::GroupBox());
            this->openddsButton = (gcnew System::Windows::Forms::RadioButton());
            this->rtiButton = (gcnew System::Windows::Forms::RadioButton());
            this->deslButton = (gcnew System::Windows::Forms::Button());
            this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
            this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
            this->serversBox->SuspendLayout();
            this->statusStrip->SuspendLayout();
            this->SuspendLayout();
            // 
            // txtBox
            // 
            this->txtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(149)), 
                static_cast<System::Int32>(static_cast<System::Byte>(205)));
            this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->txtBox->ForeColor = System::Drawing::Color::White;
            this->txtBox->Location = System::Drawing::Point(3, 16);
            this->txtBox->Name = L"txtBox";
            this->txtBox->ReadOnly = true;
            this->txtBox->Size = System::Drawing::Size(328, 37);
            this->txtBox->TabIndex = 0;
            this->txtBox->Text = L"0";
            this->txtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // bn7
            // 
            this->bn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn7->ForeColor = System::Drawing::Color::White;
            this->bn7->Location = System::Drawing::Point(3, 66);
            this->bn7->Name = L"bn7";
            this->bn7->Size = System::Drawing::Size(78, 71);
            this->bn7->TabIndex = 1;
            this->bn7->Text = L"7";
            this->bn7->UseVisualStyleBackColor = true;
            this->bn7->Click += gcnew System::EventHandler(this, &MainWindow::bn7_Click);
            // 
            // bn8
            // 
            this->bn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn8->ForeColor = System::Drawing::Color::White;
            this->bn8->Location = System::Drawing::Point(87, 65);
            this->bn8->Name = L"bn8";
            this->bn8->Size = System::Drawing::Size(78, 71);
            this->bn8->TabIndex = 2;
            this->bn8->Text = L"8";
            this->bn8->UseVisualStyleBackColor = true;
            this->bn8->Click += gcnew System::EventHandler(this, &MainWindow::bn8_Click);
            // 
            // bn9
            // 
            this->bn9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn9->ForeColor = System::Drawing::Color::White;
            this->bn9->Location = System::Drawing::Point(171, 66);
            this->bn9->Name = L"bn9";
            this->bn9->Size = System::Drawing::Size(78, 71);
            this->bn9->TabIndex = 3;
            this->bn9->Text = L"9";
            this->bn9->UseVisualStyleBackColor = true;
            this->bn9->Click += gcnew System::EventHandler(this, &MainWindow::bn9_Click);
            // 
            // bn4
            // 
            this->bn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn4->ForeColor = System::Drawing::Color::White;
            this->bn4->Location = System::Drawing::Point(3, 143);
            this->bn4->Name = L"bn4";
            this->bn4->Size = System::Drawing::Size(78, 71);
            this->bn4->TabIndex = 4;
            this->bn4->Text = L"4";
            this->bn4->UseVisualStyleBackColor = true;
            this->bn4->Click += gcnew System::EventHandler(this, &MainWindow::bn4_Click);
            // 
            // bn5
            // 
            this->bn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn5->ForeColor = System::Drawing::Color::White;
            this->bn5->Location = System::Drawing::Point(87, 142);
            this->bn5->Name = L"bn5";
            this->bn5->Size = System::Drawing::Size(78, 71);
            this->bn5->TabIndex = 5;
            this->bn5->Text = L"5";
            this->bn5->UseVisualStyleBackColor = true;
            this->bn5->Click += gcnew System::EventHandler(this, &MainWindow::bn5_Click);
            // 
            // bn6
            // 
            this->bn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn6->ForeColor = System::Drawing::Color::White;
            this->bn6->Location = System::Drawing::Point(171, 142);
            this->bn6->Name = L"bn6";
            this->bn6->Size = System::Drawing::Size(78, 71);
            this->bn6->TabIndex = 6;
            this->bn6->Text = L"6";
            this->bn6->UseVisualStyleBackColor = true;
            this->bn6->Click += gcnew System::EventHandler(this, &MainWindow::bn6_Click);
            // 
            // bn1
            // 
            this->bn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn1->ForeColor = System::Drawing::Color::White;
            this->bn1->Location = System::Drawing::Point(3, 220);
            this->bn1->Name = L"bn1";
            this->bn1->Size = System::Drawing::Size(78, 71);
            this->bn1->TabIndex = 7;
            this->bn1->Text = L"1";
            this->bn1->UseVisualStyleBackColor = true;
            this->bn1->Click += gcnew System::EventHandler(this, &MainWindow::bn1_Click);
            // 
            // bn2
            // 
            this->bn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn2->ForeColor = System::Drawing::Color::White;
            this->bn2->Location = System::Drawing::Point(87, 219);
            this->bn2->Name = L"bn2";
            this->bn2->Size = System::Drawing::Size(78, 71);
            this->bn2->TabIndex = 8;
            this->bn2->Text = L"2";
            this->bn2->UseVisualStyleBackColor = true;
            this->bn2->Click += gcnew System::EventHandler(this, &MainWindow::bn2_Click);
            // 
            // bn3
            // 
            this->bn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn3->ForeColor = System::Drawing::Color::White;
            this->bn3->Location = System::Drawing::Point(171, 219);
            this->bn3->Name = L"bn3";
            this->bn3->Size = System::Drawing::Size(78, 71);
            this->bn3->TabIndex = 9;
            this->bn3->Text = L"3";
            this->bn3->UseVisualStyleBackColor = true;
            this->bn3->Click += gcnew System::EventHandler(this, &MainWindow::bn3_Click);
            // 
            // bn0
            // 
            this->bn0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bn0->ForeColor = System::Drawing::Color::White;
            this->bn0->Location = System::Drawing::Point(87, 296);
            this->bn0->Name = L"bn0";
            this->bn0->Size = System::Drawing::Size(78, 71);
            this->bn0->TabIndex = 10;
            this->bn0->Text = L"0";
            this->bn0->UseVisualStyleBackColor = true;
            this->bn0->Click += gcnew System::EventHandler(this, &MainWindow::bn0_Click);
            // 
            // bAdd
            // 
            this->bAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bAdd->ForeColor = System::Drawing::Color::White;
            this->bAdd->Location = System::Drawing::Point(255, 66);
            this->bAdd->Name = L"bAdd";
            this->bAdd->Size = System::Drawing::Size(78, 71);
            this->bAdd->TabIndex = 11;
            this->bAdd->Text = L"+";
            this->bAdd->UseVisualStyleBackColor = true;
            this->bAdd->Click += gcnew System::EventHandler(this, &MainWindow::bAdd_Click);
            // 
            // bSubs
            // 
            this->bSubs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bSubs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bSubs->ForeColor = System::Drawing::Color::White;
            this->bSubs->Location = System::Drawing::Point(255, 143);
            this->bSubs->Name = L"bSubs";
            this->bSubs->Size = System::Drawing::Size(78, 71);
            this->bSubs->TabIndex = 12;
            this->bSubs->Text = L"-";
            this->bSubs->UseVisualStyleBackColor = true;
            this->bSubs->Click += gcnew System::EventHandler(this, &MainWindow::bSubs_Click);
            // 
            // bMul
            // 
            this->bMul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bMul->ForeColor = System::Drawing::Color::White;
            this->bMul->Location = System::Drawing::Point(255, 220);
            this->bMul->Name = L"bMul";
            this->bMul->Size = System::Drawing::Size(78, 71);
            this->bMul->TabIndex = 13;
            this->bMul->Text = L"x";
            this->bMul->UseVisualStyleBackColor = true;
            this->bMul->Click += gcnew System::EventHandler(this, &MainWindow::bMul_Click);
            // 
            // bDiv
            // 
            this->bDiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bDiv->ForeColor = System::Drawing::Color::White;
            this->bDiv->Location = System::Drawing::Point(255, 297);
            this->bDiv->Name = L"bDiv";
            this->bDiv->Size = System::Drawing::Size(78, 71);
            this->bDiv->TabIndex = 14;
            this->bDiv->Text = L"/";
            this->bDiv->UseVisualStyleBackColor = true;
            this->bDiv->Click += gcnew System::EventHandler(this, &MainWindow::bDiv_Click);
            // 
            // bRes
            // 
            this->bRes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bRes->ForeColor = System::Drawing::Color::White;
            this->bRes->Location = System::Drawing::Point(171, 297);
            this->bRes->Name = L"bRes";
            this->bRes->Size = System::Drawing::Size(78, 71);
            this->bRes->TabIndex = 15;
            this->bRes->Text = L"=";
            this->bRes->UseVisualStyleBackColor = true;
            this->bRes->Click += gcnew System::EventHandler(this, &MainWindow::bRes_Click);
            // 
            // bBorrar
            // 
            this->bBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->bBorrar->ForeColor = System::Drawing::Color::White;
            this->bBorrar->Location = System::Drawing::Point(3, 297);
            this->bBorrar->Name = L"bBorrar";
            this->bBorrar->Size = System::Drawing::Size(78, 71);
            this->bBorrar->TabIndex = 16;
            this->bBorrar->Text = L"C";
            this->bBorrar->UseVisualStyleBackColor = true;
            this->bBorrar->Click += gcnew System::EventHandler(this, &MainWindow::bBorrar_Click);
            // 
            // serversBox
            // 
            this->serversBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
                | System::Windows::Forms::AnchorStyles::Right));
            this->serversBox->Controls->Add(this->openddsButton);
            this->serversBox->Controls->Add(this->rtiButton);
            this->serversBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->serversBox->ForeColor = System::Drawing::Color::White;
            this->serversBox->Location = System::Drawing::Point(3, 385);
            this->serversBox->Name = L"serversBox";
            this->serversBox->Size = System::Drawing::Size(329, 75);
            this->serversBox->TabIndex = 17;
            this->serversBox->TabStop = false;
            this->serversBox->Text = L"Available Servers";
            this->serversBox->Visible = false;
            // 
            // openddsButton
            // 
            this->openddsButton->AutoSize = true;
            this->openddsButton->Location = System::Drawing::Point(168, 32);
            this->openddsButton->Name = L"openddsButton";
            this->openddsButton->Size = System::Drawing::Size(141, 22);
            this->openddsButton->TabIndex = 1;
            this->openddsButton->TabStop = true;
            this->openddsButton->Text = L"OpenDDS Server";
            this->openddsButton->UseVisualStyleBackColor = true;
            this->openddsButton->Click += gcnew System::EventHandler(this, &MainWindow::openddsButton_Click);
            // 
            // rtiButton
            // 
            this->rtiButton->AutoSize = true;
            this->rtiButton->Checked = true;
            this->rtiButton->Location = System::Drawing::Point(9, 32);
            this->rtiButton->Name = L"rtiButton";
            this->rtiButton->Size = System::Drawing::Size(96, 22);
            this->rtiButton->TabIndex = 0;
            this->rtiButton->TabStop = true;
            this->rtiButton->Text = L"RTI Connext Server";
            this->rtiButton->UseVisualStyleBackColor = true;
            this->rtiButton->Click += gcnew System::EventHandler(this, &MainWindow::rtiButton_Click);
            // 
            // deslButton
            // 
            this->deslButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->deslButton->Font = (gcnew System::Drawing::Font(L"Symbol", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(2)));
            this->deslButton->ForeColor = System::Drawing::Color::White;
            this->deslButton->Location = System::Drawing::Point(140, 374);
            this->deslButton->Name = L"deslButton";
            this->deslButton->Size = System::Drawing::Size(54, 21);
            this->deslButton->TabIndex = 18;
            this->deslButton->Text = L"ßß";
            this->deslButton->UseVisualStyleBackColor = true;
            this->deslButton->Click += gcnew System::EventHandler(this, &MainWindow::deslButton_Click);
            // 
            // statusStrip
            // 
            this->statusStrip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(72)), 
                static_cast<System::Int32>(static_cast<System::Byte>(126)));
            this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
            this->statusStrip->Location = System::Drawing::Point(0, 402);
            this->statusStrip->Name = L"statusStrip";
            this->statusStrip->Size = System::Drawing::Size(338, 22);
            this->statusStrip->TabIndex = 19;
            this->statusStrip->Text = L"statusStrip1";
            // 
            // toolStripStatusLabel1
            // 
            this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::White;
            this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
            this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
            // 
            // MainWindow
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(72)), 
                static_cast<System::Int32>(static_cast<System::Byte>(126)));
            this->ClientSize = System::Drawing::Size(338, 424);
            this->Controls->Add(this->statusStrip);
            this->Controls->Add(this->deslButton);
            this->Controls->Add(this->serversBox);
            this->Controls->Add(this->bBorrar);
            this->Controls->Add(this->bRes);
            this->Controls->Add(this->bDiv);
            this->Controls->Add(this->bMul);
            this->Controls->Add(this->bSubs);
            this->Controls->Add(this->bAdd);
            this->Controls->Add(this->bn0);
            this->Controls->Add(this->bn3);
            this->Controls->Add(this->bn2);
            this->Controls->Add(this->bn1);
            this->Controls->Add(this->bn6);
            this->Controls->Add(this->bn5);
            this->Controls->Add(this->bn4);
            this->Controls->Add(this->bn9);
            this->Controls->Add(this->bn8);
            this->Controls->Add(this->bn7);
            this->Controls->Add(this->txtBox);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"MainWindow";
            this->Text = L"Calculator (RTI Connext DDS)";
            this->serversBox->ResumeLayout(false);
            this->serversBox->PerformLayout();
            this->statusStrip->ResumeLayout(false);
            this->statusStrip->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: 
    System::Void bn0_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "0";
    }
    System::Void bn1_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "1";
    }

    System::Void bn2_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "2";
    }

    System::Void bn3_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "3";
    }

    System::Void bn4_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "4";
    }

    System::Void bn5_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "5";
    }

    System::Void bn6_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "6";
    }

    System::Void bn7_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "7";
    }

    System::Void bn8_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "8";
    }

    System::Void bn9_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(this->txtBox->Text == "0" || this->txtBox->Text == "Error")
            this->txtBox->Text = "";
            
        this->txtBox->Text = this->txtBox->Text + "9";
    }

    System::Void bBorrar_Click(System::Object^  sender, System::EventArgs^  e)
    {
        this->txtBox->Text = "0";
        this->operation = 0;
    }

    System::Void bAdd_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(operation == 0 && this->txtBox->Text != "Error")
        {
            firstOp = Convert::ToInt32(this->txtBox->Text);
            this->txtBox->Text = this->txtBox->Text + " + ";
            operation = 1;
            secondOpPosition = this->txtBox->Text->Length;
        }
    }
    System::Void bSubs_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(operation == 0 && this->txtBox->Text != "Error")
        {
            firstOp = Convert::ToInt32(this->txtBox->Text);
            this->txtBox->Text = this->txtBox->Text + " - ";
            operation = 2;
            secondOpPosition = this->txtBox->Text->Length;
        }
    }

    System::Void bMul_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(operation == 0 && this->txtBox->Text != "Error")
        {
            firstOp = Convert::ToInt32(this->txtBox->Text);
            this->txtBox->Text = this->txtBox->Text + " x ";
            operation = 3;
            secondOpPosition = this->txtBox->Text->Length;
        }
    }

    System::Void bDiv_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(operation == 0 && this->txtBox->Text != "Error")
        {
            firstOp = Convert::ToInt32(this->txtBox->Text);
            this->txtBox->Text = this->txtBox->Text + " / ";
            operation = 4;
            secondOpPosition = this->txtBox->Text->Length;
        }
    }

    System::Void bRes_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(operation != 0 && secondOpPosition != this->txtBox->Text->Length)
        {
            System::String ^s = this->txtBox->Text->Substring(secondOpPosition);
            secondOp = Convert::ToInt32(s);
            CalculatorProxy *proxy = (serverSelected == 0 ? m_rtiproxy : m_openproxy);

            this->Text = L"Calculator (RTI Connext DDS) ... Sending";

            if(operation == 1)
            {
                try
                {
                    DDS_Long addition_ret = proxy->addition(firstOp, secondOp);
                    this->txtBox->Text = Convert::ToString(addition_ret);
                    this->toolStripStatusLabel1->Text = "Operation successful";
                }
                catch(eProsima::RPCDDS::ServerInternalException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server Exception: ";
                    this->toolStripStatusLabel1->Text += gcnew String(ex.what());
                }
                catch(eProsima::RPCDDS::ServerNotFoundException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server not found";
                }
                catch(eProsima::RPCDDS::ServerTimeoutException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Operation failed: timeout";
                }
            }
            else if(operation == 2)
            {
                try
                {
                    DDS_Long substraction_ret = proxy->substraction(firstOp, secondOp);
                    this->txtBox->Text = Convert::ToString(substraction_ret);
                    this->toolStripStatusLabel1->Text = "Operation successful";
                }
                catch(eProsima::RPCDDS::ServerInternalException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server Exception: ";
                    this->toolStripStatusLabel1->Text += gcnew String(ex.what());
                }
                catch(eProsima::RPCDDS::ServerNotFoundException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server not found";
                }
                catch(eProsima::RPCDDS::ServerTimeoutException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Operation failed: timeout";
                }
            }
            else if(operation == 3)
            {
                try
                {
                    DDS_Long multiplication_ret = proxy->multiplication(firstOp, secondOp);
                    this->txtBox->Text = Convert::ToString(multiplication_ret);
                    this->toolStripStatusLabel1->Text = "Operation successful";
                }
                catch(eProsima::RPCDDS::ServerInternalException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server Exception: ";
                    this->toolStripStatusLabel1->Text += gcnew String(ex.what());
                }
                catch(eProsima::RPCDDS::ServerNotFoundException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server not found";
                }
                catch(eProsima::RPCDDS::ServerTimeoutException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Operation failed: timeout";
                }
            }
            else if(operation == 4)
            {
                try
                {
                    DDS_Long division_ret = proxy->division(firstOp, secondOp);
                    this->txtBox->Text = Convert::ToString(division_ret);
                    this->toolStripStatusLabel1->Text = "Operation successful";
                }
                catch(eProsima::RPCDDS::ServerInternalException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server Exception: ";
                    this->toolStripStatusLabel1->Text += gcnew String(ex.what());
                }
                catch(eProsima::RPCDDS::ServerNotFoundException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Server not found";
                }
                catch(eProsima::RPCDDS::ServerTimeoutException &ex)
                {
                    this->txtBox->Text = "Error";
                    this->toolStripStatusLabel1->Text = "Operation failed: timeout";
                }
            }

            operation = 0;

            this->Text = L"Calculator (RTI Connext DDS)";
        }
    }

    System::Void deslButton_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(close == true)
        {
            close = false;
            this->deslButton->Location = System::Drawing::Point(140, 465);
            this->deslButton->Text = "ÝÝ";
            this->Size = System::Drawing::Size(344, 541);
            this->serversBox->Visible = true;
        }
        else
        {
            close = true;
            this->deslButton->Location = System::Drawing::Point(140, 374);
            this->deslButton->Text = "ßß";
            this->Size = System::Drawing::Size(344, 450);
            this->serversBox->Visible = false;
        }
    }

    System::Void rtiButton_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(serverSelected != 0)
        {
            serverSelected = 0;
        }
    }

    System::Void openddsButton_Click(System::Object^  sender, System::EventArgs^  e)
    {
        if(serverSelected != 1)
        {
            serverSelected = 1;
        }
    }
};
}
