#pragma once
#include "header.h"
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;


//void read_from_file(char **names,int words_number,char filename[])
TEST(test_of_word_gen, testingapp)
{
    int words_number = 10;
    char filename[14] = "MyFile.txt";
    char **namelist = gen_2d_array(words_number);
    read_from_file(namelist, words_number, filename);
    EXPECT_EQ(namelist,{"Sam", "Tom", "Peter", "John", "Mike", "Lam"});
    //ASSERT_THAT(0, Eq(0));
    for (int i = 0; i < words_number; i++)
    {
        delete [] namelist[i];
    }
    delete [] namelist;
}
