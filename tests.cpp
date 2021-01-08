#include <iostream>
#include "gtest/gtest.h"
#include "Function.h"

using namespace std;

TEST(out, output) {
   const char* str = "Анастасия";

    testing::internal::CaptureStdout();
    trans(str, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Anastasiya");

    const char* str_1 = "Я сделала это";

    testing::internal::CaptureStdout();
    trans(str_1, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Ya sdelala eto");

    const char* str_2 = "Съешь этих мягких французских булок и выпей чаю";

    testing::internal::CaptureStdout();
    trans(str_2, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "S'eshi etih myagkih francyzskih bylok i vyipei chau");

    const char* str_3 = "Ёж Иван ест йогурт под ёлкой";

    testing::internal::CaptureStdout();
    trans(str_3, ang, rus);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Iog Ivan est iogyrt pod iolkoi");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}