#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct Player {
	char* name;
	int rolls[12];
	int roads;
	int settlements;
	int cities;
	int developmentCards;
	int victoryPoints;
};

void setup(int* numPlayers, struct Player** profiles) {
	// Query user for number of players
	while (*numPlayers < 1 || *numPlayers > 6) {
		printf("\nEnter number of players (i.e. 1-6): ");
		scanf("%d", numPlayers);
		while (getchar() != '\n');
		if (*numPlayers < 1 || *numPlayers > 6) {
			printf("Invalid input.\n");
		}
	}

	// Allocate space for player profiles
	*profiles = malloc(*numPlayers*sizeof(struct Player));
	memset(*profiles, 0, *numPlayers*sizeof(struct Player));

	// Query user for name of each player
	for (int i = 0; i < *numPlayers; i++) {
		char name[20] = "";
		printf("\nEnter name of Player %d (e.g. Raj): ", i + 1);
		int eof = 0;
		while (eof == 0) {
			eof = scanf("%19[^\n]", name);
			int i = 0;
			while (getchar() != '\n') {
				i = i + 1;
			}
			if (i > 0) {
				printf("Name is longer than 20 characters. Truncated to %s.\n", name);
			}
		}
		(*profiles)[i].name = malloc(strlen(name));
		strcpy((*profiles)[i].name, name);
		printf("Welcome %s!\n", (*profiles)[i].name);
	}
}

void record(int numPlayers, struct Player* profiles, char* command) {
	// Parse name from input
	char* name = strtok(command, "-");
	int i = 0;
	if (name != NULL) {
		name[name[strlen(name) - 1] == ' ' ? strlen(name) - 1 : strlen(name)] = '\0';
		while (i < numPlayers && strcmp(profiles[i].name, name) != 0) {
			i = i + 1;
		}
		if (i >= numPlayers) {
			printf("There is no player named %s.\n", name);
		}
	} else {
		printf("Invalid command.\n");
	}

	// Parse first argument from input
	char* arg = strtok(NULL, " ");
	char* num = strtok(NULL, " ");
	if (name != NULL && i < numPlayers && (arg == NULL || num == NULL)) {
		printf("Missing input.\n");
	}

	while (arg != NULL && num != NULL && i < numPlayers) {
		// Convert ASCII to integer
		int num_i = atoi(num);

		// Record progress in profile
		if (strcmp(arg, "roll") == 0) {
			if (num_i >= 1 && num_i <= 12) {
				profiles[i].rolls[num_i - 1] = profiles[i].rolls[num_i - 1] + 1;
			} else {
				printf("%s is not a valid roll.\n", num);
			}
		} else if (strcmp(arg, "road") == 0) {
			if (profiles[i].roads + num_i < 15) {
				profiles[i].roads = profiles[i].roads + num_i;
			} else if (profiles[i].roads + num_i == 15) {
				profiles[i].roads = profiles[i].roads + num_i;
				printf("%s has reached the maximum number of roads.\n", profiles[i].name);
			} else {
				printf("Invalid input. An additional %s roads would put %s over the maximum possible roads.\n", num, \
					profiles[i].name);
			}
		} else if (strcmp(arg, "settle") == 0) {
			if (profiles[i].settlements + num_i < 5) {
				profiles[i].settlements = profiles[i].settlements + num_i;
			} else if (profiles[i].settlements + num_i == 5) {
				profiles[i].settlements = profiles[i].settlements + num_i;
				printf("%s has reached the maximum number of settlements.\n", profiles[i].name);
			} else {
				printf("Invalid input. An additional %s settlements would put %s over the maximum possible settlements."
					"\n", num, profiles[i].name);
			}
		} else if (strcmp(arg, "city") == 0) {
			if (profiles[i].cities + num_i < 4) {
				profiles[i].cities = profiles[i].cities + num_i;
			} else if (profiles[i].cities + num_i == 4) {
				profiles[i].cities = profiles[i].cities + num_i;
				printf("%s has reached the maximum number of cities.\n", profiles[i].name);
			} else {
				printf("Invalid input. An additional %s cities would put %s over the maximum possible cities.\n", num, \
					profiles[i].name);
			}
		} else if (strcmp(arg, "devCard") == 0) {
			profiles[i].developmentCards = profiles[i].developmentCards + num_i;
		} else if (strcmp(arg, "vp") == 0) {
			if (profiles[i].victoryPoints + num_i < 10) {
				profiles[i].victoryPoints = profiles[i].victoryPoints + num_i;
			} else if (profiles[i].victoryPoints + num_i >= 10 && profiles[i].victoryPoints + num_i <= 22) {
				profiles[i].victoryPoints = profiles[i].victoryPoints + num_i;
				printf("%s has won this game of Catan.\n", profiles[i].name);
			} else {
				printf("Invalid input. An additional %s VPs would put %s over the maximum possible VPs.\n", num, \
					profiles[i].name);
			}
		} else {
			printf("\"%s\" is an invalid argument.\n", arg);
		}

		// Parse next argument from input
		arg = strtok(NULL, "- ");
		num = strtok(NULL, " ");
		if (arg != NULL && num == NULL) {
			printf("Missing input.\n");
		}
	}
}

void display(int numPlayers, struct Player* profiles) {
	bool exit = false;
	while (!exit) {
		printf("\nDisplay Options:\n"
			"1. Enter \"list\" or \"l\" to list names of all players.\n"
			"2. Enter \"show\" followed by name of player to display their data.\n"
			"	e.g. show Raj\n"
			"3. Enter \"rolls\" or \"r\" to graph all recorded rolls.\n"
			"4. Enter \"exit\" or \"e\" to return to the previous menu.\n\n");

		// Listen for user command
		char command[30] = "";
		scanf("%29[^\n]", command);
		while (getchar() != '\n');

		// Execute command
		if (strcmp(command, "list") == 0 || strcmp(command, "l") == 0) {
			printf("Here are the players: ");
			int i;
			for (i = 0; i < numPlayers - 1; i++) {
				printf("%s, ", profiles[i].name);
			}
			printf("%s\n", profiles[i].name);
		} else if (strstr(command, "show") != NULL) {
			strtok(command, " ");
			char* name = strtok(NULL, " ");
			int i = 0;
			while (name != NULL && i < numPlayers && strcmp(profiles[i].name, name) != 0) {
				i = i + 1;
			}
			if (name != NULL && i < numPlayers) {
				printf("%s has %d roads, %d settlements, %d cities, %d development cards, and %d victory points.\n", \
					profiles[i].name, profiles[i].roads, profiles[i].settlements, profiles[i].cities, \
					profiles[i].developmentCards, profiles[i].victoryPoints);
			} else {
				printf("There is no player named %s.\n", name);
			}
		} else if (strcmp(command, "rolls") == 0 || strcmp(command, "r") == 0) {
			char graph[1000] = "";
			for (int i = 0; i < 12; i++) {
				if (i < 9) {
					snprintf(graph + strlen(graph), 1000 - strlen(graph), " ");
				}
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "%d | ", i + 1);
				for (int j = 0; j < numPlayers; j++) {
					for (int k = 0; k < profiles[j].rolls[i]; k++) {
						snprintf(graph + strlen(graph), 1000 - strlen(graph), "X ");
					}
				}
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\n");
			}
			puts(graph);
		} else if (strcmp(command, "exit") == 0 || strcmp(command, "e") == 0) {
			exit = true;
		} else {
			printf("Invalid command.\n");
		}
	}
}

void save(int numPlayers, struct Player* profiles) {
	printf("\nSave complete.\n");

	// Unallocate space used by player profiles
	for (int i = 0; i < numPlayers; i++) {
		free(profiles[i].name);
	}
	free(profiles);
}

void menu(int numPlayers, struct Player* profiles, bool* quit) {
	printf("\nMenu:\n"
		"1. Enter name of player followed by applicable arguments to record "
			"data.\n"
		"	Argument List:\n"
		"		-roll integer\n"
		"		-road integer\n"
		"		-settle integer\n"
		"		-city integer\n"
		"		-devCard integer\n"
		"		-vp integer\n"
		"	e.g. Raj rolled 11 this turn, built 1 road for total of 5 roads, "
				 "and got Longest Road for total of 7 VPs\n"
		"		 Raj -roll 11 -road 1 -vp 2\n"
		"2. Enter \"display\" or \"d\" to display recorded data.\n"
		"3. Enter \"quit\" or \"q\" to save data and end program.\n\n");

	// Listen for user command
	char command[40] = "";
	scanf("%39[^\n]", command);
	while (getchar() != '\n');

	// Execute command
	if (strcmp(command, "display") == 0 || strcmp(command, "d") == 0) {
		display(numPlayers, profiles);
	} else if (strcmp(command, "quit") == 0 || strcmp(command, "q") == 0) {
		*quit = true;
		save(numPlayers, profiles);
	} else {
		record(numPlayers, profiles, command);
	}
}

int main() {
	printf("\nWelcome to the Catan Tracker!\n");

	// Setup player profiles
	int numPlayers = 0;
	struct Player* profiles = NULL;
	setup(&numPlayers, &profiles);

	// Run menu
	bool quit = false;
	while (!quit) {
		menu(numPlayers, profiles, &quit);
	}

	printf("\nQuitting Catan Tracker.\n\n");

	return 0;
}