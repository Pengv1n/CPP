//
// Created by Akira Regenia on 10/23/22.
//

#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

template <typename T, typename ret>
void    iter(T *a, int l, ret f(const T&))
{
    for (int i = 0; i < l; i++)
        f(a[i]);
}

#endif //CPP_ITER_HPP
