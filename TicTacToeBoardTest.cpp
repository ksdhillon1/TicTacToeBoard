/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){}
		virtual ~TicTacToeBoardTest(){}
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(TicTacToeBoardTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, invalid_test)
{
   TicTacToeBoard test;
   Piece test1;

   test1 = test.toggleTurn();

    ASSERT_EQ(test1, O);
}

TEST(TicTacToeBoardTest, test2)
{
   TicTacToeBoard test;
   Piece test1;

   test1 = test.toggleTurn();
   test1 = test.toggleTurn();
    ASSERT_EQ(test1, X);
}

TEST(TicTacToeBoardTest, init_test)
{
   TicTacToeBoard test;
   Piece test1;
    ASSERT_EQ(test1, Blank);
}
