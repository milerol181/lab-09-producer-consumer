//
// Created by milerol181 on 6/05/21.
//

#ifndef INCLUDE_PAGE_HPP_
#define INCLUDE_PAGE_HPP_
#include <iostream>
#include <string>

struct page {
  std::string page;
  std::string protocol;
  std::string host;
  std::string target;
  size_t depth;
};

#endif  // INCLUDE_PAGE_HPP_
