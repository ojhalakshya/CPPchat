/**
 * @file : utils.hpp
 * @author : Kartik Dutt
 *
 * Utility functions for working of server-client model.
 */
#include <ctime>
#include <bits/stdc++.h>

#ifndef UTIL_HPP
#define UTILS_HPP

/**
 * Function that returns current time stamp as string.
 *
 * @returns string determining time.
 */
std::string GetTimestamp()
{
  // Get current time.
  time_t curTime = time(0);
  struct tm* now = localtime(&curTime);

  // Create a string string for printing.
  std::stringstream timeStringStream;
  timeStringStream << '[' << (now->tm_year + 1900) << '-' << std::setfill('0')
     << std::setw(2) << (now->tm_mon + 1) << '-' << std::setfill('0')
     << std::setw(2) << now->tm_mday << ' ' << std::setfill('0')
     << std::setw(2) << now->tm_hour << ":" << std::setfill('0')
     << std::setw(2) << now->tm_min << ":" << std::setfill('0')
     << std::setw(2) << now->tm_sec << "] ";

  return timeStringStream.str();
}

#endif