#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 3 then it will have characters a to c.
///     If the vector is size 5 then it will have characters a to e.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) {

    // TODO: implement function
    char character = 'a';

    
        for(int i = 0; i < v.size(); ++i)
        {
            v.at(i) = character;
            character += 1;
        }
    
    
    
    return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {

    // TODO: implement function
     
    cout << "Please choose a position: ";
    cin >> boardPosition;
    cout << endl;
    if(boardPosition == 'a')
    {
        return 0;
    }
    
    else if(boardPosition == 'b')
    {
        return 1;
    }
    
    else if(boardPosition == 'c')
    {
        return 2;
    }
    
    else if(boardPosition == 'd')
    {
        return 3;
    }
    
    else if(boardPosition == 'e')
    {
        return 4;
    }
    
    else if(boardPosition == 'f')
    {
        return 5;
    }
    
    else if(boardPosition == 'g')
    {
        return 6;
    }
    
    else if(boardPosition == 'h')
    {
        return 7;
    }
    
    else if(boardPosition == 'i')
    {
        return 8;
    }
    
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {

    // TODO: implement function
    if(gameBoard.at(positionIndex) != 'X' && gameBoard.at(positionIndex) != 'O' && (positionIndex >= 0 && positionIndex < gameBoard.size()))
    {
        return true;
    }
    else{
    return false;
    }
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {

    // TODO: implement function
    char boardPosition = ' ';

    cout << "Please choose a position: ";


    return -1;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {

        for(int i = 0 ; i < 1; ++i)    
        if((gameBoard.at(i) == 'X' && gameBoard.at(i+1) == 'X' && gameBoard.at(i+2)== 'X') || (gameBoard.at(i) == 'O' && gameBoard.at(i+1) == 'O' && gameBoard.at(i+2)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i) == 'X' && gameBoard.at(i+3) == 'X' && gameBoard.at(i+6)== 'X') || (gameBoard.at(i) == 'O' && gameBoard.at(i+1) == 'O' && gameBoard.at(i+2)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i+1) == 'X' && gameBoard.at(i+4) == 'X' && gameBoard.at(i+7)== 'X') || (gameBoard.at(i+1) == 'O' && gameBoard.at(i+3) == 'O' && gameBoard.at(i+6)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i+2) == 'X' && gameBoard.at(i+5) == 'X' && gameBoard.at(i+8)== 'X') || (gameBoard.at(i+2) == 'O' && gameBoard.at(i+5) == 'O' && gameBoard.at(i+8)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i+3) == 'X' && gameBoard.at(i+4) == 'X' && gameBoard.at(i+5)== 'X') || (gameBoard.at(i+3) == 'O' && gameBoard.at(i+4) == 'O' && gameBoard.at(i+5)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i+6) == 'X' && gameBoard.at(i+7) == 'X' && gameBoard.at(i+8)== 'X') || (gameBoard.at(i+6) == 'O' && gameBoard.at(i+7) == 'O' && gameBoard.at(i+8)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i) == 'X' && gameBoard.at(i+4) == 'X' && gameBoard.at(i+8)== 'X') || (gameBoard.at(i) == 'O' && gameBoard.at(i+4) == 'O' && gameBoard.at(i+8)== 'O'))
        {
            return true;
        }
        else if((gameBoard.at(i+2) == 'X' && gameBoard.at(i+4) == 'X' && gameBoard.at(i+6)== 'X') || (gameBoard.at(i+2) == 'O' && gameBoard.at(i+4) == 'O' && gameBoard.at(i+6)== 'O'))
        {
            return true;
        }
        else{
            return false;
        }
    }


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {

    // TODO: implement function
    bool isFull ;
    for(int i = 0; i < gameBoard.size(); ++i)
    {
        
        if(gameBoard.at(i) != 'X' || gameBoard.at(i) != 'O')
        {
            isFull = false;
        }
        else
        {
            return true;
        }
        if(isFull == false)
        {
            return isFull;
        }
    }
    
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    // Variables that you may find useful to utilize
    vector<char> gameBoard(9);
    bool full = false;
    bool won = false;
    int turn = 0;
    bool valid = true;
    int curPlay;
    //int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'
    char boardPosition = 'a';
    /// TODO: Initialize board to empty state
   // clearScreen();
    /// TODO: Display empty board
    initVector(gameBoard);
    drawBoard(gameBoard);
    

    /// TODO: Play until game is over
        while(!full && !won)
        {
          
           
           curPlay = convertPosition(boardPosition);
           valid = validPlacement(gameBoard,curPlay);
           if(valid == true)
           {
               if(turn == PLAYER1)
               {
                   gameBoard.at(curPlay) = 'X';
               }
               else if(turn == PLAYER2)
               {
                   gameBoard.at(curPlay) = 'O';
               }
              turn = turn -1;
              if(turn < 0)
              {
                  turn = 1;
              }
              full = boardFull(gameBoard);
              won = gameWon(gameBoard);
              drawBoard(gameBoard);
           }
           
          
           }
           
            if(full == true)
           {
               cout << "No one wins" << endl;
           }
           else if(won == true)
           {
               if(turn == PLAYER1)
               {
                   cout << "PLAYER 2 WINS!" << endl;
               }
               else{
                   cout << "PLAYER 1 WINS!" << endl;
               }
        /// TODO: Get a play

        /// TODO: Set the play on the board

        /// TODO: Switch the turn to the other player

        /// TODO: Output the updated board
        }

    /// TODO: Determine winner and output appropriate message

    return 0;
}