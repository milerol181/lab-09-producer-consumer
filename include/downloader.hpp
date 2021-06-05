//Copyright [2021] <Copyright Owner>

#ifndef INCLUDE_DOWNLOADER_HPP_
#define INCLUDE_DOWNLOADER_HPP_
#include <openssl/ssl.h>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/asio/ssl/context.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/ssl/ssl_stream.hpp>
#include <boost/beast/version.hpp>
#include <iostream>
#include <atomic>

#include "safe_queue.hpp"
#include "parser.hpp"
#include "url.hpp"
#include "page.hpp"

class downloader {
 public:
  downloader() = delete;
  static void download_page();
  static void parse_uri(page &cur_page, url &cur_url);
  static safe_queue<url> links; //очередь для скачивания
  static std::atomic_int current_works;

 private:
  static void download_https_page(page &cur_page);
  static void download_http_page(page &cur_page);
};

#endif  // INCLUDE_DOWNLOADER_HPP_
