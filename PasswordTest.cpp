/**
 * Unit Tests for Password class
 **/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
protected:
        PasswordTest() {}                  // constructor runs before each test
        virtual ~PasswordTest() {} // destructor cleans up after tests
        virtual void SetUp() {}    // sets up before each test (after constructor)
        virtual void TearDown() {} // clean up after each test, (before destructor)
};

TEST(PasswordTest, smoke_test)
{
        ASSERT_TRUE(1 == 1);
}
TEST(PasswordTest, single_letter_password)
{
        Password my_password;
        int actual = my_password.count_leading_characters("Z");
        ASSERT_EQ(1, actual);
}

TEST(PasswordTest, letters_repeated_at_end)
{
        Password pass;
        ASSERT_EQ(1, pass.count_leading_characters("Zoo"));
}

TEST(PasswordTest, letters_repeated_at_beginning)
{
        Password pass;
        ASSERT_EQ(3, pass.count_leading_characters("AAApassword"));
}

TEST(PasswordTest, no_letters_repeated)
{
        Password pass;
        ASSERT_EQ(1, pass.count_leading_characters("a"));
}

TEST(PasswordTest, empty_password)
{
        Password pass;
        ASSERT_EQ(1, pass.count_leading_characters(""));
}
