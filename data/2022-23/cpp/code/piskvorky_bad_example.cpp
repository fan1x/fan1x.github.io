!!! C++ example

// Piškvorky.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include<string>
#include<vector>



class Piskvorky
{
	using matrix = std::vector<std::vector<int>>;
private:
	std::string player1_;
	std::string player2_;

	bool winner = false;

	int size_;
	int emptySpaces;
	matrix matrix_;

	void Print() const
	{
		for (size_t i = 0; i < matrix_.size(); i++)
		{
			for (size_t k = 0; k < 3; k++)
			{

				for (size_t j = 0; j < matrix_.size(); j++)
				{
					if (k == 0)
					{
						if (j == 0) std::cout << "    ";
						if (j < matrix_.size() - 1) std::cout << "     |";
						else std::cout << "     ";
					}
					if (k == 1)
					{
						if (j == 0)
						{
							if (i < 10) std::cout << i << "   ";
							if (i >= 10) std::cout << i << "  ";
						}
						if (j < matrix_.size() - 1)
						{
							switch (matrix_[i][j])
							{
							case 0:
								std::cout << "  " << " " << "  |";
								break;
							case 1:
								std::cout << "  " << "o" << "  |";
								break;
							case 2:
								std::cout << "  " << "x" << "  |";
								break;
							default:
								std::cout << "Chyba";
								return;
							}
						}
						else
						{
							switch (matrix_[i][j])
							{
							case 0:
								std::cout << "  " << " " << "  ";
								break;
							case 1:
								std::cout << "  " << "o" << "  ";
								break;
							case 2:
								std::cout << "  " << "x" << "  ";
								break;
							default:
								std::cout << "Chyba";
								return;
							}
						}


					}
					if (k == 2)
					{
						if (j == 0) std::cout << "    ";
						if (i != matrix_.size() - 1)
						{
							if (j < matrix_.size() - 1) std::cout << "_____|";
							else std::cout << "_____";
						}
						else
						{
							if (j < matrix_.size() - 1) std::cout << "     |";
							else std::cout << "     ";
						}

					}

				}
				std::cout << std::endl;
			}

		}
		std::cout << std::endl;
		std::cout << "   ";
		for (size_t i = 0; i < matrix_.size(); i++)
		{
			for (size_t k = 0; k < 5; k++)
			{
				if (k == 2 && i < 10) std::cout << " " << i;
				else if (k == 2 && i >= 10) std::cout << i;
				else std::cout << " ";
			}
		}
		std::cout << std::endl;
		std::cout << "________________________________________________________________________________________________________________________" << std::endl;
		std::cout << std::endl;

	}
	bool EmptySpaces() const
	{
		if (emptySpaces > 0) return true;
		return false;
	}
	void Move(const bool whoMove)
	{
		int row = -1, column = -1;

		while(row < 0 || row > size_ - 1)
		{
			std::cout << "Row number: ";
			std::cin >> row;
			if (row < 0 || row > size_ - 1) std::cout << "invalid row number" << std::endl;
		}
		while (column < 0 || column > size_ - 1)
		{
			std::cout << "Column number: ";
			std::cin >> column;
			if (column < 0 || column > size_ - 1) std::cout << "invalid column number" << std::endl;
		}

		if(matrix_[row][column] == 0)
		{
			switch(whoMove)
			{
			case true:
				matrix_[row][column] = 1;
				break;
			case false:
				matrix_[row][column] = 2;
				break;
			}
			emptySpaces--;
			Print();
		}
		else
		{
			std::cout << "This position is already occupied... try different position" << std::endl;
			Move(whoMove);
		}
	}
	void CheckWinner()
	{
		//Kontrola řádků
		for(size_t i = 0; i < size_; i++)
			for(size_t j = 0; j < size_ - 4; j++)
			{
				if((matrix_[i][j] != 0) && ((matrix_[i][j] == matrix_[i][j + 1]) && (matrix_[i][j] == matrix_[i][j + 2])&& (matrix_[i][j] == matrix_[i][j + 3])&& (matrix_[i][j] == matrix_[i][j + 4])))
				{
					winner = true;
					if (matrix_[i][j] == 1) std::cout << player1_ << " is a WINNER!!";
					else std::cout << player2_ << " is a WINNER!!";
					return;
				}
			}

		//Kontrola sloupců
		for (size_t i = 0; i < size_ - 4; i++)
			for (size_t j = 0; j < size_; j++)
			{
				if ((matrix_[i][j] != 0) && ((matrix_[i][j] == matrix_[i + 1][j]) && (matrix_[i][j] == matrix_[i + 2][j]) && (matrix_[i][j] == matrix_[i + 3][j]) && (matrix_[i][j] == matrix_[i + 4][j])))
				{
					winner = true;
					if (matrix_[i][j] == 1) std::cout << player1_ << " is a WINNER!!";
					else std::cout << player2_ << " is a WINNER!!";
					return;
				}
			}

		//Kontrola hl.diagonál
		for (size_t i = 0; i < size_ - 4; i++)
			for (size_t j = 0; j < size_; j++)
			{
				if ((matrix_[i][j] != 0) && ((matrix_[i][j] == matrix_[i + 1][j + 1]) && (matrix_[i][j] == matrix_[i + 2][j + 2]) && (matrix_[i][j] == matrix_[i + 3][j + 3]) && (matrix_[i][j] == matrix_[i + 4][j + 4])))
				{
					winner = true;
					if (matrix_[i][j] == 1) std::cout << player1_ << " is a WINNER!!";
					else std::cout << player2_ << " is a WINNER!!";
					return;
				}
			}

		//Kontrola v. diagonál
		for (size_t i = size_ - 1; i >=4; i--)
			for (size_t j = 0; j < size_; j++)
			{
				if ((matrix_[i][j] != 0) && ((matrix_[i][j] == matrix_[i - 1][j + 1]) && (matrix_[i][j] == matrix_[i - 2][j + 2]) && (matrix_[i][j] == matrix_[i - 3][j + 3]) && (matrix_[i][j] == matrix_[i - 4][j + 4])))
				{
					winner = true;
					if (matrix_[i][j] == 1) std::cout << player1_ << " is a WINNER!!";
					else std::cout << player2_ << " is a WINNER!!";
					return;
				}
			}

		//Konteola volných míst
		if(!EmptySpaces())
		{
			winner = true;
			std::cout << "Tie" << std::endl;
		}

	}
	void Start()
	{
		bool whoMove = true;
		while(!winner)
		{
			if (whoMove) std::cout << player1_ << " s turn" << std::endl;
			else std::cout << player2_ << " s turn" << std::endl;
			Move(whoMove);
			whoMove = !whoMove;
			CheckWinner();
		}
	}
public:
	Piskvorky(const std::string &player1, const std::string &player2, int size)
	{
		size_ = size;
		player1_ = player1;
		player2_ = player2;
		matrix_.resize(size, std::vector<int>(size));
		emptySpaces = size * size;
		Print();
		Start();
	}
	
};

int main()
{
	std::string player1, player2;
	std::cout << "Player 1: ";
	std::cin >> player1;
	std::cout << "Player 2: ";
	std::cin >> player2;
	int size = 0;
	while(size < 5 || size > 35)
	{
		std::cout << "Size (5 - 35):";
		std::cin >> size;
		if (size < 5 || size > 35) std::cout << "Invalid size" << std::endl;
	}
	
	Piskvorky piskvorky(player1, player2, size);

}
