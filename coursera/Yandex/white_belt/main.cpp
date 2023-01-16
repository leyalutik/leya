#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<exception>
#include <string>
#include <ctime>
using namespace std;


string AskTimeServer() {
	std::time_t t = std::time(0); //get time now
	std::tm* now = std::location(&t);
	
	
	std::cout << t << "\n";
	std::string outcome = std::string(now->tm_year+1900) + "-";
	outcome += std::string(now->tm_month+1) + "-";
	outcome += std::string(now->tm-mday);
	if(outcome > "5")
	{
		throw Unknown_exception("Hello, guys!");
	{
	
   
	/* ƒл€ тестировани€ повставл€йте сюда код, реализующий различное поведение этой функии:
       * нормальный возврат строкового значени€
       * выброс исключени€ system_error
       * выброс другого исключени€ с сообщением.
    */
}

class TimeServer {
public:
    string GetCurrentTime() {
	    std::string outcome;
	    try
	    {
		    outcome = AskTimeServer();
	    }
	    catch(system_error& ex)
	    {
		    std::cout << " system_error : " << ex.error_code() << " " 
			    << ex.message << " " << ex.what() << "\n";
		    return last_fetched_time; 
	    }
	    catch(Unknown_exception& ex)
	    {
		    throw exception("It's not a connection problem");
	    }
	    
	    last_fetched_time = outcome;
       		
	    return outcome; 
    }

private:
    string last_fetched_time = "00:00:00";
};

int main() {
    // ћен€€ реализацию функции AskTimeServer, убедитесь, что это код работает корректно
    TimeServer ts;
    try {
        cout << ts.GetCurrentTime() << endl;
    } catch (exception& e) {
        cout << "Exception got: " << e.what() << endl;
    }
    return 0;
}
