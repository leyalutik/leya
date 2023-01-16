#include "time.h"


CurrentDate::CurrentDate()
{
const std::chrono::time_point now{std::chrono::system_clock::now()};
const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
CurrentDate::current_year = static_cast<int>(ymd.year());
CurrentDate::current_month = static_cast<unsigned>(ymd.month());
CurrentDate::current_day = static_cast<unsigned>(ymd.day());
CurrentDate::current_date = std::to_string(CurrentDate::current_year) + "." 
		+ std::to_string(CurrentDate::current_month) + "."
		+ std::to_string(CurrentDate::current_day); 
}

bool CurrentDate::is_equel(const std::string& line) // Если в строчке сможем найти current_date return true;
{
	return(line.find(CurrentDate::current_date) == std::string::npos ? false : true);

}
std::string CurrentDate::get_date()
{
	return CurrentDate::current_date;
}
