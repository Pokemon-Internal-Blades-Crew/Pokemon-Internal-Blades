#pragma once

namespace PokemonInternalBlades {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InternalBladesWindow
	/// </summary>
	public ref class InternalBladesWindow : public System::Windows::Forms::Form
	{
	public:
		InternalBladesWindow(void)
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
		~InternalBladesWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  g_GameWindow;
	protected: 
	private: System::Windows::Forms::RichTextBox^  g_GameText;
	private: System::Windows::Forms::GroupBox^  g_MoveBox;
	private: System::Windows::Forms::ListView^  g_MoveList;
	private: System::Windows::Forms::Button^  g_TeamButton;
	private: System::Windows::Forms::Button^  g_ItemButton;
	private: System::Windows::Forms::Button^  g_FleeButton;
	private: System::Windows::Forms::Button^  g_WaitButton;
	private: System::Windows::Forms::MenuStrip^  g_MenuBar;

	private: System::Windows::Forms::ToolStripMenuItem^  g_m_File;

	private: System::Windows::Forms::ToolStripMenuItem^  g_m_f_Save;
	private: System::Windows::Forms::ToolStripMenuItem^  g_m_f_SaveAs;











	private: System::Windows::Forms::ToolStripMenuItem^  g_m_f_Open;
	private: System::Windows::Forms::ToolStripMenuItem^  g_m_f_Exit;
	private: System::Windows::Forms::ToolStripMenuItem^  g_m_Help;








	private: System::Windows::Forms::ToolStripMenuItem^  g_m_About;


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
			this->g_GameWindow = (gcnew System::Windows::Forms::Panel());
			this->g_GameText = (gcnew System::Windows::Forms::RichTextBox());
			this->g_MoveBox = (gcnew System::Windows::Forms::GroupBox());
			this->g_MoveList = (gcnew System::Windows::Forms::ListView());
			this->g_TeamButton = (gcnew System::Windows::Forms::Button());
			this->g_ItemButton = (gcnew System::Windows::Forms::Button());
			this->g_FleeButton = (gcnew System::Windows::Forms::Button());
			this->g_WaitButton = (gcnew System::Windows::Forms::Button());
			this->g_MenuBar = (gcnew System::Windows::Forms::MenuStrip());
			this->g_m_File = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_f_Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_f_SaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_f_Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_f_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_Help = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_m_About = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->g_GameWindow->SuspendLayout();
			this->g_MoveBox->SuspendLayout();
			this->g_MenuBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// g_GameWindow
			// 
			this->g_GameWindow->Controls->Add(this->g_GameText);
			this->g_GameWindow->Location = System::Drawing::Point(61, 26);
			this->g_GameWindow->Name = L"g_GameWindow";
			this->g_GameWindow->Size = System::Drawing::Size(766, 236);
			this->g_GameWindow->TabIndex = 0;
			this->g_GameWindow->Visible = false;
			// 
			// g_GameText
			// 
			this->g_GameText->Location = System::Drawing::Point(4, 4);
			this->g_GameText->Name = L"g_GameText";
			this->g_GameText->ReadOnly = true;
			this->g_GameText->Size = System::Drawing::Size(759, 227);
			this->g_GameText->TabIndex = 0;
			this->g_GameText->Text = L"";
			// 
			// g_MoveBox
			// 
			this->g_MoveBox->Controls->Add(this->g_MoveList);
			this->g_MoveBox->Location = System::Drawing::Point(65, 286);
			this->g_MoveBox->Name = L"g_MoveBox";
			this->g_MoveBox->Size = System::Drawing::Size(200, 100);
			this->g_MoveBox->TabIndex = 1;
			this->g_MoveBox->TabStop = false;
			// 
			// g_MoveList
			// 
			this->g_MoveList->Location = System::Drawing::Point(7, 11);
			this->g_MoveList->Name = L"g_MoveList";
			this->g_MoveList->Size = System::Drawing::Size(187, 83);
			this->g_MoveList->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->g_MoveList->TabIndex = 0;
			this->g_MoveList->UseCompatibleStateImageBehavior = false;
			// 
			// g_TeamButton
			// 
			this->g_TeamButton->Location = System::Drawing::Point(509, 268);
			this->g_TeamButton->Name = L"g_TeamButton";
			this->g_TeamButton->Size = System::Drawing::Size(75, 23);
			this->g_TeamButton->TabIndex = 2;
			this->g_TeamButton->Text = L"button1";
			this->g_TeamButton->UseVisualStyleBackColor = true;
			// 
			// g_ItemButton
			// 
			this->g_ItemButton->Location = System::Drawing::Point(590, 268);
			this->g_ItemButton->Name = L"g_ItemButton";
			this->g_ItemButton->Size = System::Drawing::Size(75, 23);
			this->g_ItemButton->TabIndex = 3;
			this->g_ItemButton->Text = L"button2";
			this->g_ItemButton->UseVisualStyleBackColor = true;
			// 
			// g_FleeButton
			// 
			this->g_FleeButton->Location = System::Drawing::Point(671, 268);
			this->g_FleeButton->Name = L"g_FleeButton";
			this->g_FleeButton->Size = System::Drawing::Size(75, 23);
			this->g_FleeButton->TabIndex = 4;
			this->g_FleeButton->Text = L"button3";
			this->g_FleeButton->UseVisualStyleBackColor = true;
			// 
			// g_WaitButton
			// 
			this->g_WaitButton->Location = System::Drawing::Point(752, 268);
			this->g_WaitButton->Name = L"g_WaitButton";
			this->g_WaitButton->Size = System::Drawing::Size(75, 23);
			this->g_WaitButton->TabIndex = 5;
			this->g_WaitButton->Text = L"button4";
			this->g_WaitButton->UseVisualStyleBackColor = true;
			this->g_WaitButton->Click += gcnew System::EventHandler(this, &InternalBladesWindow::button4_Click);
			// 
			// g_MenuBar
			// 
			this->g_MenuBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->g_m_File, this->g_m_Help});
			this->g_MenuBar->Location = System::Drawing::Point(0, 0);
			this->g_MenuBar->Name = L"g_MenuBar";
			this->g_MenuBar->Size = System::Drawing::Size(893, 24);
			this->g_MenuBar->TabIndex = 7;
			this->g_MenuBar->Text = L"menuStrip1";
			// 
			// g_m_File
			// 
			this->g_m_File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->g_m_f_Save, 
				this->g_m_f_SaveAs, this->g_m_f_Open, this->g_m_f_Exit});
			this->g_m_File->Name = L"g_m_File";
			this->g_m_File->Size = System::Drawing::Size(37, 20);
			this->g_m_File->Text = L"File";
			// 
			// g_m_f_Save
			// 
			this->g_m_f_Save->Name = L"g_m_f_Save";
			this->g_m_f_Save->Size = System::Drawing::Size(152, 22);
			this->g_m_f_Save->Text = L"Save";
			// 
			// g_m_f_SaveAs
			// 
			this->g_m_f_SaveAs->Name = L"g_m_f_SaveAs";
			this->g_m_f_SaveAs->Size = System::Drawing::Size(152, 22);
			this->g_m_f_SaveAs->Text = L"Save As...";
			this->g_m_f_SaveAs->Click += gcnew System::EventHandler(this, &InternalBladesWindow::saveAsToolStripMenuItem_Click);
			// 
			// g_m_f_Open
			// 
			this->g_m_f_Open->Name = L"g_m_f_Open";
			this->g_m_f_Open->Size = System::Drawing::Size(152, 22);
			this->g_m_f_Open->Text = L"Open...";
			// 
			// g_m_f_Exit
			// 
			this->g_m_f_Exit->Name = L"g_m_f_Exit";
			this->g_m_f_Exit->Size = System::Drawing::Size(152, 22);
			this->g_m_f_Exit->Text = L"Exit";
			// 
			// g_m_Help
			// 
			this->g_m_Help->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->g_m_About});
			this->g_m_Help->Name = L"g_m_Help";
			this->g_m_Help->Size = System::Drawing::Size(44, 20);
			this->g_m_Help->Text = L"Help";
			// 
			// g_m_About
			// 
			this->g_m_About->AutoToolTip = true;
			this->g_m_About->Name = L"g_m_About";
			this->g_m_About->Size = System::Drawing::Size(152, 22);
			this->g_m_About->Text = L"About";
			// 
			// InternalBladesWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 398);
			this->Controls->Add(this->g_WaitButton);
			this->Controls->Add(this->g_FleeButton);
			this->Controls->Add(this->g_ItemButton);
			this->Controls->Add(this->g_TeamButton);
			this->Controls->Add(this->g_MoveBox);
			this->Controls->Add(this->g_GameWindow);
			this->Controls->Add(this->g_MenuBar);
			this->MainMenuStrip = this->g_MenuBar;
			this->Name = L"InternalBladesWindow";
			this->Text = L"Internal Blades Window";
			this->g_GameWindow->ResumeLayout(false);
			this->g_MoveBox->ResumeLayout(false);
			this->g_MenuBar->ResumeLayout(false);
			this->g_MenuBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
