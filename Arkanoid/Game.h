#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>

	int x = -8;
	int y = -8;
	int toWin = 12;

	/*bool collision(PictureBox^ *ba, PictureBox^ *bri) {
		if (ba->Left >= bri->Left - ba->Width &&
			ba->Left <= bri->Left + bri->Width &&
			ba->Top >= bri->Top - ba->Height &&
			ba->Top <= bri->Top + bri->Height) {
			return true;
		}
		else
		{
			return false;
		}
	}*/

	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Timer^  timer_ball;
	private: System::Windows::Forms::PictureBox^  bg;
	private: System::Windows::Forms::PictureBox^  ball;
	private: System::Windows::Forms::PictureBox^  paddle;
	private: System::Windows::Forms::Timer^  left;
	private: System::Windows::Forms::Timer^  right;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->timer_ball = (gcnew System::Windows::Forms::Timer(this->components));
			this->bg = (gcnew System::Windows::Forms::PictureBox());
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->paddle = (gcnew System::Windows::Forms::PictureBox());
			this->left = (gcnew System::Windows::Forms::Timer(this->components));
			this->right = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paddle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// timer_ball
			// 
			this->timer_ball->Enabled = true;
			this->timer_ball->Interval = 15;
			this->timer_ball->Tick += gcnew System::EventHandler(this, &Game::timer_ball_Tick);
			// 
			// bg
			// 
			this->bg->BackColor = System::Drawing::Color::White;
			this->bg->Location = System::Drawing::Point(0, 0);
			this->bg->Name = L"bg";
			this->bg->Size = System::Drawing::Size(785, 462);
			this->bg->TabIndex = 0;
			this->bg->TabStop = false;
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::White;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(130, 235);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(32, 32);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 1;
			this->ball->TabStop = false;
			// 
			// paddle
			// 
			this->paddle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paddle.Image")));
			this->paddle->Location = System::Drawing::Point(350, 429);
			this->paddle->Name = L"paddle";
			this->paddle->Size = System::Drawing::Size(100, 20);
			this->paddle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->paddle->TabIndex = 2;
			this->paddle->TabStop = false;
			// 
			// left
			// 
			this->left->Interval = 15;
			this->left->Tick += gcnew System::EventHandler(this, &Game::left_Tick);
			// 
			// right
			// 
			this->right->Interval = 15;
			this->right->Tick += gcnew System::EventHandler(this, &Game::right_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(403, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(469, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(535, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 60);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(337, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(60, 60);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(271, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(60, 60);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(403, 78);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(60, 60);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(205, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(60, 60);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(469, 78);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(60, 60);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(337, 78);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(60, 60);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(271, 78);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(60, 60);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 11;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(337, 144);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(60, 60);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 12;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(403, 144);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(60, 60);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 13;
			this->pictureBox12->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(205, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(390, 85);
			this->button1->TabIndex = 14;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->paddle);
			this->Controls->Add(this->ball);
			this->Controls->Add(this->bg);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Arkanoid";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paddle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer_ball_Tick(System::Object^  sender, System::EventArgs^  e) {
		ball->Left += x;
		ball->Top += y;

		if (ball->Left <= bg->Left) { x = -x; }
		if (ball->Top <= bg->Top) { y = -y; }
		if (ball->Left + ball->Width >= bg->Width) { x = -x; }
		if (ball->Top >= paddle->Top + ball->Height) {
			timer_ball->Enabled = false;
			ball->Visible = false;
			button1->Text = "You lose! Again?";
			button1->Visible = true;
		}
		else if (ball->Left > paddle->Left - ball->Width / 2 && ball->Left < paddle->Left + paddle->Width && ball->Top + ball->Height > paddle->Top) {
			if (y > 0) y = -y;
		}
		if (toWin <= 0) {
			timer_ball->Enabled = false;
			ball->Visible = false;
			button1->Text = "You win! Again?";
			button1->Visible = true;
		}

		if (ball->Left >= pictureBox1->Left - ball->Width &&
			ball->Left <= pictureBox1->Left + pictureBox1->Width &&
			ball->Top >= pictureBox1->Top - ball->Height &&
			ball->Top <= pictureBox1->Top + pictureBox1->Height &&
			pictureBox1->Visible == true){
			x = -x;
			y = -y;
			pictureBox1->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox2->Left - ball->Width &&
			ball->Left <= pictureBox2->Left + pictureBox2->Width &&
			ball->Top >= pictureBox2->Top - ball->Height &&
			ball->Top <= pictureBox2->Top + pictureBox2->Height && 
			pictureBox2->Visible == true) {
			x = -x;
			y = -y;
			pictureBox2->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox3->Left - ball->Width &&
			ball->Left <= pictureBox3->Left + pictureBox3->Width &&
			ball->Top >= pictureBox3->Top - ball->Height &&
			ball->Top <= pictureBox3->Top + pictureBox3->Height &&
			pictureBox3->Visible == true) {
			x = -x;
			y = -y;
			pictureBox3->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox4->Left - ball->Width &&
			ball->Left <= pictureBox4->Left + pictureBox4->Width &&
			ball->Top >= pictureBox4->Top - ball->Height &&
			ball->Top <= pictureBox4->Top + pictureBox4->Height &&
			pictureBox4->Visible == true) {
			x = -x;
			y = -y;
			pictureBox4->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox5->Left - ball->Width &&
			ball->Left <= pictureBox5->Left + pictureBox5->Width &&
			ball->Top >= pictureBox5->Top - ball->Height &&
			ball->Top <= pictureBox5->Top + pictureBox5->Height &&
			pictureBox5->Visible == true) {
			x = -x;
			y = -y;
			pictureBox5->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox6->Left - ball->Width &&
			ball->Left <= pictureBox6->Left + pictureBox6->Width &&
			ball->Top >= pictureBox6->Top - ball->Height &&
			ball->Top <= pictureBox6->Top + pictureBox6->Height &&
			pictureBox6->Visible == true) {
			x = -x;
			y = -y;
			pictureBox6->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox7->Left - ball->Width &&
			ball->Left <= pictureBox7->Left + pictureBox7->Width &&
			ball->Top >= pictureBox7->Top - ball->Height &&
			ball->Top <= pictureBox7->Top + pictureBox7->Height && pictureBox7->Visible == true) {
			x = -x;
			y = -y;
			pictureBox7->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox8->Left - ball->Width &&
			ball->Left <= pictureBox8->Left + pictureBox8->Width &&
			ball->Top >= pictureBox8->Top - ball->Height &&
			ball->Top <= pictureBox8->Top + pictureBox8->Height &&
			pictureBox8->Visible == true) {
			x = -x;
			y = -y;
			pictureBox8->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox9->Left - ball->Width &&
			ball->Left <= pictureBox9->Left + pictureBox9->Width &&
			ball->Top >= pictureBox9->Top - ball->Height &&
			ball->Top <= pictureBox9->Top + pictureBox9->Height &&
			pictureBox9->Visible == true) {
			x = -x;
			y = -y;
			pictureBox9->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox10->Left - ball->Width &&
			ball->Left <= pictureBox10->Left + pictureBox10->Width &&
			ball->Top >= pictureBox10->Top - ball->Height &&
			ball->Top <= pictureBox10->Top + pictureBox10->Height &&
			pictureBox10->Visible == true) {
			x = -x;
			y = -y;
			pictureBox10->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox11->Left - ball->Width &&
			ball->Left <= pictureBox11->Left + pictureBox11->Width &&
			ball->Top >= pictureBox11->Top - ball->Height &&
			ball->Top <= pictureBox11->Top + pictureBox11->Height &&
			pictureBox11->Visible == true) {
			x = -x;
			y = -y;
			pictureBox11->Visible = false;
			toWin--;
		}
		if (ball->Left >= pictureBox12->Left - ball->Width &&
			ball->Left <= pictureBox12->Left + pictureBox12->Width &&
			ball->Top >= pictureBox12->Top - ball->Height &&
			ball->Top <= pictureBox12->Top + pictureBox12->Height &&
			pictureBox12->Visible == true) {
			x = -x;
			y = -y;
			pictureBox12->Visible = false;
			toWin--;
		}
	}
	private: System::Void left_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(paddle->Left > 0) paddle->Left -= 10;
	}
	private: System::Void right_Tick(System::Object^  sender, System::EventArgs^  e) {
		if(paddle->Left+paddle->Width < bg->Width) paddle->Left += 10;
	}
	private: System::Void Game_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) left->Enabled = true;
		if (e->KeyCode == Keys::Right) right->Enabled = true;
	}
	private: System::Void Game_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) left->Enabled = false;
		if (e->KeyCode == Keys::Right) right->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ball->Left = 50;
		ball->Top = 50;

		ball->Visible = true;
		x = -8;	y = -8;
		timer_ball->Enabled = true;

		button1->Visible = false;
		toWin = 12;

		pictureBox1->Visible = true;	pictureBox2->Visible = true;	pictureBox3->Visible = true;
		pictureBox4->Visible = true;	pictureBox5->Visible = true;	pictureBox6->Visible = true;
		pictureBox7->Visible = true;	pictureBox8->Visible = true;	pictureBox9->Visible = true;
		pictureBox10->Visible = true;	pictureBox11->Visible = true;	pictureBox12->Visible = true;
	}
};
}
