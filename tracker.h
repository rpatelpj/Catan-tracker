/**
 * @file tracker.h
 * @brief 'tracker' function prototypes.
 */

#ifndef TRACKER
#define TRACKER

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * @struct Player
 *
 * @brief Single player profile.
 *
 * Record of player progress.
 */
struct Player;

/**
 * @struct Overall
 *
 * @brief Game status.
 *
 * Record of overall game status as needed for later computations.
 */
struct Overall;

/**
 * @brief Setup tracker.
 *
 * Allocate memory for necessary data collection units.
 *
 * @param numPlayers number of players
 * @param profiles player profiles
 * @param overall overall game status
 */
void setup(int* numPlayers, struct Player** profiles, struct Overall** overall);

/**
 * @brief Record player progress.
 *
 * Process user input to update player profiles.
 *
 * @param numPlayers number of players
 * @param profiles player profiles
 * @param overall overall game status
 * @param command new profile data
 */
void record(int numPlayers, struct Player* profiles, struct Overall* overall, char* command);

/**
 * @brief Display game results.
 *
 * Process records and display user-requested results.
 *
 * @param numPlayers number of players
 * @param profiles player profiles
 * @param overall overall game status
 */
void display(int numPlayers, struct Player* profiles, struct Overall* overall);

/**
 * @brief Save game results.
 *
 * Export data as CSV for record-keeping and unallocate memory.
 *
 * @param numPlayers number of players
 * @param profiles player profiles
 * @param overall overall game status
 */
void save(int numPlayers, struct Player* profiles, struct Overall* overall);

/**
 * @brief Provide 'tracker' options.
 *
 * Allow user to record data, display results, or save results and quit 'tracker'.
 *
 * @param numPlayers number of players
 * @param profiles player profiles
 * @param overall overall game status
 * @param quit application termination flag
 */
void menu(int numPlayers, struct Player* profiles, struct Overall* overall, bool* quit);

#endif /* TRACKER */