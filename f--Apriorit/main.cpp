#include "tst_testreshetkovo.h"
#include <gtest/gtest.h>//why?
#include "resh_calc.h"

int main(int argc, char *argv[])
{
    std::set<int> interval;
    std::map <int, std::pair<int, int>> map;

    int n(0), m(0), k(0);
    int r(1), c1(1), c2(1);

    std::cout << "input n, m, k and then k routes:\n";
    std::cin >> n >> m >> k;

    while (!first_check(n, m, k, r, c1, c2))
    {
        std::cout << "Bad input\nPlease, input again:\n";
        std::cin >> n >> m >> k;
    }

    for (int i = 0; i < k; i++)
    {
        std::cin >> r >> c1 >> c2;
        while (!first_check(n, m, k, r, c1, c2))
        {
            std::cout << "Bad input\nPlease, input again:\n";
            std::cin >> r >> c1 >> c2;
        }
        if (create_interval(c1, c2, r, &interval, &map) == 0)
        {
            return 0;
        }
        //create_interval(c1, c2, r, &interval, &map);
    }

    std::cout << "Result: " << calculate_result(n, m, interval.size());

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

