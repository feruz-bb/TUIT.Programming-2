#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
namespace Project2{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
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
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button2;


    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button6;

    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button2
            // 
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(228, 210);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(250, 50);
            this->button2->TabIndex = 1;
            this->button2->Text = L"TATU haqida";
            this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            // 
            // button4
            // 
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button4->Font = (gcnew System::Drawing::Font(L"Javanese Text", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(228, 286);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(250, 50);
            this->button4->TabIndex = 4;
            this->button4->Text = L"Rektor";
            this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button5
            // 
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button5->Font = (gcnew System::Drawing::Font(L"Javanese Text", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(228, 580);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(250, 50);
            this->button5->TabIndex = 5;
            this->button5->Text = L"Chiqish";
            this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button1
            // 
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(228, 359);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(250, 50);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Rektorat";
            this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button6
            // 
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
            this->button6->Font = (gcnew System::Drawing::Font(L"Javanese Text", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(228, 432);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(250, 50);
            this->button6->TabIndex = 7;
            this->button6->Text = L"Fakultetlar";
            this->button6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1262, 721);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button2);
            this->DoubleBuffered = true;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"TUIT";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        Form^ f = gcnew MyForm3(this);
        f->Show();
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
       this->Hide();
       Form^ f = gcnew MyForm2(this);
       f->Show();

    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        Form^ f = gcnew MyForm
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        Form^ f = gcnew MyForm4(this);
        f->Show();
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        Form^ f = gcnew MyForm5(this);
        f->Show();
    }
};
}