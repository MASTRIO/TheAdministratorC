#include <iostream>
#include <windows.h>

extern "C" void disableABTutor() {
	std::cout << "\nStarting ABTutor disable...";

	for (int i = 0; i <= 20; i++) {
		std::cout << "\nLoading " << i * 5 << "%";
	}

	MessageBox(0, L"ABTutor is now being disabled", L"TheAdministrator C", 0);
	MessageBox(0, L"To renable ABTutor just close the window", L"TheAdministrator C", 0);

	while (true) {
		std::system("TSKILL Agent");
		std::system("TSKILL Daemon");
		std::system("TSKILL Maintainer");
	}
}