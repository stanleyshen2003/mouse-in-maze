#pragma once
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define MaxStack 1000

using namespace System::Runtime::InteropServices;

int** maze;
int** ans;
bool load = false;
struct offset
{
	int x, y;
};
enum direction { E, S, W, N };
struct position
{
	int x, y;
	direction dir;
};
position stack[MaxStack];
int top;
int ctrl_x, ctrl_y;
int m, p;
bool game = false;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;



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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(736, 426);
			this->splitContainer1->SplitterDistance = 245;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 52);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(172, 141);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"請輸入奇數";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Width";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Height";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 94);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Generate Maze";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(69, 65);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(89, 25);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 28);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(89, 25);
			this->textBox1->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(20, 282);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 42);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Save Maze";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 352);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 42);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Play Game!";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(165, 226);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 19);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"動畫";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 212);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 43);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Find a Tour";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 10);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(487, 426);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(479, 397);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"RichTextBox";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(3, 2);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(473, 393);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(479, 397);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"dataGridView";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 2);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(473, 393);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(479, 397);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Correct Answer";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 2);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 31;
			this->dataGridView2->Size = System::Drawing::Size(473, 393);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage4->Size = System::Drawing::Size(479, 397);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Game";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->Location = System::Drawing::Point(3, 2);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->RowTemplate->Height = 31;
			this->dataGridView3->Size = System::Drawing::Size(473, 393);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::dataGridView3_KeyPress);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 426);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Mouse in Maze";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void push(position step) {
			if (top == 1000)
				MessageBox::Show("Stack is full");
			else
				stack[++top] = step;

		}
		position pop() {
			if (top == -1)
				MessageBox::Show("Stack is empty");
			else
				return stack[top--];
		}
		int** generatemaze(int** maze, int x, int y) {
			int direction;
			maze[x][y] = 0;
			while (maze[x][y + 2] == 1 || maze[x + 2][y] == 1 || maze[x][y - 2] == 1 || maze[x - 2][y] == 1) {
				direction = rand() % 4 + 1;
				if (direction == 1 && maze[x][y + 2] == 1) {// 向右走
					maze[x][y + 1] = 0;// 拆掉右牆
					maze = generatemaze(maze, x, y + 2);
				}
				else if (direction == 2 && maze[x - 2][y] == 1) {// 向上走
					maze[x - 1][y] = 0; // 拆掉上牆
					maze = generatemaze(maze, x - 2, y);
				}
				else if (direction == 3 && maze[x][y - 2] == 1) {// 向左走
					maze[x][y - 1] = 0; // 拆掉右牆
					maze = generatemaze(maze, x, y - 2);
				}
				else if (direction == 4 && maze[x + 2][y] == 1) {// 向下走
					maze[x + 1][y] = 0; // 拆掉上牆
					maze = generatemaze(maze, x + 2, y);
				}
			}
			return maze;
		}
		void printmaze() {
			int i, j;
			dataGridView1->RowCount = m;
			dataGridView1->ColumnCount = p;
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++) {
					//dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j];
					if (maze[i][j] == 2)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					else if (maze[i][j] == 1)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Maroon;
					else
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;
				}
			}
			dataGridView2->RowCount = m;
			dataGridView2->ColumnCount = p;
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++) {
					//dataGridView2->Rows[i]->Cells[j]->Value = maze[i][j];
					if (maze[i][j] == 2)
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					else if (maze[i][j] == 1)
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Maroon;
					else
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;
				}
			}
			dataGridView3->RowCount = m;
			dataGridView3->ColumnCount = p;
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++) {
					if (maze[i][j] == 2)
						dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					else if (maze[i][j] == 1)
						dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Maroon;
					else
						dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;
				}
			}

		}
		void printmazetext(int** print) {
			String^ S;
			int i, j;
			richTextBox1->AppendText(m + " " + p + "\n");
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++) {
					S += print[i][j] + " ";
				}
				richTextBox1->AppendText(S + "\n");
				S = "";
			}
		}
		void printcorrectmaze(int** print) {
			int i, j;
			dataGridView2->RowCount = m;
			dataGridView2->ColumnCount = p;
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++) {
					if (print[i][j] == 2)
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					else if (print[i][j] == 1)
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Maroon;
					else if (print[i][j] == 3)
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::RoyalBlue;
					else
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;
				}
			}
		}
		void update() {
			int i, j;
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++)
					dataGridView3->Rows[i]->Cells[j]->Value = "";
			}
			dataGridView3->Rows[ctrl_x]->Cells[ctrl_y]->Value = "@";
			dataGridView3->Refresh();
		}
		int MouseInMaze(int height, int width) {
			int i, j, u, v, len;
			String^ move_dir;
			bool found = false;
			offset move[4];
			move[E].x = 0; move[E].y = 1;
			move[S].x = 1; move[S].y = 0;
			move[W].x = 0; move[W].y = -1;
			move[N].x = -1; move[N].y = 0;//定義方向
			position step;
			maze[1][0] = 3;
			step.x = 1; step.y = 1; step.dir = E; //define the first step
			maze[1][1] = 3;
			dataGridView1->Rows[1]->Cells[0]->Style->BackColor = Color::RoyalBlue;
			if (checkBox1->Checked) dataGridView1->Refresh();
			dataGridView1->Rows[1]->Cells[1]->Style->BackColor = Color::RoyalBlue;
			if (checkBox1->Checked) dataGridView1->Refresh();
			push(step);
			while (top != -1 && !found) {//確認stack不是空的，且還沒找到終點
				step = pop();
				i = step.x; j = step.y;
				while (step.dir <= N && !found) {
					u = i + move[step.dir].x;
					v = j + move[step.dir].y;
					if (u == height - 2 && v == width - 1) {//找到終點
						found = true;
						step.x = i; step.y = j;
						push(step);
						maze[u][v] = 3;
						dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::RoyalBlue;
						if (checkBox1->Checked) dataGridView1->Refresh();
						len = top;//存下正確路徑
						while (top != 0) {
							position s = pop();
							move_dir = Convert::ToString(s.dir);
							richTextBox1->AppendText("Step:(" + s.x + "," + s.y + "," + move_dir + ")\n");
						}
						return len;
					}
					if (maze[u][v] == 0) {
						maze[u][v] = 3;
						dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::RoyalBlue;
						if (checkBox1->Checked) dataGridView1->Refresh();
						step.x = i; step.y = j; step.dir = direction(step.dir + 1);
						push(step);
						i = u; j = v; step.dir = E;
					}//前方有路，繼續走
					else
						step.dir = direction(step.dir + 1);//前方是牆壁，轉向

				}
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::PowderBlue;
				if (checkBox1->Checked) dataGridView1->Refresh();
			}
			return 0;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ S;
		int  pos, i, j;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {// 順利開啟檔案才繼續往下做
			load = true;
			richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			S = richTextBox1->Lines[0];
			pos = S->IndexOf(" ");
			m = int::Parse(S->Substring(0, pos));
			p = int::Parse(S->Substring(pos + 1, S->Length - pos - 1));
			maze = new int* [m];
			for (i = 0; i < m; i++)
				maze[i] = new int[p];
			for (i = 1; i <= m; i++) {
				S = richTextBox1->Lines[i];
				for (j = 0; j < p; j++)
					maze[i - 1][j] = int::Parse(S->Substring(j * 2, 1));
			}
			richTextBox1->AppendText("\n");
			printmaze();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int i, j;
		if (maze) {
			for (i = 0; i < m; i++)
				delete maze[i];
			delete maze;
		}//刪掉之前的迷宮
		m = int::Parse(textBox1->Text);
		p = int::Parse(textBox2->Text);
		if ((m % 2) && (p % 2)) {
			int Start_i = 1, Start_j = 1, End_i = m - 1, End_j = p - 1;
			int** mazeX;//專門生成的迷宮，最外圈有一層檔板
			mazeX = new int* [m + 2];
			for (i = 0; i < m + 2; i++)
				mazeX[i] = new int[p + 2];
			srand(time(NULL));
			for (i = 0; i < m + 2; i++) {
				for (j = 0; j < p + 2; j++) {
					if ((i == 0) || (j == 0) || (i == m + 1) || (j == p + 1))
						mazeX[i][j] = 4; // 設定外層刻意保留的擋板
					else
						mazeX[i][j] = 1;// 初始迷宮 (m*p) 內部
				}
			}
			mazeX = generatemaze(mazeX, End_i, End_j);// 產生迷宮 出口[m-1,p-1]、入口:[2,2]
			for (i = 1; i <= m; i++) {
				for (j = 1; j <= p; j++) {
					if ((i == 1) || (j == 1) || (i == m) || (j == p))
						mazeX[i][j] = 2; // 設定外牆
				}
			}
			mazeX[Start_i + 1][Start_j] = 0; // 拆掉入口 mazeX[2,2] 的左牆 即 [2,1] (=[Start_i+1, Start_j])
			mazeX[End_i][End_j + 1] = 0; // 拆掉出口 mazeX[m-1, p-1] 右牆 即 [m-1,p](=[End_i, End_j+1])
			maze = new int* [m];
			for (i = 0; i < m; i++)
				maze[i] = new int[p];
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++)
					maze[i][j] = mazeX[i + 1][j + 1]; //移除檔板，調整入口成為 maze[1,1]，出口 maze[m-2, p-2]
			}
			printmaze();
			printmazetext(maze);
			for (i = 0; i < m + 2; i++)
				delete mazeX[i];
			delete mazeX;
		}
		else
			MessageBox::Show("Please input odd numbers!", "Invalid input!");//如果輸入偶數，顯示錯誤訊息

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ d;
		int i;
		if (load) {
			String^ S;
			S = richTextBox1->Lines[0];
			int pos = S->IndexOf(" ");
			m = int::Parse(S->Substring(0, pos));
			p = int::Parse(S->Substring(pos + 1, S->Length - pos - 1));
			load = false;
		}
		else {
			m = int::Parse(textBox1->Text);
			p = int::Parse(textBox2->Text);
		}
		ans = new int* [m];
		for (i = 0; i < m; i++) {
			ans[i] = new int[p];
		}
		for (i = 0; i < m; i++) {
			for (int j = 0; j < p; j++) {
				ans[i][j] = maze[i][j];
			}
		}
		int len = MouseInMaze(m, p);//存下正確路徑
		for (i = 1; i < len; i++) {
			d = Convert::ToString(stack[i].dir);
			richTextBox1->Text += "(" + stack[i].x + "," + stack[i].y + "," + d + ")->";
			ans[stack[i].x][stack[i].y] = 3;
		}
		richTextBox1->Text += "(" + stack[i].x + "," + stack[i].y + "," + 1 + ")->";
		ans[stack[i].x][stack[i].y] = 3;
		richTextBox1->Text += "(" + (m - 2) + "," + (p - 1) + ")\n";
		ans[m - 2][p - 1] = 3;
		ans[1][0] = 3;
		//輸出正確走法
		printmazetext(ans);//輸出正確路徑(以3表示)
		printcorrectmaze(ans);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ctrl_x = 1;
		ctrl_y = 0;
		MessageBox::Show("Click the Game dataGridView to start the game.", "Get Ready!");
		MessageBox::Show("use WASD to play","Intruction");
		game = true;
		update();

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ S;
		int  pos, i, j;
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			S = folderBrowserDialog1->SelectedPath + "/newmaze.txt";
			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(S);
			FILE* fp;
			fp = fopen(str2, "w");
			fprintf(fp, "%d %d\n", m, p);
			for (i = 0; i < m; i++) {
				for (j = 0; j < p; j++)
					fprintf(fp, "%d ", maze[i][j]);
				fprintf(fp, "\n");
			}
			fclose(fp);
		}
	}
	private: System::Void dataGridView3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (game) {
			if (e->KeyChar == 'a' && maze[ctrl_x][ctrl_y - 1] == 0)
				ctrl_y -= 1;
			if (e->KeyChar == 'd' && maze[ctrl_x][ctrl_y + 1] == 0)
				ctrl_y += 1;
			if (e->KeyChar == 'w' && maze[ctrl_x - 1][ctrl_y] == 0)
				ctrl_x -= 1;
			if (e->KeyChar == 's' && maze[ctrl_x + 1][ctrl_y] == 0)
				ctrl_x += 1;
			//四個方向移動
			update();
			if (ctrl_x == m - 2 && ctrl_y == p - 1) {
				MessageBox::Show("You find the exit!", "Congratulations!");
				dataGridView3->Rows[ctrl_x]->Cells[ctrl_y]->Value = "";
				game = false;
			}//走到終點，跳出訊息並關閉遊戲
		}
	}
	};
}