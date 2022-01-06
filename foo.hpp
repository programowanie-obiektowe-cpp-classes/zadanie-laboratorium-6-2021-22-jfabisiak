#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::for_each(people.begin(), people.end(), [&](Human& people){people.birthday();});
   std::for_each(people.begin(), people.end(), [&](Human& people){
        if(people.isMonster()) 
        ret_v.push_back('n');
        else
        ret_v.push_back('y');
        });


    return ret_v;
}
