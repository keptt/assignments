#include "resh_calc.h"

bool first_check(const int &n, const int &m, const int &k, const int &r, const int &c1, const int &c2)
{
    if (n < 1 ||
            m > pow(10,9))
    {
        return 0;
    }
    else if (k < 0 ||
             k > 1000)
    {
        return 0;
    }
    else if (1 > r ||
             n < r)
    {
        return 0;
    }
    else if ( 1 > c1 ||
              c2 > m)

    {
        return 0;
    }

    return 1;
}


bool create_interval(const int &c1, const int &c2, const int &r, std::set<int> *s, std::map<int, std::pair<int, int>> *map)
{

    for (int i = c1; i <= c2; i++)
    {
        s->insert(i);
    }
    auto it = map->find(r);
    if(it == map->end())//далее проверка на накладывание маршрутов
    {
        map->emplace(r, std::pair<int, int>(c1, c2));
    }
    else
    {
        for (int i = (map->at(r)).first; i <= (map->at(r)).second; i++)
        {
            if (i == c1 || i == c2)
            {
                std::cout << "Routes intersect\nError\nRecheck your input data\n";
                return 0;
            }
        }
    }
    return 1;

}

int calculate_result (int n, int m, unsigned int s_size)
{
    int total = n * m;
    int result = total - static_cast<int>(s_size);
    return result;
}
