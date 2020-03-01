#include <string.h>
#include <version.h>

/* - On some systems git is not installed or
 *   installed on a place where FindGit.cmake cannot find it
 * - No git information is present (no .git directory)
 * in those cases clear the gitVersionString (would have string GIT-NOTFOUND).
 */
char *getGitVersion(void)
{
  static char gitVersionString[100];
  strcpy(gitVersionString,"6c06e912338176303d1a1e041a39984ff6fd42be");
  strcat(gitVersionString,!strcmp("false","true")?"*":"");
  if (!strcmp("6c06e912338176303d1a1e041a39984ff6fd42be", "GIT-NOTFOUND")) gitVersionString[0] = '\0';
  return gitVersionString;
}
