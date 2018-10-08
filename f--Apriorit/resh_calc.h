#include <gtest/gtest.h>
#ifndef RESH_CALC_H
#define RESH_CALC_H

bool create_interval(const int &c1, const int &c2, const int &r, std::set<int> *s, std::map<int, std::pair<int, int>> *map);
bool first_check(const int &n, const int &m, const int &k, const int &r, const int &c1, const int &c2);
int calculate_result (int n, int m, unsigned int s_size);

#endif // RESH_CALC_H
