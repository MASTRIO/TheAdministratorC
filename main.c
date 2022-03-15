#include <stdio.h>;
#include <windows.h>;

char version[] = "0.1.0";

int main() {
	printf("Initialising program...\nready\n");
	printf("----------------------------------------------------\n\n\tTheAdministrator C v%s\n\n----------------------------------------------------", version);
	int answer = MessageBox(0, L"Would you like to disable ABTutor?", L"TheAdministrator C", MB_YESNO);

	printf("\nOption %i selected", answer);
	if (answer == 6) {
		disableABTutor();
	}
	else {
		printf("\nExiting program...\nready");
	}

	return 0;
}