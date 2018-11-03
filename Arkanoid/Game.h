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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paddle))->BeginInit();
			this->SuspendLayout();
			// 
			// timer_ball
			// 
			this->timer_ball->Enabled = true;
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
			this->left->Interval = 20;
			this->left->Tick += gcnew System::EventHandler(this, &Game::left_Tick);
			// 
			// right
			// 
			this->right->Interval = 20;
			this->right->Tick += gcnew System::EventHandler(this, &Game::right_Tick);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(784, 461);
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
		if (ball->Top >= paddle->Top+ball->Height) {
			timer_ball->Enabled = false;
			ball->Visible = false;
		}
	}
	private: System::Void left_Tick(System::Object^  sender, System::EventArgs^  e) {
		paddle->Left -= 10;
	}
	private: System::Void right_Tick(System::Object^  sender, System::EventArgs^  e) {
		paddle->Left += 10;
	}
	private: System::Void Game_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) left->Enabled = true;
		if (e->KeyCode == Keys::Right) right->Enabled = true;
	}
	private: System::Void Game_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) left->Enabled = false;
		if (e->KeyCode == Keys::Right) right->Enabled = false;
	}
};
}
