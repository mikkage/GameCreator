#pragma once

namespace gamemaker {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int i;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			numButtons = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox17;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Button";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 65);
			this->textBox2->MinimumSize = System::Drawing::Size(190, 40);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 40);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tile Filename(no extension)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Button Text";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(190, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(109, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(90, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Button Link(no extension)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Tile Sound Effect(with extension)";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 212);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Background Music(with extension)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Background Image(with extension)";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 313);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(187, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 260);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(184, 20);
			this->textBox7->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(242, 21);
			this->textBox8->MinimumSize = System::Drawing::Size(200, 100);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(264, 100);
			this->textBox8->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(239, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Tile Text";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(239, 158);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(92, 20);
			this->textBox9->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(239, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Conditional";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"eq", L"neq", L"gt", L"gte", L"lt", L"lte"});
			this->comboBox1->Location = System::Drawing::Point(357, 158);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(44, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(239, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Argument 1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(354, 142);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Comparison";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(423, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Argument 2";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(426, 159);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(80, 20);
			this->textBox10->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(239, 197);
			this->textBox11->MinimumSize = System::Drawing::Size(264, 60);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(264, 60);
			this->textBox11->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(239, 181);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Conditional If Statement";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(242, 364);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Create Variable";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(242, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Name";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(357, 377);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 13);
			this->label16->TabIndex = 28;
			this->label16->Text = L"Value";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(242, 393);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(89, 20);
			this->textBox12->TabIndex = 13;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(360, 393);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(99, 20);
			this->textBox13->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 56);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Create Tile";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 364);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Save Directory";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(15, 381);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(181, 20);
			this->textBox14->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(239, 416);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(94, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Modify Int Variable";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(242, 436);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 13);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Variable Name";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(357, 436);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 13);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Modify Amount";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(242, 452);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(360, 452);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 16;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(236, 263);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(133, 13);
			this->label20->TabIndex = 38;
			this->label20->Text = L"Conditional Else Statement";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(239, 279);
			this->textBox17->MinimumSize = System::Drawing::Size(264, 60);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(264, 60);
			this->textBox17->TabIndex = 39;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 484);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Tile Maker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List<String^> bText;
		List<String^> fnames;
		int numButtons;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 bText.Add(textBox2->Text->ToString());
				 fnames.Add(textBox3->Text->ToString() + ".xml");
				 numButtons++;
				 textBox4->Text = (numButtons + " buttons in tile");
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^ sw;

			 if(textBox14->TextLength > 0)
			 {
			 if(!textBox14->Text->EndsWith("\\"))	//check to see if the user has a \ at the end of the path and add it if there isn't one
				 textBox14->Text = textBox14->Text + "\\";
				 sw = gcnew StreamWriter(textBox14->Text->ToString() + textBox1->Text->ToString() + ".xml");
			 sw->WriteLine("<tile>");
			 if(numButtons != 0)
			 {
				 String^ b;
				 String^ f;
				 //write button links
				 for(int count = 0; count < numButtons; count++)
				 {
					b = bText[count];
					f = fnames[count];
					
					sw->WriteLine("<link>");
					sw->WriteLine("	<file>" + f + "</file>");
					sw->WriteLine("	<text>" + b + "</text>");
					sw->WriteLine("</link>");
				 }
			 }
				//write sound effects
				 if(textBox5->TextLength)
				 {
					 sw->WriteLine("<sound>" + textBox5->Text->ToString() + "</sound>");
				 }
				 //write background music
				 if(textBox7->TextLength)
					 sw->WriteLine("<music>" + textBox7->Text->ToString() + "</music>");

				 //write background image
				 if(textBox6->TextLength)
					 sw->WriteLine("<image>" + textBox6->Text->ToString() + "</image>");

				 //write tile text
				 if(textBox8->TextLength)
				 {
					 sw->WriteLine("<text>");
					 sw->WriteLine(textBox8->Text->ToString());
					 sw->WriteLine("</text>");
				 }

				 //write conditional statement
				 if(textBox9->TextLength && textBox10->Text && comboBox1->SelectedIndex)
				 {
					comboBox1->SelectedItem->ToString();
					sw->WriteLine("<if arg1=\"" + textBox9->Text->ToString() + "\" arg2=\"" + textBox10->Text->ToString() + "\" comparison=\"" + comboBox1->SelectedItem + "\">");
					sw->WriteLine(textBox11->Text->ToString());
					sw->WriteLine("</if>");
				 }
				 if(textBox17->TextLength)
				 {
					 sw->WriteLine("<else>");
					 sw->WriteLine(textBox17->Text->ToString());
					 sw->WriteLine("</else>");
				 }

				 //write variable declaration
				 if(textBox12->TextLength && textBox13->TextLength)
				 {
					 if(textBox12->Text->ToString() == "string" || textBox12->Text->ToString() == "int" ||textBox12->Text->ToString() == "bool")//make sure the variable name isn't a type name
					 {
						MessageBoxButtons msb = MessageBoxButtons::OK;
						MessageBoxIcon mbi = MessageBoxIcon::Error;
						MessageBox::Show("Error: The name of a variable cannot be a supported type name.","Error!",msb,mbi);
					 }
					 else
					 {
						sw->WriteLine("<var>");
						sw->WriteLine("	<name>" + textBox12->Text->ToString() + "</name>");
						sw->WriteLine("	<value>" + textBox13->Text->ToString() + "</value>");
						sw->WriteLine("</var>");
					 }
				 }
				 if(textBox15->TextLength && textBox16->TextLength)
				 {
					sw->WriteLine("<modify>");
					sw->WriteLine("	<var>" + textBox15->Text->ToString() + "</var>");
					sw->WriteLine("	<amount>" + textBox16->Text->ToString() + "</amount>");
					sw->WriteLine("</modify>");
				 }
				 


				 sw->WriteLine("</tile>");
				 sw->Close();
			 
				//reset buttons
				 bText.Clear();
				 fnames.Clear();
				 numButtons = 0;

			 }
			 else
			 {
				 MessageBox::Show("Error: No file path provided. Please enter a path and remake this tile.","Error!",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		 }
};
}
