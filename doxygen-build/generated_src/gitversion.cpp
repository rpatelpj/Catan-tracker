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
  strcpy(gitVersionString,"30887ace1d06cc76bdd1b5aa3895e21dc39fddab");
  strcat(gitVersionString,!strcmp("false","true")?"*":"");
  if (!strcmp("30887ace1d06cc76bdd1b5aa3895e21dc39fddab", "GIT-NOTFOUND")) gitVersionString[0] = '\0';
  return gitVersionString;
}
