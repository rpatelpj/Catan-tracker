/**
 * @file main.c
 * @brief Driver code.
 */

#include "tracker.h"

/**
 * Setup and run 'tracker'.
 */
int main() {
	// Setup
	int numPlayers = 0;
	struct Player* profiles = NULL;
	struct Overall* overall = NULL;
	setup(&numPlayers, &profiles, &overall);

	// Run
	bool quit = false;
	while (!quit) {
		menu(numPlayers, profiles, overall, &quit);
	}

	return 0;
}