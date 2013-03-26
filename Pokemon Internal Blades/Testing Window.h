#pragma once
#include "All Classes.h"
#include "Constants.h"

namespace PokemonInternalBlades {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace pk;
	/// <summary>
	/// Summary for TestingWindow
	/// </summary>
	public ref class TestingWindow : public System::Windows::Forms::Form
	{
	public:
		TestingWindow(void)
		{
			InitializeComponent();
			Pokemon pikachu = Pokemon("Pikachu", "The Electric Mouse Pokemon", ELECTRIC, NONE, NO);
			pikachu.SetBaseStats(35, 55, 50, 30, 40, 90);
			pk::Move_class thunder = pk::Move_class("Thunder", 90, 0, 120, 5, ELECTRIC);
			Pokemon espeon = Pokemon("Espeon", "The Sun Pokemon", PSYCHIC, NONE, NO);
			espeon.SetBaseStats(65, 65, 130, 60, 95, 110);
			pk::Move_class psychic = pk::Move_class("Psychic", 100, 1, 120, 15, PSYCHIC);
			
			double damage = psychic.CheckEffectiveness(pikachu, espeon);
			richTextBox1->AppendText("Pikachu"/*pikachu.GetName()*/);
			richTextBox1->AppendText(" used ");
			richTextBox1->AppendText("Thunder");
			richTextBox1->AppendText(" for ");
			richTextBox1->AppendText(damage.ToString() + "\n");
			damage = thunder.CheckEffectiveness(espeon, pikachu);
			richTextBox1->AppendText("Espeon");
			richTextBox1->AppendText(" used ");
			richTextBox1->AppendText("Psychic");
			richTextBox1->AppendText(" for ");
			richTextBox1->AppendText(damage.ToString() + "\n");
		}
	private:


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TestingWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 





































	private: System::Windows::Forms::RichTextBox^  richTextBox1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(13, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(731, 244);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			// 
			// TestingWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 269);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"TestingWindow";
			this->Text = L"TestingWindow";
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
