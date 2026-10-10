#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
  dateString = "null";
  int month;
  int day;
  int year;
}

void Date::init(std::string dateString){	
  std::stringstream ss;
  std::string dateMonth;
  std::string dateDay;
  std::string dateYear;

  getline(ss, dateMonth, '/');
  getline(ss, dateDay, '/');
  getline(ss, dateYear, '/');

  ss.clear();
  ss.str("");

  ss << dateDay << " " << dateMonth << " " << dateYear;
  ss >> day >> month >> year;
} // end of init

void Date::printDate(){
  std::string monthNames[] ={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; // TEMP. FILL OUT LATER.
  std::cout << monthNames[month] << " " << day << ", " << year << std::endl; 
} // end of printDate
