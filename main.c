#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct Player {
	char* name;
	int roads;
	int settlements;
	int cities;
	int developmentCards;
	int knightCards;
};

struct Overall {
	int rolls[11];
	int lastRoll;
	char* lastRollPerson;
	int developmentCards;
	int knightCards;
};

void setup(int* numPlayers, struct Player** profiles) {
	// Query user for number of players
	while (*numPlayers < 2 || *numPlayers > 6) {
		printf("\nEnter number of players (i.e. 2-6): ");
		scanf("%d", numPlayers);
		int i = 0;
		while (getchar() != '\n') {
			i = i + 1;
		}
		if (i > 0) {
			printf("Input has characters. Truncated to %d.\n", *numPlayers);
		}
		if (*numPlayers < 2 || *numPlayers > 6) {
			printf("Invalid input.\n");
		}
	}

	// Allocate space for player profiles
	*profiles = malloc(*numPlayers*sizeof(struct Player));
	memset(*profiles, 0, *numPlayers*sizeof(struct Player));

	// Query user for name of each player
	for (int i = 0; i < *numPlayers; i++) {
		char name[21] = "";
		printf("\nEnter name of Player %d (e.g. Raj): ", i + 1);
		int eof = 0;
		while (eof == 0) {
			eof = scanf("%20[^\n]", name);
			int j = 0;
			while (getchar() != '\n') {
				j = j + 1;
			}
			for (int k = 0; k < i; k++) {
				if (strcmp((*profiles)[k].name, name) == 0) {
					printf("%s is already taken. Enter another name for Player %d (e.g. Raj): \n", name, i + 1);
					eof = 0;
					k = i;
				}
			}
			if (j > 0 && eof != 0) {
				printf("Name is longer than 20 characters. Truncated to %s.\n", name);
			}
		}
		(*profiles)[i].name = malloc(strlen(name));
		strcpy((*profiles)[i].name, name);
		(*profiles)[i].roads = 2;
		(*profiles)[i].settlements = 2;
		printf("Welcome %s!\n", (*profiles)[i].name);
	}
}

void record(int numPlayers, struct Player* profiles, struct Overall* overall, char* command) {
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
		printf("Missing argument/input.\n");
	}

	while (arg != NULL && num != NULL && i < numPlayers) {
		// Convert ASCII to integer
		int num_i = atoi(num);
		char num_a[strlen(num)];
		sprintf(num_a, "%d", num_i);
		if (strlen(num_a) < strlen(num)) {
			printf("For argument %s, input %s has characters. Truncated to %s.\n", arg, num, num_a);
		}

		// Record progress in profile
		if (strcmp(arg, "roll") == 0) {
			if (num_i >= 2 && num_i <= 12) {
				overall->rolls[num_i - 2] = overall->rolls[num_i - 2] + 1;
				overall->lastRoll = num_i;
				overall->lastRollPerson = profiles[i].name;
			} else {
				printf("%d is not a valid roll.\n", num_i);
			}
		} else if (strcmp(arg, "rd") == 0) {
			if (profiles[i].roads + num_i >= 2 && profiles[i].roads + num_i < 15) {
				profiles[i].roads = profiles[i].roads + num_i;
			} else if (profiles[i].roads + num_i == 15) {
				profiles[i].roads = profiles[i].roads + num_i;
				printf("%s has reached the maximum number of roads.\n", profiles[i].name);
			} else if (profiles[i].roads + num_i > 15) {
				printf("Invalid input. An additional %d roads would put %s over the maximum possible roads.\n", num_i, \
					profiles[i].name);
			} else if (profiles[i].roads + num_i < 2) {
				printf("Invalid input. %d roads would put %s below the minimum possible roads.\n", num_i, \
					profiles[i].name);
			}
		} else if (strcmp(arg, "settle") == 0) {
			if (profiles[i].settlements + num_i >= 0 && profiles[i].settlements + num_i < 5) {
				profiles[i].settlements = profiles[i].settlements + num_i;
			} else if (profiles[i].settlements + num_i == 5) {
				profiles[i].settlements = profiles[i].settlements + num_i;
				printf("%s has reached the maximum number of settlements.\n", profiles[i].name);
			} else if (profiles[i].settlements + num_i > 5) {
				printf("Invalid input. An additional %d settlements would put %s over the maximum possible settlements."
					"\n", num_i, profiles[i].name);
			} else if (profiles[i].settlements + num_i < 2) {
				printf("Invalid input. %d settlements would put %s below the minimum possible settlements."
					"\n", num_i, profiles[i].name);
			}
		} else if (strcmp(arg, "city") == 0) {
			if (profiles[i].cities + num_i >= 0 && profiles[i].cities + num_i < 4) {
				profiles[i].cities = profiles[i].cities + num_i;
			} else if (profiles[i].cities + num_i == 4) {
				profiles[i].cities = profiles[i].cities + num_i;
				printf("%s has reached the maximum number of cities.\n", profiles[i].name);
			} else if (profiles[i].cities + num_i > 4) {
				printf("Invalid input. An additional %d cities would put %s over the maximum possible cities.\n", \
					num_i, profiles[i].name);
			} else if (profiles[i].cities + num_i < 0) {
				printf("Invalid input. %d cities would put %s below the minimum possible cities."
					"\n", num_i, profiles[i].name);
			}
		} else if (strcmp(arg, "dev") == 0) {
			if (numPlayers <= 4 && overall->developmentCards + num_i < 25) {
				profiles[i].developmentCards = profiles[i].developmentCards + num_i;
				overall->developmentCards = num_i > 0 ? overall->developmentCards + num_i : overall->developmentCards;
			} else if (numPlayers <= 4 && overall->developmentCards + num_i == 25) {
				profiles[i].developmentCards = profiles[i].developmentCards + num_i;
				overall->developmentCards = num_i > 0 ? overall->developmentCards + num_i : overall->developmentCards;
				printf("All development cards have been purchased.\n");
			} else if (numPlayers <= 4 && overall->developmentCards + num_i > 25) {
				printf("Invalid input. %d additional development cards would be more than the maximum purchasable.\n", \
					num_i);
			} else if (numPlayers >= 5 && overall->developmentCards + num_i < 34) {
				profiles[i].developmentCards = profiles[i].developmentCards + num_i;
				overall->developmentCards = num_i > 0 ? overall->developmentCards + num_i : overall->developmentCards;
			} else if (numPlayers >= 5 && overall->developmentCards + num_i == 34) {
				profiles[i].developmentCards = profiles[i].developmentCards + num_i;
				overall->developmentCards = num_i > 0 ? overall->developmentCards + num_i : overall->developmentCards;
				printf("All development cards have been purchased.\n");
			} else if (numPlayers >= 5 && overall->developmentCards + num_i > 34) {
				printf("Invalid input. %d additional development cards would be more than the maximum purchasable.\n", \
					num_i);
			} else if (profiles[i].developmentCards + num_i < 0) {
				printf("Invalid input. %d flipped development cards would put %s below the minimum possible unflipped "
					"development cards.\n", abs(num_i), profiles[i].name);
			}
		} else if (strcmp(arg, "knight") == 0) {
			if (numPlayers <= 4 && overall->knightCards + num_i < 14) {
				profiles[i].knightCards = profiles[i].knightCards + num_i;
				overall->knightCards = num_i > 0 ? overall->knightCards + num_i : overall->knightCards;
			} else if (numPlayers <= 4 && overall->knightCards + num_i == 14) {
				profiles[i].knightCards = profiles[i].knightCards + num_i;
				overall->knightCards = num_i > 0 ? overall->knightCards + num_i : overall->knightCards;
				printf("All knight cards have been used.\n");
			} else if (numPlayers <= 4 && overall->knightCards + num_i > 14) {
				printf("Invalid input. %d additional knight cards would be more than the maximum usable.\n", \
					num_i);
			} else if (numPlayers >= 5 && overall->knightCards + num_i < 20) {
				profiles[i].knightCards = profiles[i].knightCards + num_i;
				overall->knightCards = num_i > 0 ? overall->knightCards + num_i : overall->knightCards;
			} else if (numPlayers >= 5 && overall->knightCards + num_i == 20) {
				profiles[i].knightCards = profiles[i].knightCards + num_i;
				overall->knightCards = num_i > 0 ? overall->knightCards + num_i : overall->knightCards;
				printf("All knight cards have been used.\n");
			} else if (numPlayers >= 5 && overall->knightCards + num_i > 20) {
				printf("Invalid input. %d additional knight cards would be more than the maximum usable.\n", \
					num_i);
			} else if (profiles[i].knightCards + num_i < 0) {
				printf("Invalid input. %d knight cards would put %s below the minimum possible knight cards."
					"\n", num_i, profiles[i].name);
			}
		} else {
			printf("\"%s\" is an invalid argument.\n", arg);
		}

		// Parse next argument from input
		arg = strtok(NULL, "- ");
		num = strtok(NULL, " ");
		if (arg != NULL && num == NULL) {
			printf("Missing input for argument %s.\n", arg);
		}
	}
}

void display(int numPlayers, struct Player* profiles, struct Overall* overall) {
	bool exit = false;
	while (!exit) {
		printf("\nDisplay Options:\n"
			"1. Enter \"list\" to list names of all players.\n"
			"2. Enter \"vp\" to print each player's victory points.\n"
			"3. Enter \"show\" followed by name of player to display their data.\n"
			"	e.g. show Raj\n"
			"4. Enter \"rolls\" to graph all recorded rolls.\n"
			"5. Enter \"exit\" or \"e\" to return to the previous menu.\n\n");

		// Listen for user command
		char command[31] = "";
		int eof = 0;
		while (eof == 0) {
			eof = scanf("%30[^\n]", command);
			int i = 0;
			while (getchar() != '\n') {
				i = i + 1;
			}
			if (i > 0) {
				printf("Command is longer than 30 characters. Truncated to %s.\n", command);
			}
		}

		// Execute command
		if (strcmp(command, "list") == 0) {
			printf("The players are: ");
			int i;
			for (i = 0; i < numPlayers - 1; i++) {
				printf("%s, ", profiles[i].name);
			}
			printf("%s\n", profiles[i].name);
		} else if (strcmp(command, "vp") == 0) {
			// Calculate each player's earned and potential VPs
			int victoryPoints[numPlayers][2];
			int maxRoadsBuilt = 0;
			int maxRoadsPlayer = 0;
			int maxKnightsUsed = 0;
			int maxKnightsPlayer = 0;
			for (int i = 0; i < numPlayers; i++) {
				victoryPoints[i][0] = profiles[i].settlements + 2*profiles[i].cities;
				if (profiles[i].roads >= 5 && profiles[i].roads > maxRoadsBuilt) {
					maxRoadsBuilt = profiles[i].roads;
					maxRoadsPlayer = i;
				}
				if (profiles[i].knightCards >= 3 && profiles[i].knightCards > maxKnightsUsed) {
					maxKnightsUsed = profiles[i].knightCards;
					maxKnightsPlayer = i;
				}
				int potentialVP = (profiles[i].developmentCards >= 0 && profiles[i].developmentCards < 5) \
					? profiles[i].developmentCards : 5;
				victoryPoints[i][1] = victoryPoints[i][0] + potentialVP < 9 ? potentialVP : 9 - victoryPoints[i][0];
			}
			victoryPoints[maxRoadsPlayer][0] = maxRoadsBuilt >= 5 ? victoryPoints[maxRoadsPlayer][0] + 2 : \
				victoryPoints[maxRoadsPlayer][0];
			victoryPoints[maxKnightsPlayer][0] = maxKnightsUsed >= 3 ? victoryPoints[maxKnightsPlayer][0] + 2 : \
				victoryPoints[maxKnightsPlayer][0];

			// Print board
			char board[550] = "";
			for (int i = 0; i < numPlayers; ++i) {
				snprintf(board + strlen(board), 1000 - strlen(board), "%s: %d earned VPs and %d potential VPs "
					"from unflipped development cards.\n", profiles[i].name, victoryPoints[i][0], victoryPoints[i][1]);
			}
			puts(board);
		} else if (strcmp(strtok(command, " "), "show") == 0) {
			char* name = strtok(NULL, "\n");
			int i = 0;
			while (name != NULL && i < numPlayers && strcmp(profiles[i].name, name) != 0) {
				i = i + 1;
			}
			if (name != NULL && i < numPlayers) {
				printf("%s has %d roads, %d settlements, %d cities, %d unused development cards, and %d knight cards."
					"\n", profiles[i].name, profiles[i].roads, profiles[i].settlements, profiles[i].cities, \
					profiles[i].developmentCards, profiles[i].knightCards);
			} else {
				printf("There is no player named %s.\n", name);
			}
		} else if (strcmp(command, "rolls") == 0) {
			// Graph rolls
			char graph[1000] = "";
			int totalRolls = 0;
			for (int i = 0; i < 11; i++) {
				if (i < 8) {
					snprintf(graph + strlen(graph), 1000 - strlen(graph), " ");
				}
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "%d | ", i + 2);
				for (int j = 0; j < overall->rolls[i]; j++) {
					snprintf(graph + strlen(graph), 1000 - strlen(graph), "* ");
					totalRolls = totalRolls + 1;
				}
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\n");
			}

			// Remind last roll and last person to roll
			if (overall->lastRollPerson != NULL) {
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\n%s was the last person to roll and rolled %d.\n", \
					overall->lastRollPerson, overall->lastRoll);
			} else {
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\nNo one has rolled yet.\n");
			}

			// Check normality with Anderson-Darling Test
			if (totalRolls >= 5) {
				int rollSet[totalRolls];
				for (int i = 0; i < totalRolls; i++) {
					for (int j = 0; j < 11; j++) {
						for (int k = 0; k < overall->rolls[j]; k++) {
							rollSet[i] = j;
						}
					}
				}
				int rollCDF[11] = {1/36, 2/36, 3/36, 4/36, 5/36, 6/36, 5/36, 4/36, 3/36, 2/36, 1/36};
				int S = 0;
				for (int i = 0; i < totalRolls; i++) {
					S = S + ((2*i-1)/totalRolls)*(log(rollCDF[rollSet[i]]) + log(1-rollCDF[totalRolls + 1 - i]));
				}
				int A_2 = -totalRolls - S;
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\nH0: the rolls are normally distributed\n"
					"Ha: the rolls are not normally distributed\n");
				if (A_2 > 0.752) {
					snprintf(graph + strlen(graph), 1000 - strlen(graph), "Reject H0: 95%% confident the rolls are not "
						"normally distributed.\n");
				} else {
					snprintf(graph + strlen(graph), 1000 - strlen(graph), "Failed to Reject H0: not enough evidence "
						"that the rolls are not normally distributed.\n");
				}
			} else {
				snprintf(graph + strlen(graph), 1000 - strlen(graph), "\nNot enough to rolls to test normality.\n");
			}

			puts(graph);
		} else if (strcmp(command, "exit") == 0 || strcmp(command, "e") == 0) {
			exit = true;
		} else {
			printf("Invalid command.\n");
		}
	}
}

void save(int numPlayers, struct Player* profiles, struct Overall* overall) {
	printf("\nSave complete.\n");

	// Unallocate space used by player profiles
	for (int i = 0; i < numPlayers; i++) {
		free(profiles[i].name);
	}
	free(profiles);
	free(overall);
}

void menu(int numPlayers, struct Player* profiles, struct Overall* overall, bool* quit) {
	printf("\nMenu:\n"
		"1. Enter name of player followed by applicable arguments to record "
			"data.\n"
		"	Argument List:\n"
		"		To record roll number: -roll integer\n"
		"		To add roads: -rd integer\n"
		"		To add settlements: -settle integer\n"
		"		To add cities: -city integer\n"
		"		To add unflipped or subtract flipped development cards: -dev integer\n"
		"		To add knight cards: -knight integer\n"
		"	e.g. Raj rolled 11 this turn, built a road and a settlement, and used a knight.\n"
		"		 Raj -roll 11 -rd 1 -settle 1 -knight 1 -dev -1\n"
		"	Note: negative integers can be used to fix inaccurate recordings.\n"
		"2. Enter \"display\" or \"d\" to display recorded data.\n"
		"3. Enter \"quit\" or \"q\" to save data and end program.\n\n");

	// Listen for user command
	char command[71] = "";
	int eof = 0;
		while (eof == 0) {
			eof = scanf("%70[^\n]", command);
			int i = 0;
			while (getchar() != '\n') {
				i = i + 1;
			}
			if (i > 0) {
				printf("Command is longer than 70 characters. Truncated to %s.\n", command);
			}
		}

	// Execute command
	if (strcmp(command, "display") == 0 || strcmp(command, "d") == 0) {
		display(numPlayers, profiles, overall);
	} else if (strcmp(command, "quit") == 0 || strcmp(command, "q") == 0) {
		*quit = true;
		save(numPlayers, profiles, overall);
	} else {
		record(numPlayers, profiles, overall, command);
	}
}

int main() {
	printf("\nWelcome to the Catan Tracker!\n");

	// Setup player profiles
	int numPlayers = 0;
	struct Player* profiles = NULL;
	setup(&numPlayers, &profiles);

	// Setup overall data
	struct Overall* overall = malloc(sizeof(struct Overall));
	memset(overall, 0, sizeof(struct Overall));

	// Run menu
	bool quit = false;
	while (!quit) {
		menu(numPlayers, profiles, overall, &quit);
	}

	printf("\nQuitting Catan Tracker.\n\n");

	return 0;
}