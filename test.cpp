#include "gtest/gtest.h"

std::string number_to_foreign_language(int N);

TEST(NumberToForeignLanguageTest, HandlesZero) {
    EXPECT_EQ(number_to_foreign_language(0), "sıfır");
}

TEST(NumberToForeignLanguageTest, HandlesSingleDigits) {
    EXPECT_EQ(number_to_foreign_language(1), "bir");
    EXPECT_EQ(number_to_foreign_language(5), "beş");
    EXPECT_EQ(number_to_foreign_language(9), "dokuz");
}

TEST(NumberToForeignLanguageTest, HandlesTens) {
    EXPECT_EQ(number_to_foreign_language(10), "on");
    EXPECT_EQ(number_to_foreign_language(20), "yirmi");
    EXPECT_EQ(number_to_foreign_language(90), "doksan");
}

TEST(NumberToForeignLanguageTest, HandlesTwoDigitNumbers) {
    EXPECT_EQ(number_to_foreign_language(21), "yirmi bir");
    EXPECT_EQ(number_to_foreign_language(34), "otuz dört");
    EXPECT_EQ(number_to_foreign_language(99), "doksan dokuz");
}

TEST(NumberToForeignLanguageTest, HandlesOutOfRange) {
    EXPECT_EQ(number_to_foreign_language(100), "Случай вне диапазона");
    EXPECT_EQ(number_to_foreign_language(101), "Случай вне диапазона");
}

TEST(NumberToForeignLanguageTest, HandlesNonStandardCases) {
    EXPECT_EQ(number_to_foreign_language(11), "on bir");
    EXPECT_EQ(number_to_foreign_language(45), "kırk beş");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}