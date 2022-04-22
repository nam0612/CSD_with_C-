#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std::chrono_literals;


void RefreshForecast(std::map<std::string, int> forecastMap) {
	while (true)
	{
		for (auto& item : forecastMap)
		{
			item.second++;
			std::cout << item.first << " - " << item.second << std::endl;
		}
		std::this_thread::sleep_for(2000ms);
	}
	

}

int main() {

	std::map<std::string, int> forecastMap = {
		{"Ha Noi", 10},
		{"Hai Phong", 7},
		{"Sai Gon", 12}
	};

	std::thread bgworker(RefreshForecast, forecastMap);

	system("pause>nul");
}