#include "Enum.h"
#include <string>

using namespace std;

string destinostring(eDestinos destinos) {
	switch (destinos) {
	case eDestinos::BuenosAires:
		return "Buenos Aires";
		break;
	case eDestinos::Uruguay:
		return "Uruguay";
		break;
	case eDestinos::Miami:
		return "Miami";
		break;
	case eDestinos::Canada:
		return "Canada";
		break;
	case eDestinos::Londres:
		return "Londres";
		break;
	case eDestinos::Espana:
		return "Espana";
		break;
	case eDestinos::Italia:
		return "Italia";
		break;
	case eDestinos::Francia:
		return "Francia";
		break;
	case eDestinos::Rusia:
		return "Rusia";
		break;
	case eDestinos::Chile:
		return "Chile";
		break;
	}
}