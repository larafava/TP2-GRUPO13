#pragma once
#include <string>
 
using namespace std;

enum class eDestinos {
	BuenosAires,
	Uruguay,
	Miami,
	Canada,
	Londres,
	Espana,
	Italia,
	Francia,
	Rusia,
	Chile
};
string destinostring(eDestinos destinos);