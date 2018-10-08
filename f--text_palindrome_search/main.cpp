#include "tst_test_funct.h"

#include <gtest/gtest.h>
////bool is_palindrome(std::string &str);

int main(int argc, char *argv[])
{

    std::string str;
    //std::string newstr;
    std::cout << "INput string: ";
    getline(std::cin, str);

    Is_Palindrome obj;
    std::cout << obj (str) << " ";

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


//void Is_Palindrome::split_n_check(std::string &str, std::vector<int> &vec)
//{
//    std::string one_word;
//    for (unsigned i = 0; i <= str.length();) //i++)
//    {
//        if (str[i] != ' ' && str[i] != '\0')
//        {
//            one_word += str[i];
//            i++;
//        }
//        else
//        {
//            std::cout << is_palindrome(one_word);
//            vec.push_back(is_palindrome(one_word));//!!!
//            //std::cout << one_word << " ";
//            one_word.clear();
//            i++;
//            while (str[i] == ' ')
//            {
//                i++;
//            }
//        }
//    }
//    ///////////
//}

// bool is_in(const std::vector<unsigned int> &vec, unsigned int element)
// {
// 	for (unsigned int i = 0; i < vec.size(); i++)
// 	{
// 		if (vec[i] == element)
// 		{
// 			return 1;
// 		}
// 	}
// 	return 0;
// }

////////////мрак...///////////////////
//int i = 0;//отвечает за начало среза для параметров функции
//int start = 0;//начало среза
//int end = 0;//конец среза
//int count = 1;
//while (str.find_first_of(' ', i) != -1)
//{
//	if (count == 1)
//	{
//		start = i;
//		end = str.find_first_of(' ', i);
//	}
//	else
//	{
//		start = str.find_first_of(' ', i);
//		end = str.find_first_of(' ', start + 1);
//	}
//	count++;
//
//	if (i + end + 1 < str.length())
//		i = i + end + 1;
//	else
//		i = i + end;
//	std::cout << str.substr(start + 1, end - start - 1);
//
//}
//if (s.length() - end > 0)
//std::cout << str.substr(end + 1, s.length() - end);
/////////////

