#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
  dateString = "null";
  month = "null";
  day = "null";
  year = "null";
}

void Date::init(std::string dateString){	
  std::stringstream ss;

  getline(ss, dateMonth, "/");
  getline(ss, dateDay, "/");
  getline(ss, dateYear, "/");

  ss.clear();
  ss.str("");

  ss << dateDay << " " << dateMonth << " " << dateYear;
  ss >> day >> month >> year;
} // end of init

void Date::printDate(){
  std::string monthNames[] ={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Oct", "Nov", "Dec"}; // TEMP. FILL OUT LATER.
  std::cout << monthNames[month] << " " << day << ", " << year << std::endl; 
} // end of printDate
